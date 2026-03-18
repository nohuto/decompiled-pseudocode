/*
 * XREFs of ApiSetpGetExtensionNameKeyInfo @ 0x1406562F4
 * Callers:
 *     ApiSetQuerySchemaInfo_V7 @ 0x140654ACC (ApiSetQuerySchemaInfo_V7.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x14065702C (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x140939BB0 (RtlCompareUnicodeString.c)
 */

char __fastcall ApiSetpGetExtensionNameKeyInfo(wchar_t *a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v7; // ax
  __int16 v8; // di
  char result; // al
  UNICODE_STRING String1; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  if ( a2 < 0xBu )
    return 0;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = a1;
  v7 = 2 * a2;
  if ( (unsigned __int16)(2 * a2) >= 0x14u )
  {
    v7 = 20;
    String1.Length = 20;
  }
  else
  {
    String1.Length = 2 * a2;
  }
  String1.MaximumLength = v7;
  *(_DWORD *)&String2.Length = 1310740;
  String2.Buffer = L"schemaext-";
  if ( RtlCompareUnicodeString(&String1, &String2, 1u) )
    return 0;
  v8 = a2 - 10;
  *(_BYTE *)(a4 + 10) = 1;
  *(_WORD *)(a4 + 8) = v8;
  *(_QWORD *)a4 = a1 + 10;
  result = 1;
  *(_WORD *)(a4 + 18) = v8;
  *(_DWORD *)(a4 + 12) = 4;
  return result;
}
