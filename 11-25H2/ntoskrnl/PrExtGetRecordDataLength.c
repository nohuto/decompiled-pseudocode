/*
 * XREFs of PrExtGetRecordDataLength @ 0x140657F50
 * Callers:
 *     IntelMicrocodeGetRecordData @ 0x140658B2C (IntelMicrocodeGetRecordData.c)
 *     AMDMicrocodeGetRecordData @ 0x140658E78 (AMDMicrocodeGetRecordData.c)
 *     AMDMicrocodeV1GetRecordData @ 0x1406590AC (AMDMicrocodeV1GetRecordData.c)
 *     HalpLoadMicrocode @ 0x1406F5C90 (HalpLoadMicrocode.c)
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
