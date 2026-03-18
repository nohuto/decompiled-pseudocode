/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140968418
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3B0 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD1D0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmObjectManagerReleaseLock @ 0x140968CC0 (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x140968D50 (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x140968F10 (PiDmLookupObject.c)
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
  volatile signed __int64 *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v8 = 0;
  if ( wcsicmp(a2, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}") )
  {
    PiDmObjectManagerAcquireSharedLock(&PiDmDeviceContainerManager);
    v9 = PiDmLookupObject(&PiDmDeviceContainerManager, a2);
    v10 = (volatile signed __int64 *)v9;
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
      v8 = PiDmListEnumObjectsWithCallback(
             3,
             v10,
             (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback,
             (__int64)&v12);
      if ( v8 >= 0 )
        *a5 = v13;
    }
    if ( v10 )
      PiDmObjectRelease((unsigned int *)v10);
  }
  else
  {
    *a5 = 1;
  }
  return (unsigned int)v8;
}
