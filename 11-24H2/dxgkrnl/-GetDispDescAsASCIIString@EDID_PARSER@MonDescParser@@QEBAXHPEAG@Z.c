/*
 * XREFs of ?GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z @ 0x14003C88C
 * Callers:
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x14003C1CC (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x14003C5F4 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MonDescParser::EDID_PARSER::GetDispDescAsASCIIString(
        MonDescParser::EDID_PARSER *this,
        int a2,
        unsigned __int16 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 i; // rax
  char v9; // cl
  UCHAR *v10; // rax
  __int64 v11; // rdi
  WCHAR v12; // ax
  __int64 v13; // rcx
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v5 = 0LL;
  v6 = 9LL * a2;
  v7 = *(_QWORD *)this + 18LL * a2;
  do
  {
    if ( *(_BYTE *)(v5 + v7 + 59) == 10 )
      break;
    ++v5;
  }
  while ( v5 < 0xD );
  for ( i = v5 + 1; i < 0xD; ++i )
  {
    v9 = *(_BYTE *)(i + v7 + 59);
    if ( (v9 & 0xDE) != 0 || v9 == 33 )
    {
      v5 = 0LL;
      break;
    }
  }
  *a3 = 0;
  v10 = (UCHAR *)(v3 + 59 + 2 * v6);
  LODWORD(v11) = 0;
  SourceCharacter = v10;
  if ( v5 )
  {
    while ( *v10 != 10 )
    {
      v12 = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      v13 = (unsigned int)v11;
      v11 = (unsigned int)(v11 + 1);
      a3[v13] = v12;
      a3[v11] = 0;
      if ( (unsigned int)v11 >= v5 )
        break;
      v10 = SourceCharacter;
    }
  }
}
