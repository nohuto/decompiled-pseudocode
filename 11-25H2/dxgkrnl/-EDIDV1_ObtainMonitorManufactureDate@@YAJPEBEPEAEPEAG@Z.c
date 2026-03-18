/*
 * XREFs of ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x14003C6B8
 * Callers:
 *     ?GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x1403F21E0 (-GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x14003CE10 (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorManufactureDate(
        const unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int16 *a3)
{
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // ecx
  __int64 result; // rax
  _BYTE *v8; // r9
  _WORD *v9; // r10
  unsigned __int8 *v10; // rcx
  unsigned __int8 v11; // al
  bool v12; // cc
  _QWORD v13[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+70h] [rbp-18h]

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = 0;
  do
  {
    v6 = v5++;
    v13[v4] = &a1[v6 << 7];
    v4 = ++v14;
  }
  while ( !v5 );
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v13, v4);
  if ( (int)result >= 0 )
  {
    v10 = (unsigned __int8 *)v13[0];
    *v8 = *(_BYTE *)(v13[0] + 16LL);
    *v9 = v10[17] + 1990;
    v11 = v10[18];
    if ( v11 == 1 )
    {
      if ( v10[19] == 3 )
      {
        v12 = *v8 <= 0x36u;
        goto LABEL_10;
      }
      if ( v10[19] >= 4u )
        goto LABEL_17;
    }
    if ( v11 >= 3u )
    {
LABEL_17:
      if ( *v8 == 0xFF )
      {
        *v8 = 0;
        goto LABEL_14;
      }
      v12 = *v8 <= 0x36u;
    }
    else
    {
      v12 = (unsigned __int8)(*v8 - 1) <= 0x35u;
    }
LABEL_10:
    if ( !v12 )
    {
      *v8 = 0;
      return 3223126026LL;
    }
LABEL_14:
    if ( *v9 > 0x7C9u )
      return 0LL;
    *v9 = 0;
    return 3223126026LL;
  }
  return result;
}
