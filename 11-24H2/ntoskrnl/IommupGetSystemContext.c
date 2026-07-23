/*
 * XREFs of IommupGetSystemContext @ 0x140562910
 * Callers:
 *     IommuGetLibraryContext @ 0x140561F90 (IommuGetLibraryContext.c)
 *     IommuGetConfiguration @ 0x140C168A0 (IommuGetConfiguration.c)
 *     IommuHvGetConfiguration @ 0x140C168F0 (IommuHvGetConfiguration.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     IommupHvCreateSvmPasidSpace @ 0x1405636C4 (IommupHvCreateSvmPasidSpace.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

PVOID *__fastcall IommupGetSystemContext(unsigned int a1)
{
  char *v2; // rax
  __int64 v3; // rcx
  signed __int8 v4; // cf
  char *v5; // rbx
  PVOID *v6; // rax
  PVOID *v7; // rbx
  PVOID *v8; // rax
  __int64 v9; // rcx
  _QWORD *v11; // rax

  v2 = (char *)KeAbPreAcquire((__int64)&IommupSystemContextListPushLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&IommupSystemContextListPushLock, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&IommupSystemContextListPushLock, v2, (__int64)&IommupSystemContextListPushLock);
  if ( v5 )
    v5[10] = 1;
  v6 = (PVOID *)IommupSystemContextListHead;
  if ( IommupSystemContextListHead != &IommupSystemContextListHead )
  {
    while ( 1 )
    {
      v3 = *((unsigned int *)v6 + 4);
      v7 = v6;
      if ( (_DWORD)v3 == a1 )
        goto LABEL_19;
      v6 = (PVOID *)*v6;
      if ( v6 == &IommupSystemContextListHead )
      {
        if ( (_DWORD)v3 == a1 )
          goto LABEL_19;
        break;
      }
    }
  }
  v8 = (PVOID *)HalpMmAllocCtxAlloc(v3, 64LL);
  v7 = v8;
  if ( !v8 )
  {
LABEL_13:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupSystemContextListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&IommupSystemContextListPushLock);
    KeAbPostRelease((ULONG_PTR)&IommupSystemContextListPushLock);
    return 0LL;
  }
  memset_0(v8, 0, 0x40uLL);
  *((_DWORD *)v7 + 4) = a1;
  v7[5] = v7 + 4;
  v7[4] = v7 + 4;
  v7[7] = v7 + 6;
  v7[6] = v7 + 6;
  v7[3] = 0LL;
  if ( HalpHvIommu && (int)IommupHvCreateSvmPasidSpace(a1) < 0 )
  {
    HalpMmAllocCtxFree(v9, (__int64)v7);
    goto LABEL_13;
  }
  v11 = IommupSystemContextListHead;
  if ( *((PVOID **)IommupSystemContextListHead + 1) != &IommupSystemContextListHead )
    __fastfail(3u);
  *v7 = IommupSystemContextListHead;
  v7[1] = &IommupSystemContextListHead;
  v11[1] = v7;
  IommupSystemContextListHead = v7;
LABEL_19:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupSystemContextListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommupSystemContextListPushLock);
  KeAbPostRelease((ULONG_PTR)&IommupSystemContextListPushLock);
  return v7;
}
