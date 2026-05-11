/*
 * XREFs of USBParseGetChannelConfigForUnit @ 0x1400425A8
 * Callers:
 *     USBParseExtensionUnit @ 0x1400372D0 (USBParseExtensionUnit.c)
 *     USBParseFeatureUnit @ 0x140037500 (USBParseFeatureUnit.c)
 *     USBParseMixerUnit @ 0x140038920 (USBParseMixerUnit.c)
 *     USBParseProcessUnit @ 0x140038C60 (USBParseProcessUnit.c)
 *     USBParseSelectorUnit @ 0x140038F70 (USBParseSelectorUnit.c)
 *     USBParseTerminalUnit @ 0x140042740 (USBParseTerminalUnit.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     USBParseGetUnit @ 0x14002E3D4 (USBParseGetUnit.c)
 */

__int64 __fastcall USBParseGetChannelConfigForUnit(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v4; // edi
  unsigned __int64 v6; // rsi
  unsigned __int8 *Unit; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  int v13; // ecx
  int v14; // [rsp+20h] [rbp-20h] BYREF
  int v15; // [rsp+24h] [rbp-1Ch]
  int v16; // [rsp+28h] [rbp-18h]

  *a4 = 0;
  v4 = 0;
  v6 = a1 + *(unsigned __int16 *)(a1 + 2);
  while ( 1 )
  {
    Unit = USBParseGetUnit(a1, a2, a3);
    if ( !Unit )
      return 0LL;
    v11 = *Unit;
    if ( (unsigned __int64)&Unit[v11] > v6 )
    {
      v15 = 9;
      goto LABEL_34;
    }
    v10 = (unsigned int)Unit[2] - 2;
    if ( Unit[2] == 2 )
    {
      if ( (unsigned __int8)v11 < 0xCu )
      {
        v15 = 14;
        goto LABEL_34;
      }
      v13 = *((unsigned __int16 *)Unit + 4);
      goto LABEL_27;
    }
    v10 = (unsigned int)Unit[2] - 3;
    if ( Unit[2] == 3 )
    {
      if ( (unsigned __int8)v11 < 9u )
      {
        v15 = 15;
        goto LABEL_34;
      }
      a3 = Unit[7];
      goto LABEL_15;
    }
    v10 = (unsigned int)Unit[2] - 4;
    if ( Unit[2] == 4 )
    {
      if ( (unsigned __int8)v11 < 5u || (v10 = Unit[4], v11 < v10 + 9) )
      {
        v15 = 10;
        goto LABEL_34;
      }
      v13 = *(unsigned __int16 *)&Unit[v10 + 6];
      goto LABEL_27;
    }
    v10 = (unsigned int)Unit[2] - 5;
    if ( Unit[2] != 5 )
      break;
    if ( (unsigned __int8)v11 <= 5u )
    {
      v15 = 12;
      goto LABEL_34;
    }
    a3 = Unit[5];
LABEL_15:
    if ( (unsigned int)++v4 >= 0x3E8 )
      return 0LL;
  }
  v10 = (unsigned int)Unit[2] - 6;
  if ( Unit[2] != 6 )
  {
    v10 = (unsigned int)Unit[2] - 7;
    if ( (unsigned int)v10 > 1 )
      return 0LL;
    if ( (unsigned __int8)v11 < 7u || (v10 = Unit[6], v11 < v10 + 12) )
    {
      v15 = 11;
      goto LABEL_34;
    }
    v13 = *(unsigned __int16 *)&Unit[v10 + 8];
LABEL_27:
    *a4 = v13;
    return 0LL;
  }
  if ( (unsigned __int8)v11 >= 6u )
  {
    a3 = Unit[4];
    goto LABEL_15;
  }
  v15 = 13;
LABEL_34:
  v14 = 53974265;
  v16 = -1073741823;
  RtlLogUnexpectedCodepath(&v14, v10);
  return 3221225473LL;
}
