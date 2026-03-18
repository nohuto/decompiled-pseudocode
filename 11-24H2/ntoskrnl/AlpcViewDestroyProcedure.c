/*
 * XREFs of AlpcViewDestroyProcedure @ 0x1408E49A0
 * Callers:
 *     AlpcpReleaseAttributes @ 0x140890220 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpRestoreWriteAccess @ 0x1408E48E8 (AlpcpRestoreWriteAccess.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcViewDestroyProcedure(__int64 a1)
{
  ULONG_PTR v1; // rbp
  ULONG_PTR v3; // rbx
  _KPROCESS *Process; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ecx
  int v9; // eax
  _QWORD *v10; // rbx
  unsigned __int64 *v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  PRKPROCESS *v16; // rsi
  _KPROCESS *v17; // rcx
  void *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 *p_DirectoryTableBase; // rbp
  _QWORD *v22; // rax
  _QWORD *v23; // r14
  volatile signed __int64 *v24; // rdi
  _OWORD v26[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0LL;
  memset(v26, 0, sizeof(v26));
  v3 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 )
  {
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(a1 + 16));
    **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(v3 + 52) - 1;
    *(_DWORD *)(v3 + 52) = v8;
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      v9 = *(_DWORD *)(v3 + 48);
      if ( (v9 & 1) != 0 )
      {
        *(_QWORD *)(v3 + 80) = 0LL;
        v1 = *(_QWORD *)(v3 + 72);
        if ( v1 )
        {
          AlpcpRestoreWriteAccess(*(_QWORD *)(v3 + 72));
        }
        else if ( !v8 )
        {
          *(_DWORD *)(v3 + 48) = v9 & 0xFFFFFFFE;
        }
      }
    }
    AlpcpUnlockBlob(v3, v5, v6, v7);
    v10 = (_QWORD *)(a1 - 48);
    v11 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 328LL);
    v12 = KeAbPreAcquire((__int64)v11, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, (__int64)v12, (__int64)v11);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    v14 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
    {
      if ( (_QWORD *)v14[1] != v10 || (v15 = (_QWORD *)v10[1], (_QWORD *)*v15 != v10) )
        __fastfail(3u);
      *v15 = v14;
      v14[1] = v15;
      v10[1] = v10;
      *v10 = v10;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
    if ( (*(_DWORD *)(a1 + 72) & 8) != 0 )
    {
      MiRemoveFromSystemSpace(*(_QWORD *)(a1 + 40), 1);
      v16 = (PRKPROCESS *)(a1 + 32);
    }
    else
    {
      v16 = (PRKPROCESS *)(a1 + 32);
      v17 = *(_KPROCESS **)(a1 + 32);
      if ( Process != v17 )
        KiStackAttachProcess(v17, 0, (__int64)v26);
      v18 = *(void **)(a1 + 56);
      if ( v18 )
        MmUnsecureVirtualMemory(v18);
      MiUnmapViewOfSection(*v16);
      if ( Process != *v16 )
        KiUnstackDetachProcess((__int64)v26, 0);
    }
    if ( v1 )
      AlpcpDereferenceBlobEx(v1, 1, v19, v20);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16), 1, v19, v20);
    p_DirectoryTableBase = &(*v16)[3].DirectoryTableBase;
    v22 = KeAbPreAcquire((__int64)p_DirectoryTableBase, 0LL);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_DirectoryTableBase, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_DirectoryTableBase, (__int64)v22, (__int64)p_DirectoryTableBase);
    if ( v23 )
      *((_BYTE *)v23 + 10) = 1;
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v24 = (volatile signed __int64 *)&(*v16)[3].DirectoryTableBase;
    if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v24);
    KeAbPostRelease((ULONG_PTR)v24);
    ObfDereferenceObjectWithTag(*v16, 0x63706C41u);
  }
  return 0LL;
}
