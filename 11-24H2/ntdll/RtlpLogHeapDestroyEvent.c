/*
 * XREFs of RtlpLogHeapDestroyEvent @ 0x18010D118
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800270BC (RtlpHpHeapDestroy.c)
 *     RtlDestroyHeap @ 0x1800280C0 (RtlDestroyHeap.c)
 * Callees:
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpLogHeapDestroyEvent(__int64 a1, void *a2)
{
  _OWORD Fields[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  memset(Fields, 0, sizeof(Fields));
  WORD3(Fields[0]) = 4131;
  return NtTraceEvent(a2, 0x402u, 8u, Fields);
}
