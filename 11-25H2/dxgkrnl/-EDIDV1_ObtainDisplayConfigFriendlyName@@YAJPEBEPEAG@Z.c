/*
 * XREFs of ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x14003CC34
 * Callers:
 *     ?AppendFriendlyName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403B98B0 (-AppendFriendlyName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x14003CE10 (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 *     ?GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z @ 0x14003CECC (-GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall EDIDV1_ObtainDisplayConfigFriendlyName(const unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 v4; // r8
  int v5; // r9d
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 i; // rbx
  unsigned __int64 j; // rax
  char v15; // cl
  _QWORD v16[10]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+70h] [rbp-28h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = 0LL;
  v17 = 0LL;
  v5 = 0;
  do
  {
    v6 = v5++;
    v16[v4] = &a1[v6 << 7];
    v4 = ++v17;
  }
  while ( !v5 );
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v16, (bool)a2);
  if ( (int)result >= 0 )
  {
    memset(a2, 0, 0x52uLL);
    v8 = v16[0];
    v9 = 0LL;
    v10 = 0;
    while ( 1 )
    {
      v11 = v10 + 3LL;
      if ( !*(_WORD *)(v8 + 18 * v11) && !*(_BYTE *)(v8 + 18 * v11 + 2) )
      {
        if ( *(_BYTE *)(v8 + 18 * v11 + 4) )
        {
          if ( *(_BYTE *)(v8 + 18 * v11 + 3) == 0xFD )
          {
LABEL_17:
            if ( *(_BYTE *)(v8 + 18LL * v10 + 57) == 0xFC )
            {
              v12 = v8 + 18LL * v10;
              for ( i = 0LL; i < 0xD; ++i )
              {
                if ( *(_BYTE *)(i + v12 + 59) == 10 )
                  break;
              }
              for ( j = i + 1; j < 0xD; ++j )
              {
                v15 = *(_BYTE *)(j + v12 + 59);
                if ( (v15 & 0xDE) != 0 || v15 == 33 )
                {
                  i = 0LL;
                  break;
                }
              }
              if ( i + v9 > 0x28 )
                i = 40 - v9;
              if ( i && (unsigned __int64)(v9 + 13) <= 0x28 )
              {
                MonDescParser::EDID_PARSER::GetDispDescAsASCIIString((MonDescParser::EDID_PARSER *)v16, v10, &a2[v9]);
                v9 += i;
              }
            }
          }
        }
        else if ( *(_BYTE *)(v8 + 18 * v11 + 3) != 16 )
        {
          goto LABEL_17;
        }
      }
      if ( (unsigned int)++v10 >= 4 )
      {
        result = 3221226021LL;
        if ( v9 )
          return 0LL;
        return result;
      }
    }
  }
  return result;
}
