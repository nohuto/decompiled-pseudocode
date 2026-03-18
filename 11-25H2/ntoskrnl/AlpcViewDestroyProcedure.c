/*
 * XREFs of AlpcViewDestroyProcedure @ 0x1408B3AF0
 * Callers:
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x1408B48C0 (MmUnsecureVirtualMemory.c)
 *     AlpcpRestoreWriteAccess @ 0x1408B4984 (AlpcpRestoreWriteAccess.c)
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
  __int64 *v9; // rax
  __int64 *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  PRKPROCESS *v13; // rsi
  _KPROCESS *v14; // rcx
  void *v15; // rcx
  unsigned __int64 *p_DirectoryTableBase; // rbp
  __int64 *v17; // rax
  __int64 *v18; // r14
  volatile signed __int64 *v19; // rdi
  _OWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0LL;
  memset(v21, 0, sizeof(v21));
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
    v9 = KeAbPreAcquire((__int64)v8, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
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
        KiStackAttachProcess(v14, 0, (__int64)v21);
      v15 = *(void **)(a1 + 56);
      if ( v15 )
        MmUnsecureVirtualMemory(v15);
      MiUnmapViewOfSection(*v13);
      if ( Process != *v13 )
        KiUnstackDetachProcess((__int64)v21, 0LL);
    }
    if ( v1 )
      AlpcpDereferenceBlobEx(v1, 1);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16), 1);
    p_DirectoryTableBase = &(*v13)[3].DirectoryTableBase;
    v17 = KeAbPreAcquire((__int64)p_DirectoryTableBase, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_DirectoryTableBase, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_DirectoryTableBase, v17, (__int64)p_DirectoryTableBase);
    if ( v18 )
      *((_BYTE *)v18 + 10) = 1;
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v19 = (volatile signed __int64 *)&(*v13)[3].DirectoryTableBase;
    if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v19);
    KeAbPostRelease((ULONG_PTR)v19);
    ObfDereferenceObjectWithTag(*v13, 0x63706C41u);
  }
  return 0LL;
}
