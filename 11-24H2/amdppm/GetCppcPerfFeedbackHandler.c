/*
 * XREFs of GetCppcPerfFeedbackHandler @ 0x140023B40
 * Callers:
 *     <none>
 * Callees:
 *     IsACountMCountSupported @ 0x14002417C (IsACountMCountSupported.c)
 */

unsigned __int64 (__fastcall *__fastcall GetCppcPerfFeedbackHandler(
        __int64 a1))(__int64 a1, char a2, unsigned __int64 *a3, _QWORD *a4)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( (unsigned __int8)IsACountMCountSupported()
    && *(_BYTE *)(a1 + 296) == 127
    && *(_QWORD *)(a1 + 300) == 232LL
    && *(_BYTE *)(a1 + 272) == 127
    && *(_QWORD *)(a1 + 276) == 231LL )
  {
    return ACountMCountHardwareFeedback;
  }
  return (unsigned __int64 (__fastcall *)(__int64, char, unsigned __int64 *, _QWORD *))v2;
}
