/*
 * XREFs of IommupPasidDeviceCreate @ 0x14054BED8
 * Callers:
 *     IommupDeviceEnableSvm @ 0x1406FD184 (IommupDeviceEnableSvm.c)
 *     IommuPasidDeviceCreate @ 0x140701910 (IommuPasidDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline @ 0x14054ACD4 (Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline.c)
 *     IommuGetLibraryContext @ 0x140561F90 (IommuGetLibraryContext.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IommupPasidDeviceCreate(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rdi
  int LibraryContext; // ebp
  void *v8; // rax
  __int64 v9; // rbx
  bool v10; // zf
  __int64 v11; // rcx
  char *v12; // rax
  char *v13; // r14
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
    if ( (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_QWORD *)(v9 + 40) = v9 + 32;
      *(_QWORD *)(v9 + 32) = v9 + 32;
    }
    v10 = HalpHvIommu == 0;
    *(_DWORD *)(v9 + 48) = a2;
    if ( v10 )
    {
      LibraryContext = IommuGetLibraryContext(a2, *(unsigned int *)(a1 + 72), 0LL, &v16);
      if ( LibraryContext < 0 )
      {
        HalpMmAllocCtxFree(v11, v9);
        goto LABEL_18;
      }
      *(_QWORD *)(v9 + 56) = v16;
    }
    *(_QWORD *)(v9 + 16) = a1;
    v12 = (char *)KeAbPreAcquire(a1 + 376, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 376), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 376), v12, a1 + 376);
    if ( v13 )
      v13[10] = 1;
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
LABEL_18:
  *a3 = v3;
  return (unsigned int)LibraryContext;
}
