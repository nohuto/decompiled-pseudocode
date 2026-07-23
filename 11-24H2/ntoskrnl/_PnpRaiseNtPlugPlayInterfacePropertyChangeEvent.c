/*
 * XREFs of _PnpRaiseNtPlugPlayInterfacePropertyChangeEvent @ 0x1408B0E28
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 * Callees:
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x1408B0B98 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
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
