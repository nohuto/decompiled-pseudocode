/*
 * XREFs of GetCpcDifferentialFeedback @ 0x140005BA0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddrEx @ 0x1400025CC (ReadGenAddrEx.c)
 */

__int64 __fastcall GetCpcDifferentialFeedback(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 result; // rax

  *a3 = ReadGenAddrEx((unsigned __int8 *)(a1 + 272));
  result = ReadGenAddrEx((unsigned __int8 *)(a1 + 296));
  *a4 = result;
  return result;
}
