/*
 * XREFs of PrExtExtractDataRecordTable @ 0x140657E0C
 * Callers:
 *     HalpGetMicrocodePatchRecord @ 0x140556B0C (HalpGetMicrocodePatchRecord.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     RtlLookupImageSectionByName @ 0x1404A9EA0 (RtlLookupImageSectionByName.c)
 */

__int64 __fastcall PrExtExtractDataRecordTable(char *BaseOfImage, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  const char *v7; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  OutHeaders = 0LL;
  if ( !BaseOfImage )
  {
    *a2 = 0LL;
    result = 3221225485LL;
LABEL_7:
    *a3 = 0;
    return result;
  }
  if ( RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders) < 0 )
    return 3221225473LL;
  v7 = RtlLookupImageSectionByName((__int64)OutHeaders, ".drt");
  if ( !v7 )
  {
    *a2 = 0LL;
    result = 3221225545LL;
    goto LABEL_7;
  }
  *a2 = &BaseOfImage[*((unsigned int *)v7 + 3)];
  *a3 = *((_DWORD *)v7 + 2);
  return 0LL;
}
