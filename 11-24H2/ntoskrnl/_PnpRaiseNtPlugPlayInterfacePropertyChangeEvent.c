/*
 * XREFs of _PnpRaiseNtPlugPlayInterfacePropertyChangeEvent @ 0x1408B3538
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 * Callees:
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x1408B32A8 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayInterfacePropertyChangeEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 496LL);
  if ( result )
    return PnpInterfaceRaisePropertyChangeEventWorker(
             *(__int64 *)&PiPnpRtlCtx,
             a2,
             0LL,
             0LL,
             (__int64)&DEVPKEY_DeviceInterface_Enabled);
  return result;
}
