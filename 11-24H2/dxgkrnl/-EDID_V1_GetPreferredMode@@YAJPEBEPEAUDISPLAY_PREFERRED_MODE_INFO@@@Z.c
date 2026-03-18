/*
 * XREFs of ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x14003C494
 * Callers:
 *     ?GetParseResult@EdidMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x1402800F0 (-GetParseResult@EdidMonitorDescriptor@DxgMonitor@@UEBA-AW4MonitorDescriptorParseResult@2@XZ.c)
 *     ?GetNativeMode@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1403ED240 (-GetNativeMode@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x14003C7D0 (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 */

__int64 __fastcall EDID_V1_GetPreferredMode(const unsigned __int8 *a1, struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  __int64 v4; // r8
  int v5; // r9d
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // r10
  __int16 v9; // r11
  unsigned __int8 *v10; // rdx
  _QWORD v11[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = 0LL;
  v12 = 0LL;
  v5 = 0;
  do
  {
    v6 = v5++;
    v11[v4] = &a1[v6 << 7];
    v4 = ++v12;
  }
  while ( !v5 );
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v11, (bool)a1);
  if ( (int)result >= 0 )
  {
    v10 = (unsigned __int8 *)v11[0];
    if ( *(_WORD *)(v11[0] + 54LL) == v9
      && *(_BYTE *)(v11[0] + 56LL) == (_BYTE)v9
      && (*(_BYTE *)(v11[0] + 58LL) == (_BYTE)v9 || *(_BYTE *)(v11[0] + 57LL) == 0xFD) )
    {
      return 3221226021LL;
    }
    else
    {
      *(_DWORD *)v8 = *(unsigned __int8 *)(v11[0] + 56LL) + (*(unsigned __int8 *)(v11[0] + 58LL) >> 4 << 8);
      *(_DWORD *)(v8 + 4) = v10[59] + (v10[61] >> 4 << 8);
      *(_BYTE *)(v8 + 8) = v10[71] >> 7;
      return 0LL;
    }
  }
  return result;
}
