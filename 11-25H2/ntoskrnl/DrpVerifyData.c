/*
 * XREFs of DrpVerifyData @ 0x140658E3C
 * Callers:
 *     DrpGetRecord @ 0x140658D70 (DrpGetRecord.c)
 *     DrpGetRecordCount @ 0x140658DAC (DrpGetRecordCount.c)
 *     DrpGetSectionAtIndex @ 0x140658DD8 (DrpGetSectionAtIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrpVerifyData(__int64 a1, unsigned __int64 a2)
{
  if ( !a1 || a2 < 0x18 )
    return 3221225485LL;
  if ( *(_DWORD *)a1 == 1296256339 )
    return a2 != *(_QWORD *)(a1 + 8) ? 0xC0000206 : 0;
  return 3221266432LL;
}
