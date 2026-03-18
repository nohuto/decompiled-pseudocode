/*
 * XREFs of UsbhPdoPnp_Success @ 0x1C0056A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhPdoPnp_Success(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
