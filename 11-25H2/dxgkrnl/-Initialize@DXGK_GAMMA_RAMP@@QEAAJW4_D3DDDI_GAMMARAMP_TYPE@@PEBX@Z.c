/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140012B90
 * Callers:
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1401CEFCC (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D486C (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1402D71F8 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D74E8 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402D8A30 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     DxgkSetGammaRamp @ 0x140402BB0 (DxgkSetGammaRamp.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042D880 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x140012F60 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, enum _D3DDDI_GAMMARAMP_TYPE a2, const void *a3)
{
  __int64 v3; // rsi
  unsigned __int64 SizeFromGammaRampType; // rax
  void *v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  v3 = a2;
  if ( (unsigned int)(a2 - 1) <= 4 )
  {
    SizeFromGammaRampType = GetSizeFromGammaRampType(a2);
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
              0,
              1,
              -1,
              (__int64)L"Failed to allocate 0x%I64x byte memory for GAMMA RAMP.",
              *((_QWORD *)this + 3),
              0LL,
              0LL,
              0LL,
              0LL);
        }
        return 3221225495LL;
      }
      if ( a3 )
        memmove(v7, a3, *((_QWORD *)this + 3));
    }
    *((_DWORD *)this + 4) = v3;
    return 0LL;
  }
  WdLogSingleEntry1(2LL, a2);
  WdLogGlobalForLineNumber = 112;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      v13,
      v12,
      v14,
      0,
      0,
      -1,
      (__int64)L"Caller specified gamma ramp type 0x%I64x is not valid.",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
  return 3221225485LL;
}
