/*
 * XREFs of AMDMicrocodeV1GetRecordData @ 0x140663C5C
 * Callers:
 *     AMDMicrocodeGetRecordData @ 0x140663A28 (AMDMicrocodeGetRecordData.c)
 * Callees:
 *     PrExtGetRecordDataLength @ 0x140662B00 (PrExtGetRecordDataLength.c)
 */

__int64 __fastcall AMDMicrocodeV1GetRecordData(__int64 a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rdx

  if ( a2 < 0x10 )
    return 3221225485LL;
  v6 = 4LL * *(unsigned int *)(a1 + 24) + 28;
  if ( v6 != *(_DWORD *)(a1 + 16) )
    return 3221225485LL;
  *a4 = v6 + a1;
  return PrExtGetRecordDataLength(a1, a2, a3);
}
