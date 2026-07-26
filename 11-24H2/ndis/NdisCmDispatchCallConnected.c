/*
 * XREFs of NdisCmDispatchCallConnected @ 0x1400CFE00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmDispatchCallConnected(NDIS_HANDLE NdisVcHandle)
{
  (*((void (__fastcall **)(_QWORD))NdisVcHandle + 16))(*((_QWORD *)NdisVcHandle + 3));
}
