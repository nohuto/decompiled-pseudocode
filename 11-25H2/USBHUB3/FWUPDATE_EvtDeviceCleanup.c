/*
 * XREFs of FWUPDATE_EvtDeviceCleanup @ 0x140040CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FWUPDATE_EvtDeviceCleanup(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006C170);
  if ( *(_QWORD *)(*(_QWORD *)result + 2664LL) == a1 )
    *(_QWORD *)(*(_QWORD *)result + 2664LL) = 0LL;
  return result;
}
