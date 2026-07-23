/*
 * XREFs of TpWorkOnBehalfClearTicket @ 0x1800EBF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TpWorkOnBehalfClearTicket(__int64 a1)
{
  *(_QWORD *)(a1 + 248) = 0LL;
  return RtlClearThreadWorkOnBehalfTicket();
}
