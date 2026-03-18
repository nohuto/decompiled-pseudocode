/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x1407264C8
 * Callers:
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B4924 (PiDmAddCacheReferenceForObject.c)
 *     KsepCacheLock @ 0x1408BB520 (KsepCacheLock.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408CB870 (PiPnpRtlObjectEventCreate.c)
 *     PiDmGetObject @ 0x1408CBB70 (PiDmGetObject.c)
 *     PiPnpRtlBeginOperation @ 0x1408CBF78 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408CC158 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408CC6EC (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiDmObjectRelease @ 0x1408D0A30 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408D12E4 (PiDmObjectReleaseLock.c)
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
  PVOID v11; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  v11 = 0LL;
  P = 0LL;
  v10 = 0LL;
  Object = PiDmGetObject(1LL, a2, &v11);
  v4 = Object;
  if ( Object >= 0 )
  {
    v4 = 0;
LABEL_3:
    v5 = v11;
    goto LABEL_4;
  }
  if ( Object != -1073741772 )
    goto LABEL_3;
  v4 = PiDmAddCacheReferenceForObject(1LL, a2, &v11);
  if ( v4 < 0 )
    goto LABEL_3;
  v5 = v11;
  KsepCacheLock(v11);
  v5[8] |= 1u;
  PiDmObjectReleaseLock((ULONG_PTR)v5);
  if ( (int)PiPnpRtlBeginOperation(&P, v7, v8) >= 0 )
  {
    PiPnpRtlDisableRemoveOperationDispatch();
    v9 = PiPnpRtlObjectEventCreate(a2, 1LL, P, &v10);
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegion();
    if ( v9 >= 0 && v10 )
      *(_DWORD *)(v10 + 4) |= 1u;
    PiPnpRtlEndOperation(P);
  }
LABEL_4:
  if ( v5 )
    PiDmObjectRelease(v5);
  return (unsigned int)v4;
}
