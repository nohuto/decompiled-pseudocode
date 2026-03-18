/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140022020
 * Callers:
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1401D430C (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14028FB10 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402DEC30 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x140313734 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x14031476C (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     DxgkSetGammaRamp @ 0x1403FCA30 (DxgkSetGammaRamp.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042F770 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1400223F0 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, __int32 a2, const void *a3)
{
  unsigned __int64 SizeFromGammaRampType; // rax
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  if ( (unsigned int)(a2 - 1) <= 4 )
  {
    SizeFromGammaRampType = GetSizeFromGammaRampType((enum _D3DDDI_GAMMARAMP_TYPE)a2);
    *((_QWORD *)this + 3) = SizeFromGammaRampType;
    if ( SizeFromGammaRampType )
    {
      v7 = (void *)operator new[](SizeFromGammaRampType, 1265072196LL, 256LL);
      *((_QWORD *)this + 4) = v7;
      if ( !v7 )
      {
        WdLogSingleEntry1(6LL, *((_QWORD *)this + 3));
        WdLogGlobalForLineNumber = 126;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v9,
              v8,
              v10,
              0LL,
              1,
              -1,
              L"Failed to allocate 0x%I64x byte memory for GAMMA RAMP.",
              *((_QWORD *)this + 3),
              0,
              0,
              0,
              0);
        }
        return 3221225495LL;
      }
      if ( a3 )
        memmove(v7, a3, *((_QWORD *)this + 3));
    }
    *((_DWORD *)this + 4) = a2;
    return 0LL;
  }
  WdLogSingleEntry1(2LL, a2);
  WdLogGlobalForLineNumber = 112;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      v13,
      v12,
      v14,
      0LL,
      0,
      -1,
      L"Caller specified gamma ramp type 0x%I64x is not valid.",
      a2,
      0,
      0,
      0,
      0);
  return 3221225485LL;
}
