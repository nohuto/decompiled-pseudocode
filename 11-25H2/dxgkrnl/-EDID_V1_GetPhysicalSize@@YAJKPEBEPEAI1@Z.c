/*
 * XREFs of ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x14003C9C4
 * Callers:
 *     ?AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x140268DB0 (-AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?GetPhysicalSize@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z @ 0x1403E9910 (-GetPhysicalSize@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x14003CDB4 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDID_V1_GetPhysicalSize(unsigned int a1, unsigned __int8 *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 result; // rax
  unsigned int *v6; // r11
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  unsigned int v9; // edi
  int v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  unsigned int v14; // eax
  _QWORD v15[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a2 || !a1 || !a3 || !a4 )
    return 3221225485LL;
  v15[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v15, a2, a1);
  if ( (int)result >= 0 )
  {
    v7 = 10 * *(unsigned __int8 *)(v15[0] + 21LL);
    v8 = 10 * *(unsigned __int8 *)(v15[0] + 22LL);
    if ( *(_WORD *)(v15[0] + 54LL)
      || *(_BYTE *)(v15[0] + 56LL)
      || *(_BYTE *)(v15[0] + 58LL) && *(_BYTE *)(v15[0] + 57LL) != 0xFD )
    {
      v9 = *(unsigned __int8 *)(v15[0] + 68LL);
      v10 = v9 & 0xF;
      v11 = *(unsigned __int8 *)(v15[0] + 66LL) + (v9 >> 4 << 8);
      v12 = (v10 << 8) + *(unsigned __int8 *)(v15[0] + 67LL);
      v13 = v11 - v7;
      if ( v11 < v7 )
        v13 = v7 - v11;
      if ( v13 >= 0xA )
        goto LABEL_19;
      v14 = v12 - v8;
      if ( v12 < v8 )
        v14 = v8 - v12;
      if ( v14 >= 0xA )
      {
LABEL_19:
        v12 = 10 * *(unsigned __int8 *)(v15[0] + 22LL);
        v11 = 10 * *(unsigned __int8 *)(v15[0] + 21LL);
      }
      *a3 = v11;
      *v6 = v12;
    }
    else
    {
      *a3 = v7;
      *v6 = v8;
    }
    return 0LL;
  }
  return result;
}
