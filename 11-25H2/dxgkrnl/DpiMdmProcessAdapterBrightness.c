/*
 * XREFs of DpiMdmProcessAdapterBrightness @ 0x140088794
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E8 (Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline.c)
 *     _DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082160 (_DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z @ 0x140084510 (-GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x140084D80 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     ?SetInternalPanelInfo@DISPLAY_MUX_MGR@@QEAA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z @ 0x14008761C (-SetInternalPanelInfo@DISPLAY_MUX_MGR@@QEAA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z.c)
 *     DpiDxgkDdiDisplayMuxSetInternalPanelInfo @ 0x14008B968 (DpiDxgkDdiDisplayMuxSetInternalPanelInfo.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     memcmp @ 0x1400A01E0 (memcmp.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x140245BF0 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x140245CF0 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 */

void __fastcall DpiMdmProcessAdapterBrightness(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  struct _LUID v4; // rdx
  int v5; // eax
  int Caps; // eax
  int NitRanges; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned __int8 v12[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v14; // [rsp+60h] [rbp-A0h] BYREF
  char v15; // [rsp+68h] [rbp-98h]
  _BYTE Buf2[224]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v17[224]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE Buf1[224]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v19[224]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v20[224]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v21[224]; // [rsp+4D0h] [rbp+3D0h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4040;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(FunctionalDeviceObject)",
      4040LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *(_QWORD *)(a1 + 64);
  v13 = v2;
  if ( *(_DWORD *)(v2 + 6024) != 1 && *(_DWORD *)(v2 + 6032) == 1 )
  {
    v3 = *(_DWORD *)(v2 + 6376);
    v4 = *(struct _LUID *)(v2 + 6036);
    v14 = &v13;
    v15 = 1;
    v12[0] = 0;
    if ( (int)DISPLAY_MUX_MGR::IsTargetPartOfMux(qword_14015E3C0, v4, v3, v12, 0LL) < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4073;
      *(_DWORD *)(v13 + 6032) = 9;
LABEL_47:
      DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v14);
      return;
    }
    if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline() )
    {
      memset(Buf1, 0, 0xD1uLL);
      if ( DISPLAY_MUX_MGR::GetInternalPanelInfo(
             qword_14015E3C0,
             (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)Buf1) )
      {
        v5 = DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v13, *(unsigned int *)(v13 + 6376), Buf1);
        if ( v5 < 0 )
        {
          WdLogSingleEntry1(2LL, v5);
          WdLogGlobalForLineNumber = 4088;
LABEL_11:
          *(_DWORD *)(v13 + 6032) = 15;
          goto LABEL_47;
        }
        *(_BYTE *)(v13 + 6441) = 1;
      }
      else
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 4098;
      }
      if ( v12[0] )
      {
        memset(Buf2, 0, 0xD1uLL);
        if ( *(_WORD *)(v13 + 4810) == 3 )
        {
          Buf2[0] = 1;
          Caps = DpiBrightness3GetCaps(
                   *(void **)(v13 + 24),
                   *(_DWORD *)(v13 + 6376),
                   (struct _DXGK_BRIGHTNESS_CAPS *)&Buf2[1]);
          if ( Caps < 0 )
          {
            WdLogSingleEntry1(2LL, Caps);
            WdLogGlobalForLineNumber = 4114;
LABEL_18:
            *(_DWORD *)(v13 + 6032) = 12;
            goto LABEL_47;
          }
          NitRanges = DpiBrightness3GetNitRanges(
                        *(void **)(v13 + 24),
                        *(_DWORD *)(v13 + 6376),
                        (struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *)&Buf2[5]);
          if ( NitRanges < 0 )
          {
            WdLogSingleEntry1(2LL, NitRanges);
            WdLogGlobalForLineNumber = 4122;
LABEL_21:
            *(_DWORD *)(v13 + 6032) = 13;
            goto LABEL_47;
          }
        }
        if ( !DISPLAY_MUX_MGR::SetInternalPanelInfo(
                qword_14015E3C0,
                (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)Buf2)
          && memcmp(Buf1, Buf2, 0xD1uLL) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4136;
          goto LABEL_25;
        }
      }
      else
      {
        memset(v19, 0, 0xD1uLL);
        if ( !DISPLAY_MUX_MGR::GetInternalPanelInfo(
                qword_14015E3C0,
                (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)v19) )
        {
          WdLogSingleEntry0(4LL);
          WdLogGlobalForLineNumber = 4170;
          goto LABEL_47;
        }
        v8 = DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v13, *(unsigned int *)(v13 + 6376), v19);
        if ( v8 < 0 )
        {
          WdLogSingleEntry1(2LL, v8);
          WdLogGlobalForLineNumber = 4160;
          goto LABEL_11;
        }
      }
    }
    else if ( v12[0] )
    {
      memset(v17, 0, 0xD1uLL);
      if ( *(_WORD *)(v13 + 4810) == 3 )
      {
        v17[0] = 1;
        v9 = DpiBrightness3GetCaps(
               *(void **)(v13 + 24),
               *(_DWORD *)(v13 + 6376),
               (struct _DXGK_BRIGHTNESS_CAPS *)&v17[1]);
        if ( v9 < 0 )
        {
          WdLogSingleEntry1(2LL, v9);
          WdLogGlobalForLineNumber = 4189;
          goto LABEL_18;
        }
        v10 = DpiBrightness3GetNitRanges(
                *(void **)(v13 + 24),
                *(_DWORD *)(v13 + 6376),
                (struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *)&v17[5]);
        if ( v10 < 0 )
        {
          WdLogSingleEntry1(2LL, v10);
          WdLogGlobalForLineNumber = 4197;
          goto LABEL_21;
        }
      }
      if ( !DISPLAY_MUX_MGR::SetInternalPanelInfo(
              qword_14015E3C0,
              (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)v17) )
      {
        memset(v20, 0, 0xD1uLL);
        DISPLAY_MUX_MGR::GetInternalPanelInfo(qword_14015E3C0, (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)v20);
        if ( memcmp(v20, v17, 0xD1uLL) )
        {
          if ( !(unsigned int)Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline() )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 4223;
            goto LABEL_26;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4215;
LABEL_25:
          if ( byte_14015E433 )
            goto LABEL_47;
LABEL_26:
          *(_DWORD *)(v13 + 6032) = 14;
          goto LABEL_47;
        }
      }
    }
    else
    {
      memset(v21, 0, 0xD1uLL);
      if ( !DISPLAY_MUX_MGR::GetInternalPanelInfo(
              qword_14015E3C0,
              (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)v21) )
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 4254;
        goto LABEL_47;
      }
      v11 = DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v13, *(unsigned int *)(v13 + 6376), v21);
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL, v11);
        WdLogGlobalForLineNumber = 4244;
        goto LABEL_11;
      }
    }
    *(_BYTE *)(v13 + 6441) = 1;
    goto LABEL_47;
  }
}
