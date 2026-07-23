/*
 * XREFs of AlpcViewDestroyProcedure @ 0x140897790
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x140897C10 (AlpcMessageDestroyProcedure.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     AlpcpRestoreWriteAccess @ 0x140896794 (AlpcpRestoreWriteAccess.c)
 *     MmUnsecureVirtualMemory @ 0x140896BF0 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcViewDestroyProcedure(__int64 a1)
{
  ULONG_PTR v1; // rbp
  ULONG_PTR v3; // rbx
  _KPROCESS *Process; // r15
  int v5; // ecx
  int v6; // eax
  _QWORD *v7; // rbx
  unsigned __int64 *v8; // rsi
  char *v9; // rax
  char *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  PRKPROCESS *v13; // rsi
  _KPROCESS *v14; // rcx
  void *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 *p_DirectoryTableBase; // rbp
  char *v19; // rax
  char *v20; // r14
  volatile signed __int64 *v21; // rdi
  _OWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0LL;
  memset(v23, 0, sizeof(v23));
  v3 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 )
  {
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(a1 + 16));
    **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v5 = *(_DWORD *)(v3 + 52) - 1;
    *(_DWORD *)(v3 + 52) = v5;
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      v6 = *(_DWORD *)(v3 + 48);
      if ( (v6 & 1) != 0 )
      {
        *(_QWORD *)(v3 + 80) = 0LL;
        v1 = *(_QWORD *)(v3 + 72);
        if ( v1 )
        {
          AlpcpRestoreWriteAccess(*(_QWORD *)(v3 + 72));
        }
        else if ( !v5 )
        {
          *(_DWORD *)(v3 + 48) = v6 & 0xFFFFFFFE;
        }
      }
    }
    AlpcpUnlockBlob(v3);
    v7 = (_QWORD *)(a1 - 48);
    v8 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 328LL);
    v9 = (char *)KeAbPreAcquire((__int64)v8, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
    if ( v10 )
      v10[10] = 1;
    v11 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 != v7 )
    {
      if ( (_QWORD *)v11[1] != v7 || (v12 = (_QWORD *)v7[1], (_QWORD *)*v12 != v7) )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = v12;
      v7[1] = v7;
      *v7 = v7;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease((ULONG_PTR)v8);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
    if ( (*(_DWORD *)(a1 + 72) & 8) != 0 )
    {
      MiRemoveFromSystemSpace(*(_QWORD *)(a1 + 40), 1);
      v13 = (PRKPROCESS *)(a1 + 32);
    }
    else
    {
      v13 = (PRKPROCESS *)(a1 + 32);
      v14 = *(_KPROCESS **)(a1 + 32);
      if ( Process != v14 )
        KiStackAttachProcess(v14, 0, (__int64)v23);
      v15 = *(void **)(a1 + 56);
      if ( v15 )
        MmUnsecureVirtualMemory(v15);
      MiUnmapViewOfSection(*v13, *(_QWORD *)(a1 + 40), 0, 0);
      if ( Process != *v13 )
        KiUnstackDetachProcess((__int64)v23, 0, v16, v17);
    }
    if ( v1 )
      AlpcpDereferenceBlobEx(v1);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16));
    p_DirectoryTableBase = &(*v13)[3].DirectoryTableBase;
    v19 = (char *)KeAbPreAcquire((__int64)p_DirectoryTableBase, 0LL);
    v20 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_DirectoryTableBase, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_DirectoryTableBase, v19, (__int64)p_DirectoryTableBase);
    if ( v20 )
      v20[10] = 1;
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v21 = (volatile signed __int64 *)&(*v13)[3].DirectoryTableBase;
    if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v21);
    KeAbPostRelease((ULONG_PTR)v21);
    ObfDereferenceObjectWithTag(*v13, 0x63706C41u);
  }
  return 0LL;
}
