/*
 * XREFs of PpProfileQueryHardwareProfileChange @ 0x14072B93C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 *     PipProcessStartPhase1 @ 0x1409BE300 (PipProcessStartPhase1.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14071E588 (PnpRequestHwProfileChangeNotification.c)
 */

__int64 __fastcall PpProfileQueryHardwareProfileChange(char a1, int a2, _DWORD *a3, UNICODE_STRING *a4)
{
  __int64 *v8; // rax
  char v9; // bl
  bool v10; // zf
  __int64 result; // rax

  ExAcquireFastMutex(&PiProfileDeviceListLock);
  v8 = (__int64 *)PiProfileDeviceListHead;
  v9 = 0;
  while ( v8 != &PiProfileDeviceListHead )
  {
    v10 = *((_DWORD *)v8 - 2) == 2;
    v8 = (__int64 *)*v8;
    if ( v10 )
      v9 = 1;
  }
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  if ( a1 )
    return 0LL;
  if ( v9 )
  {
    PiProfileChangeCancelRequired = 0;
    return 0LL;
  }
  result = PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_QUERY_CHANGE, a2, a3, a4);
  PiProfileChangeCancelRequired = (int)result >= 0;
  return result;
}
