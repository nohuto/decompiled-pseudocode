/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x14071A548
 * Callers:
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408D0F84 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408D1380 (PiPnpRtlObjectEventCreate.c)
 *     PiDmGetObject @ 0x1408D1680 (PiDmGetObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140968B58 (PiDmAddCacheReferenceForObject.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, __int64 a2)
{
  int Object; // eax
  int v4; // esi
  _DWORD *v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+60h] [rbp+30h] BYREF
  PVOID v12; // [rsp+68h] [rbp+38h] BYREF

  P = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  Object = PiDmGetObject(1LL, a2, &P);
  v4 = Object;
  if ( Object >= 0 )
  {
    v4 = 0;
LABEL_3:
    v5 = P;
    goto LABEL_4;
  }
  if ( Object != -1073741772 )
    goto LABEL_3;
  v4 = PiDmAddCacheReferenceForObject(1LL, a2, &P);
  if ( v4 < 0 )
    goto LABEL_3;
  v5 = P;
  KsepCacheLock(P);
  v5[8] |= 1u;
  PiDmObjectReleaseLock((ULONG_PTR)v5);
  if ( (int)PiPnpRtlBeginOperation(&v12, v7, v8) >= 0 )
  {
    PiPnpRtlDisableRemoveOperationDispatch();
    v9 = PiPnpRtlObjectEventCreate(a2, 1LL, v12, &v10);
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegion();
    if ( v9 >= 0 && v10 )
      *(_DWORD *)(v10 + 4) |= 1u;
    PiPnpRtlEndOperation(v12);
  }
LABEL_4:
  if ( v5 )
    PiDmObjectRelease(v5);
  return (unsigned int)v4;
}
