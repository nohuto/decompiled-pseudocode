/*
 * XREFs of PrExtGetRecordDataLength @ 0x140664210
 * Callers:
 *     IntelMicrocodeGetRecordData @ 0x140664DEC (IntelMicrocodeGetRecordData.c)
 *     AMDMicrocodeGetRecordData @ 0x140665138 (AMDMicrocodeGetRecordData.c)
 *     AMDMicrocodeV1GetRecordData @ 0x14066536C (AMDMicrocodeV1GetRecordData.c)
 *     HalpLoadMicrocode @ 0x140701A80 (HalpLoadMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PrExtGetRecordDataLength(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || a2 < 0x10 )
    return 3221225485LL;
  *a3 = *(_QWORD *)(a1 + 8);
  return result;
}
