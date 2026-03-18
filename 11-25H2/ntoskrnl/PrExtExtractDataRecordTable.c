/*
 * XREFs of PrExtExtractDataRecordTable @ 0x140657E0C
 * Callers:
 *     HalpGetMicrocodePatchRecord @ 0x140556B0C (HalpGetMicrocodePatchRecord.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     RtlLookupImageSectionByName @ 0x1404A9EA0 (RtlLookupImageSectionByName.c)
 */

__int64 __fastcall PrExtExtractDataRecordTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  const char *v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( !a1 )
  {
    *a2 = 0LL;
    result = 3221225485LL;
LABEL_7:
    *a3 = 0;
    return result;
  }
  if ( (int)RtlImageNtHeaderEx(1, a1, 0LL, &v8) < 0 )
    return 3221225473LL;
  v7 = RtlLookupImageSectionByName(v8, ".drt");
  if ( !v7 )
  {
    *a2 = 0LL;
    result = 3221225545LL;
    goto LABEL_7;
  }
  *a2 = a1 + *((unsigned int *)v7 + 3);
  *a3 = *((_DWORD *)v7 + 2);
  return 0LL;
}
