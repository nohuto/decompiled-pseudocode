/*
 * XREFs of _RtlpMuiRegInitAnyLanguage @ 0x18014B788
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x18014A770 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x18014B448 (_RtlpMuiRegAddBaseLanguage.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800A7164 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800A7910 (RtlpMuiRegGetOrAddString.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpMuiRegInitAnyLanguage(__int64 a1, __int64 a2, const WCHAR *a3, __int16 a4)
{
  int v8; // edi
  __int16 v10[2]; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+24h] [rbp-34h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-30h] BYREF

  DestinationString = 0LL;
  Lcid = 0;
  v10[0] = -1;
  RtlInitUnicodeString(&DestinationString, a3);
  if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
  {
    v8 = RtlpMuiRegGetOrAddString(a1, a3, 1, v10);
    if ( v8 >= 0 )
    {
      *(_WORD *)(a2 + 4) = Lcid;
      *(_WORD *)(a2 + 6) = v10[0];
      *(_WORD *)a2 = a4;
      *(_WORD *)(a2 + 2) = 0;
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(a2 + 24) = 0;
      if ( (a4 & 0x2000) == 0 )
        RtlpMuiRegAddNeutralLanguage(a1, a2, a3);
    }
  }
  else
  {
    return (unsigned int)-1073020924;
  }
  return (unsigned int)v8;
}
