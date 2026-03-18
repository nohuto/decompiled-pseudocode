/*
 * XREFs of ?SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D6544
 * Callers:
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D64B4 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x140054670 (-IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z @ 0x1402D66F4 (-DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetGamma(DMMVIDPNPRESENTPATH *this, const struct DXGK_GAMMA_RAMP *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  ADAPTER_DISPLAY *v6; // rbx
  __int64 v7; // r8
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v8; // xmm1_8
  __int128 v9; // xmm0
  int v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  _DXGKARG_SETTARGETGAMMA v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v4 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 88LL);
  if ( !*(_QWORD *)(v5 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v6 = *(ADAPTER_DISPLAY **)(v5 + 8);
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v6) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 490;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 216LL) + 64LL) + 40LL) + 28LL) < 0x700Au )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 491;
  }
  if ( !a2 || !DMMVIDEOPRESENTTARGET::IsTargetCurrentActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12) + 96LL)) )
    return 0LL;
  v8 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)*((_QWORD *)a2 + 4);
  memset(&v13, 0, sizeof(v13));
  v9 = *((_OWORD *)a2 + 1);
  v13.TargetId = *(_DWORD *)(v7 + 24);
  v13.GammaRamp.Data.pRgb256x3x16 = v8;
  *(_OWORD *)&v13.GammaRamp.Type = v9;
  v10 = ADAPTER_DISPLAY::DdiSetTargetGamma(v6, &v13);
  v11 = v10;
  if ( v10 == -1073741637 )
  {
    WdLogSingleEntry2(3LL, this, -1073741637LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 512;
  }
  else
  {
    if ( v10 >= 0 )
      return 0LL;
    WdLogSingleEntry2(2LL, this, v10);
    result = v11;
    WdLogGlobalForLineNumber = 518;
  }
  return result;
}
