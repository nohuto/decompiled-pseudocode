/*
 * XREFs of IommupPasidDeviceCreate @ 0x14054E5AC
 * Callers:
 *     IommupDeviceEnableSvm @ 0x1406FF544 (IommupDeviceEnableSvm.c)
 *     IommuPasidDeviceCreate @ 0x140703D50 (IommuPasidDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     IommuGetLibraryContext @ 0x140564360 (IommuGetLibraryContext.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall IommupPasidDeviceCreate(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rdi
  int LibraryContext; // ebp
  void *v8; // rax
  __int64 v9; // rbx
  bool v10; // zf
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  __int64 *v14; // rcx
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v16 = 0LL;
  LibraryContext = 0;
  v8 = (void *)HalpMmAllocCtxAlloc(a1, 64LL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x40uLL);
    v10 = HalpHvIommu == 0;
    *(_DWORD *)(v9 + 48) = a2;
    if ( v10 )
    {
      LibraryContext = IommuGetLibraryContext(a2, *(unsigned int *)(a1 + 72), 0LL, &v16);
      if ( LibraryContext < 0 )
      {
        HalpMmAllocCtxFree(v11, v9);
        goto LABEL_16;
      }
      *(_QWORD *)(v9 + 56) = v16;
    }
    *(_QWORD *)(v9 + 16) = a1;
    v12 = KeAbPreAcquire(a1 + 376, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 376), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 376), (__int64)v12, a1 + 376);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    v14 = *(__int64 **)(a1 + 368);
    if ( *v14 != a1 + 360 )
      __fastfail(3u);
    *(_QWORD *)v9 = a1 + 360;
    *(_QWORD *)(v9 + 8) = v14;
    *v14 = v9;
    *(_QWORD *)(a1 + 368) = v9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 376), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 376));
    KeAbPostRelease(a1 + 376);
    v3 = v9;
  }
  else
  {
    LibraryContext = -1073741670;
  }
LABEL_16:
  *a3 = v3;
  return (unsigned int)LibraryContext;
}
