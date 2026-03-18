/*
 * XREFs of PnpMultiSzContainsString @ 0x1404B7A70
 * Callers:
 *     PiDevCfgAppendMultiSz @ 0x1407286C8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140729484 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x140995E90 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14099CA94 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A91630 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     wcslen @ 0x1404FFED0 (wcslen.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 */

wchar_t *__fastcall PnpMultiSzContainsString(wchar_t *Str, wchar_t *a2)
{
  __int64 v2; // rbx
  size_t v4; // rax
  size_t v5; // rax
  unsigned __int16 v6; // si
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0LL;
  String1.Buffer = a2;
  *(_QWORD *)&String1.Length = 0LL;
  if ( a2 )
  {
    v4 = 2 * wcslen(a2);
    if ( v4 >= 0xFFFE )
      LOWORD(v4) = -4;
    String1.Length = v4;
    String1.MaximumLength = v4 + 2;
  }
  while ( *Str )
  {
    *(_QWORD *)&String2.Length = 0LL;
    String2.Buffer = Str;
    v5 = wcslen(Str);
    v6 = 2 * v5;
    if ( 2 * v5 >= 0xFFFE )
      v6 = -4;
    String2.Length = v6;
    String2.MaximumLength = v6 + 2;
    if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      return Str;
    Str += ((unsigned __int64)v6 >> 1) + 1;
  }
  return (wchar_t *)v2;
}
