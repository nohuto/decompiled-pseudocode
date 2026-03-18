/*
 * XREFs of ?GetParseResult@EdidMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x140278C00
 * Callers:
 *     <none>
 * Callees:
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x14003CAD4 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetParseResult(__int64 a1)
{
  const unsigned __int8 *v1; // r8
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  const unsigned __int8 *v4; // rcx
  int PreferredMode; // eax
  unsigned int v6; // ecx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  v2 = **(_QWORD **)(a1 + 24);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = (const unsigned __int8 *)(v2 + 24);
  if ( v3 >= 0x80 )
    v1 = v4;
  PreferredMode = EDID_V1_GetPreferredMode(v1, (struct DISPLAY_PREFERRED_MODE_INFO *)v8);
  v6 = 2;
  if ( PreferredMode < 0 )
    return 0;
  return v6;
}
