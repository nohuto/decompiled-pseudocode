/*
 * XREFs of DpiMdmProcessAdapterBrightness @ 0x140088E5C
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x14006DF3C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     _DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400827C4 (_DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z @ 0x140084BA0 (-GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x140085410 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     ?SetInternalPanelInfo@DISPLAY_MUX_MGR@@QEAA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z @ 0x140087CD8 (-SetInternalPanelInfo@DISPLAY_MUX_MGR@@QEAA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z.c)
 *     DpiDxgkDdiDisplayMuxSetInternalPanelInfo @ 0x14008C928 (DpiDxgkDdiDisplayMuxSetInternalPanelInfo.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     memcmp @ 0x1400A2520 (memcmp.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x14024CA00 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024CB00 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 */

void __fastcall DpiMdmProcessAdapterBrightness(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  struct _LUID v4; // rdx
  int v5; // eax
  int Caps; // eax
  int NitRanges; // eax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int8 v13[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v15; // [rsp+60h] [rbp-A0h] BYREF
  char v16; // [rsp+68h] [rbp-98h]
  _BYTE Buf2[224]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[224]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE Buf1[224]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v20[224]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v21[224]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v22[224]; // [rsp+4D0h] [rbp+3D0h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4003;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(FunctionalDeviceObject)",
      4003LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *(_QWORD *)(a1 + 64);
  v14 = v2;
  if ( *(_DWORD *)(v2 + 6024) != 1 && *(_DWORD *)(v2 + 6032) == 1 )
  {
    v3 = *(_DWORD *)(v2 + 6376);
    v4 = *(struct _LUID *)(v2 + 6036);
    v15 = &v14;
    v16 = 1;
    v13[0] = 0;
    if ( (int)DISPLAY_MUX_MGR::IsTargetPartOfMux(qword_140161380, v4, v3, v13, 0LL) < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4036;
      *(_DWORD *)(v14 + 6032) = 9;
LABEL_48:
      DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v15);
      return;
    }
    if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
    {
      memset(Buf1, 0, 0xD1uLL);
      if ( DISPLAY_MUX_MGR::GetInternalPanelInfo(
             qword_140161380,
             (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)Buf1) )
      {
        v5 = DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v14, *(unsigned int *)(v14 + 6376), Buf1);
        if ( v5 < 0 )
        {
          WdLogSingleEntry1(2LL, v5);
          WdLogGlobalForLineNumber = 4051;
LABEL_11:
          *(_DWORD *)(v14 + 6032) = 15;
          goto LABEL_48;
        }
        *(_BYTE *)(v14 + 6441) = 1;
      }
      else
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 4061;
      }
      if ( v13[0] )
      {
        memset(Buf2, 0, 0xD1uLL);
        if ( *(_WORD *)(v14 + 4810) == 3 )
        {
          Buf2[0] = 1;
          Caps = DpiBrightness3GetCaps(
                   *(void **)(v14 + 24),
                   *(_DWORD *)(v14 + 6376),
                   (struct _DXGK_BRIGHTNESS_CAPS *)&Buf2[1]);
          if ( Caps < 0 )
          {
            WdLogSingleEntry1(2LL, Caps);
            WdLogGlobalForLineNumber = 4077;
LABEL_18:
            *(_DWORD *)(v14 + 6032) = 12;
            goto LABEL_48;
          }
          NitRanges = DpiBrightness3GetNitRanges(
                        *(void **)(v14 + 24),
                        *(_DWORD *)(v14 + 6376),
                        (struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *)&Buf2[5]);
          if ( NitRanges < 0 )
          {
            WdLogSingleEntry1(2LL, NitRanges);
            WdLogGlobalForLineNumber = 4085;
LABEL_21:
            *(_DWORD *)(v14 + 6032) = 13;
            goto LABEL_48;
          }
        }
        if ( !DISPLAY_MUX_MGR::SetInternalPanelInfo(
                qword_140161380,
                (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)Buf2)
          && memcmp(Buf1, Buf2, 0xD1uLL) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4099;
          goto LABEL_25;
        }
      }
      else
      {
        v8 = v14;
        if ( *(_BYTE *)(v14 + 6441) )
          goto LABEL_48;
        memset(v20, 0, 0xD1uLL);
        if ( !DISPLAY_MUX_MGR::GetInternalPanelInfo(
                qword_140161380,
                (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)v20) )
        {
          WdLogSingleEntry0(4LL);
          WdLogGlobalForLineNumber = 4135;
          goto LABEL_48;
        }
        v9 = DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v8, *(unsigned int *)(v8 + 6376), v20);
        if ( v9 < 0 )
        {
          WdLogSingleEntry1(2LL, v9);
          WdLogGlobalForLineNumber = 4125;
          goto LABEL_11;
        }
      }
    }
    else if ( v13[0] )
    {
      memset(v18, 0, 0xD1uLL);
      if ( *(_WORD *)(v14 + 4810) == 3 )
      {
        v18[0] = 1;
        v10 = DpiBrightness3GetCaps(
                *(void **)(v14 + 24),
                *(_DWORD *)(v14 + 6376),
                (struct _DXGK_BRIGHTNESS_CAPS *)&v18[1]);
        if ( v10 < 0 )
        {
          WdLogSingleEntry1(2LL, v10);
          WdLogGlobalForLineNumber = 4156;
          goto LABEL_18;
        }
        v11 = DpiBrightness3GetNitRanges(
                *(void **)(v14 + 24),
                *(_DWORD *)(v14 + 6376),
                (struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *)&v18[5]);
        if ( v11 < 0 )
        {
          WdLogSingleEntry1(2LL, v11);
          WdLogGlobalForLineNumber = 4164;
          goto LABEL_21;
        }
      }
      if ( !DISPLAY_MUX_MGR::SetInternalPanelInfo(
              qword_140161380,
              (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)v18) )
      {
        memset(v21, 0, 0xD1uLL);
        DISPLAY_MUX_MGR::GetInternalPanelInfo(qword_140161380, (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)v21);
        if ( memcmp(v21, v18, 0xD1uLL) )
        {
          if ( !(unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 4190;
            goto LABEL_26;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4182;
LABEL_25:
          if ( byte_140161433 )
            goto LABEL_48;
LABEL_26:
          *(_DWORD *)(v14 + 6032) = 14;
          goto LABEL_48;
        }
      }
    }
    else
    {
      memset(v22, 0, 0xD1uLL);
      if ( !DISPLAY_MUX_MGR::GetInternalPanelInfo(
              qword_140161380,
              (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)v22) )
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 4221;
        goto LABEL_48;
      }
      v12 = DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v14, *(unsigned int *)(v14 + 6376), v22);
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(2LL, v12);
        WdLogGlobalForLineNumber = 4211;
        goto LABEL_11;
      }
    }
    *(_BYTE *)(v14 + 6441) = 1;
    goto LABEL_48;
  }
}
