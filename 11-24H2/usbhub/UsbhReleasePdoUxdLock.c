/*
 * XREFs of UsbhReleasePdoUxdLock @ 0x14002AF7C
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x14002A6CC (UsbhUpdateUxdSettings.c)
 *     UsbhPdoPnp_QueryId @ 0x14002BB40 (UsbhPdoPnp_QueryId.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 */

__int64 __fastcall UsbhReleasePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeReleaseSemaphore((PRKSEMAPHORE)(v2 + 642), 16, 1, 0);
  return 0LL;
}
