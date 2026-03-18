/*
 * XREFs of PiPnpRtlEnumeratorFilterCallback @ 0x1408D1050
 * Callers:
 *     PiDmCmObjectMatchCallback @ 0x1408CF9A0 (PiDmCmObjectMatchCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlPrefixUnicodeString @ 0x14086E3C0 (RtlPrefixUnicodeString.c)
 *     PiCMMandatoryFilterCallback @ 0x1408D21F0 (PiCMMandatoryFilterCallback.c)
 */

char __fastcall PiPnpRtlEnumeratorFilterCallback(__int64 a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  char v8; // bl
  PCUNICODE_STRING v9; // rax
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  __int64 v11; // r9
  int *v14; // [rsp+20h] [rbp-50h]
  int v15; // [rsp+28h] [rbp-48h]
  int v16; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+A8h] [rbp+38h] BYREF
  int v20; // [rsp+B8h] [rbp+48h] BYREF

  v8 = 0;
  String2 = 0LL;
  if ( !*(_BYTE *)(a4 + 8)
    || (v19 = 0, DestinationString = 0LL, v16 = 0, v20 = 0, RtlInitUnicodeStringEx(&DestinationString, a2) >= 0)
    && *(_QWORD *)(a1 + 264)
    && (v15 = 0, v14 = &v19, (int)guard_dispatch_icall_no_overrides(a1, &DestinationString, &v16, &v20) >= 0) )
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
        v11 = *(_QWORD *)(a4 + 24);
        if ( v10 == PiCMMandatoryFilterCallback )
          return PiCMMandatoryFilterCallback(a1, a2, a3, v11, v14, v15);
        else
          return guard_dispatch_icall_no_overrides(a1, a2, a3, v11);
      }
    }
  }
  return v8;
}
