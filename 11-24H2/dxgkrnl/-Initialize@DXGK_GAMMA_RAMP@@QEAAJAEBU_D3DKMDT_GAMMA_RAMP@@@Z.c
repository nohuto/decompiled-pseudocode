/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1400221A0
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x14008FA54 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402DEC30 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1402DF49C (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1400223F0 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, const struct _D3DKMDT_GAMMA_RAMP *a2)
{
  unsigned __int64 SizeFromGammaRampType; // rax
  SIZE_T DataSize; // r8
  void *v6; // rax
  size_t v7; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  const wchar_t *v17; // rax
  D3DDDI_GAMMARAMP_TYPE Type; // [rsp+38h] [rbp-30h]
  SIZE_T v19; // [rsp+40h] [rbp-28h]
  char v20; // [rsp+48h] [rbp-20h]

  if ( (unsigned int)(a2->Type - 1) > 4 )
  {
    WdLogSingleEntry1(2LL, a2->Type);
    WdLogGlobalForLineNumber = 152;
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) == 0 )
      return 3221225485LL;
    v20 = 0;
    LOBYTE(v19) = 0;
    Type = a2->Type;
    v17 = L"Caller specified gamma ramp has invalid gamma type 0x%I64x.";
    goto LABEL_19;
  }
  SizeFromGammaRampType = GetSizeFromGammaRampType(a2->Type);
  *((_QWORD *)this + 3) = SizeFromGammaRampType;
  DataSize = a2->DataSize;
  if ( SizeFromGammaRampType != DataSize )
  {
    WdLogSingleEntry3(2LL, a2->Type, DataSize, -1073741811LL);
    WdLogGlobalForLineNumber = 166;
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) == 0 )
      return 3221225485LL;
    v16 = a2->Type;
    v20 = 13;
    v19 = a2->DataSize;
    v17 = L"GammaRamp size 0x%I64x does not match the gamma ramp type 0x%I64x, returning 0x%I64x";
    Type = a2->Type;
LABEL_19:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v16, v14, v15, 0LL, 0, -1, v17, Type, v19, v20, 0, 0);
    return 3221225485LL;
  }
  if ( !SizeFromGammaRampType )
  {
LABEL_7:
    *((_DWORD *)this + 4) = a2->Type;
    return 0LL;
  }
  if ( !a2->Data.pRgb256x3x16 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 177;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        (__int64)L"Caller specified gamma ramp does not have the gamma table it should have.",
        v9,
        v10,
        0LL,
        0,
        -1,
        L"Caller specified gamma ramp does not have the gamma table it should have.",
        177,
        0,
        0,
        0,
        0);
    return 3221225485LL;
  }
  v6 = (void *)operator new[](SizeFromGammaRampType, 1265072196LL, 256LL);
  v7 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = v6;
  if ( v6 )
  {
    memmove(v6, a2->Data.pRgb256x3x16, v7);
    goto LABEL_7;
  }
  WdLogSingleEntry1(6LL, v7);
  WdLogGlobalForLineNumber = 184;
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v12,
        v11,
        v13,
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
