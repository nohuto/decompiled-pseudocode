/*
 * XREFs of PrExtGetRecordDataLength @ 0x140662B00
 * Callers:
 *     IntelMicrocodeGetRecordData @ 0x1406636DC (IntelMicrocodeGetRecordData.c)
 *     AMDMicrocodeGetRecordData @ 0x140663A28 (AMDMicrocodeGetRecordData.c)
 *     AMDMicrocodeV1GetRecordData @ 0x140663C5C (AMDMicrocodeV1GetRecordData.c)
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
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
