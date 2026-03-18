/*
 * XREFs of UsbhAcquirePdoUxdLock @ 0x1400394E4
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x14002A6CC (UsbhUpdateUxdSettings.c)
 *     UsbhPdoPnp_QueryId @ 0x14002BB40 (UsbhPdoPnp_QueryId.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 */

__int64 __fastcall UsbhAcquirePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeWaitForSingleObject(v2 + 642, Executive, 0, 0, 0LL);
  return 0LL;
}
