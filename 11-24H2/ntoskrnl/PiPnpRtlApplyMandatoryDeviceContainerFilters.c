/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1408B1AD4
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B2B2C (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1408B2B9C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x1408B2D60 (PiDmLookupObject.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD070 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceContainerFilters(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  int v8; // edi
  __int64 v9; // rax
  void *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v8 = 0;
  if ( wcsicmp(a2, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}") )
  {
    PiDmObjectManagerAcquireSharedLock(&PiDmDeviceContainerManager);
    v9 = PiDmLookupObject(&PiDmDeviceContainerManager, a2);
    v10 = (void *)v9;
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    else
      v8 = -1073741772;
    PiDmObjectManagerReleaseLock(&PiDmDeviceContainerManager);
    if ( v8 >= 0 )
    {
      *(_QWORD *)&v12 = a1;
      *((_QWORD *)&v12 + 1) = a4;
      LOBYTE(v13) = 0;
      v8 = ((__int64 (__fastcall *)(__int64, void *, __int64 (__fastcall *)(), __int128 *))PiDmListEnumObjectsWithCallback)(
             3LL,
             v10,
             PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback,
             &v12);
      if ( v8 >= 0 )
        *a5 = v13;
    }
    if ( v10 )
      PiDmObjectRelease(v10);
  }
  else
  {
    *a5 = 1;
  }
  return (unsigned int)v8;
}
