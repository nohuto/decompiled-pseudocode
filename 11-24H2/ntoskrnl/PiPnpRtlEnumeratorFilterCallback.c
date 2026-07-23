/*
 * XREFs of PiPnpRtlEnumeratorFilterCallback @ 0x1408CEA40
 * Callers:
 *     PiDmCmObjectMatchCallback @ 0x1408CD390 (PiDmCmObjectMatchCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     PiCMMandatoryFilterCallback @ 0x1408CFBE0 (PiCMMandatoryFilterCallback.c)
 */

char __fastcall PiPnpRtlEnumeratorFilterCallback(__int64 a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  char v8; // bl
  PCUNICODE_STRING v9; // rax
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  int *v13; // [rsp+20h] [rbp-50h]
  int v14; // [rsp+28h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-18h] BYREF
  int v17; // [rsp+A8h] [rbp+38h] BYREF
  int v18; // [rsp+B8h] [rbp+48h]

  v8 = 0;
  String2 = 0LL;
  if ( !*(_BYTE *)(a4 + 8)
    || (v17 = 0, DestinationString = 0LL, v18 = 0, RtlInitUnicodeStringEx(&DestinationString, a2) >= 0)
    && *(_QWORD *)(a1 + 264)
    && (v14 = 0, v13 = &v17, (int)guard_dispatch_icall_no_overrides(a1, &DestinationString) >= 0) )
  {
    v9 = *(PCUNICODE_STRING *)a4;
    if ( !*(_QWORD *)a4
      || v9->Length < 2u
      || !*v9->Buffer
      || RtlInitUnicodeStringEx(&String2, a2) >= 0 && RtlPrefixUnicodeString(*(PCUNICODE_STRING *)a4, &String2, 1u) )
    {
      v8 = 1;
      v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(a4 + 16);
      if ( v10 )
      {
        if ( v10 == PiCMMandatoryFilterCallback )
          return PiCMMandatoryFilterCallback(a1, a2, a3, *(_QWORD *)(a4 + 24), v13, v14);
        else
          return guard_dispatch_icall_no_overrides(a1, a2);
      }
    }
  }
  return v8;
}
