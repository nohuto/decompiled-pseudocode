/*
 * XREFs of ApiSetpGetExtensionNameKeyInfo @ 0x180137C74
 * Callers:
 *     ApiSetQuerySchemaInfo2_V7 @ 0x180136EE4 (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x180137254 (ApiSetQuerySchemaInfo_V7.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 */

char __fastcall ApiSetpGetExtensionNameKeyInfo(PCWCH String1, unsigned __int16 a2, char a3, __int64 a4)
{
  unsigned __int16 v8; // ax
  bool v9; // r8
  int v10; // r10d
  signed __int64 v11; // r11
  PCWCH v12; // r9
  char v13; // cl
  char result; // al
  __int16 v15; // di

  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  if ( a2 < 0xBu )
    return 0;
  if ( a3 )
  {
    v8 = 2 * a2;
    if ( (unsigned __int16)(2 * a2) >= 0x14u )
      v8 = 20;
    v9 = RtlCompareUnicodeStrings(String1, (unsigned __int64)v8 >> 1, L"schemaext-", 0xAuLL, 1u) == 0;
  }
  else
  {
    v10 = 10;
    v11 = "schemaext-" - (char *)String1;
    v9 = 1;
    v12 = String1;
    while ( *(_BYTE *)v12 )
    {
      v13 = *(_BYTE *)v12 + 32;
      if ( (unsigned __int8)(*(_BYTE *)v12 - 65) > 0x19u )
        v13 = *(_BYTE *)v12;
      if ( *((_BYTE *)v12 + v11) != v13 )
        break;
      v12 = (PCWCH)((char *)v12 + 1);
      if ( --v10 <= 0 )
        goto LABEL_14;
    }
    v9 = 0;
  }
LABEL_14:
  if ( !v9 )
    return 0;
  *(_BYTE *)(a4 + 10) = a3;
  *(_DWORD *)(a4 + 12) = 4;
  result = 1;
  v15 = a2 - 10;
  *(_QWORD *)a4 = (char *)String1 + (-(__int64)(a3 != 0) & 0xA) + 10;
  *(_WORD *)(a4 + 8) = v15;
  *(_WORD *)(a4 + 18) = v15;
  return result;
}
