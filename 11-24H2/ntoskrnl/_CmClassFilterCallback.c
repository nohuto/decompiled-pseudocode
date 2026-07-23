/*
 * XREFs of _CmClassFilterCallback @ 0x14081B510
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

char __fastcall CmClassFilterCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // bl
  const WCHAR *v8; // rdx
  unsigned int v10; // [rsp+40h] [rbp-69h] BYREF
  int v11; // [rsp+44h] [rbp-65h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-51h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-39h] BYREF

  v10 = 0;
  v11 = 0;
  v7 = 0;
  DestinationString = 0LL;
  String2 = 0LL;
  if ( a4 )
  {
    v8 = *(const WCHAR **)a4;
    if ( !*(_QWORD *)a4
      || !*v8
      || RtlInitUnicodeStringEx(&DestinationString, v8) >= 0
      && (v10 = 78, (int)CmGetDeviceRegProp(a1, a2, 0, 9, (__int64)&v11, (__int64)SourceString, (__int64)&v10, 0) >= 0)
      && v11 == 1
      && v10 >= 2
      && (SourceString[38] = 0, RtlInitUnicodeStringEx(&String2, SourceString) >= 0)
      && RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
    {
      v7 = 1;
      if ( *(_QWORD *)(a4 + 8) )
        return guard_dispatch_icall_no_overrides(a1, a2);
    }
  }
  return v7;
}
