/*
 * XREFs of ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x14003C80C
 * Callers:
 *     ?AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403E7E00 (-AppendSerialNumber@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x14003CE10 (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 *     ?GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z @ 0x14003CECC (-GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorSerialNumber(const unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 v4; // r8
  int v5; // r9d
  int v6; // ecx
  __int64 result; // rax
  unsigned __int16 *v8; // r10
  int i; // edx
  __int64 v10; // rax
  __int64 v11; // r11
  unsigned __int64 j; // rax
  unsigned __int64 k; // r8
  char v14; // r9
  unsigned __int64 v15; // r9
  unsigned int v16; // r8d
  wchar_t v17; // ax
  unsigned __int64 v18; // rdx
  unsigned __int16 *v19; // r8
  unsigned __int16 *v20; // r11
  unsigned __int16 v21; // cx
  _QWORD v22[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+70h] [rbp-18h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = 0LL;
  v23 = 0LL;
  v5 = 0;
  do
  {
    v6 = v5++;
    v22[v4] = &a1[v6 << 7];
    v4 = ++v23;
  }
  while ( !v5 );
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v22, (bool)a1);
  if ( (int)result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( (unsigned int)i >= 4 )
      {
        v15 = 0LL;
        v16 = *(unsigned __int8 *)(v22[0] + 12LL) | ((*(unsigned __int8 *)(v22[0] + 13LL) | (*(unsigned __int16 *)(v22[0] + 14LL) << 8)) << 8);
        do
        {
          v17 = a0123456789abcd[v16 % 0xA];
          v16 /= 0xAu;
          v8[v15++] = v17;
        }
        while ( v16 && v15 < 0xD );
        v18 = v15 >> 1;
        if ( v15 >> 1 )
        {
          v19 = &v8[v18 - 1];
          v20 = &v8[v15 - v18];
          do
          {
            v21 = *v19;
            *v19-- = *v20;
            *v20++ = v21;
            --v18;
          }
          while ( v18 );
        }
        v8[v15] = 0;
        return 0LL;
      }
      v10 = i + 3LL;
      if ( !*(_WORD *)(v22[0] + 18 * v10) && !*(_BYTE *)(v22[0] + 18 * v10 + 2) )
      {
        if ( *(_BYTE *)(v22[0] + 18 * v10 + 4) )
        {
          if ( *(_BYTE *)(v22[0] + 18 * v10 + 3) != 0xFD )
            continue;
        }
        else if ( *(_BYTE *)(v22[0] + 18 * v10 + 3) == 16 )
        {
          continue;
        }
        if ( *(_BYTE *)(v22[0] + 18LL * i + 57) == 0xFF )
        {
          v11 = v22[0] + 18LL * i;
          for ( j = 0LL; j < 0xD; ++j )
          {
            if ( *(_BYTE *)(j + v11 + 59) == 10 )
              break;
          }
          for ( k = j + 1; k < 0xD; ++k )
          {
            v14 = *(_BYTE *)(k + v11 + 59);
            if ( (v14 & 0xDE) != 0 || v14 == 33 )
              goto LABEL_12;
          }
          if ( j )
          {
            MonDescParser::EDID_PARSER::GetDispDescAsASCIIString((MonDescParser::EDID_PARSER *)v22, i, v8);
            return 0LL;
          }
        }
      }
LABEL_12:
      ;
    }
  }
  return result;
}
