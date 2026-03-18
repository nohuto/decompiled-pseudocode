/*
 * XREFs of _CmClassFilterCallback @ 0x14081ADD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmGetDeviceRegProp @ 0x1408C5BB0 (_CmGetDeviceRegProp.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 */

char __fastcall CmClassFilterCallback(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v8; // bl
  const WCHAR *v9; // rdx
  unsigned int v11; // [rsp+40h] [rbp-69h] BYREF
  int v12; // [rsp+44h] [rbp-65h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-51h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-39h] BYREF

  v11 = 0;
  v12 = 0;
  v8 = 0;
  DestinationString = 0LL;
  String2 = 0LL;
  if ( a4 )
  {
    v9 = *(const WCHAR **)a4;
    if ( !*(_QWORD *)a4
      || !*v9
      || RtlInitUnicodeStringEx(&DestinationString, v9) >= 0
      && (v11 = 78, (int)CmGetDeviceRegProp(a1, a2, 0, 9, (__int64)&v12, (__int64)SourceString, (__int64)&v11, 0) >= 0)
      && v12 == 1
      && v11 >= 2
      && (SourceString[38] = 0, RtlInitUnicodeStringEx(&String2, SourceString) >= 0)
      && RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
    {
      v8 = 1;
      if ( *(_QWORD *)(a4 + 8) )
        return guard_dispatch_icall_no_overrides(a1, a2, a3, *(_QWORD *)(a4 + 16));
    }
  }
  return v8;
}
