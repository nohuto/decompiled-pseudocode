/*
 * XREFs of _lambda_5bf16074e78eca97c9745c10e52e39f7_::operator() @ 0x140082390
 * Callers:
 *     _DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082230 (_DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x1400828A8 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?SetDisableProcessingDisplayBatchesStatus@DISPLAY_MUX_MGR@@QEAAX_N@Z @ 0x1400874C4 (-SetDisableProcessingDisplayBatchesStatus@DISPLAY_MUX_MGR@@QEAAX_N@Z.c)
 *     DpiGdiAsyncDisplayCallout @ 0x1403DBFE0 (DpiGdiAsyncDisplayCallout.c)
 */

__int64 __fastcall lambda_5bf16074e78eca97c9745c10e52e39f7_::operator()(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  _OWORD *v4; // rcx
  _OWORD *v5; // rdx
  __int64 result; // rax

  DISPLAY_MUX_MGR::SetDisableProcessingDisplayBatchesStatus(qword_14015E3C0, 0);
  v2 = DpiGdiAsyncDisplayCallout(0x200000000LL);
  v3 = *(_QWORD *)(a1 + 8) + 92LL;
  **(_DWORD **)a1 = v2;
  CheckFailed(v2, 1043LL, v3, 585LL);
  v4 = (_OWORD *)(*(_QWORD *)(a1 + 8) + 148LL);
  v5 = **(_OWORD ***)(a1 + 16);
  result = 128LL;
  *v5 = *v4;
  v5[1] = v4[1];
  v5[2] = v4[2];
  v5[3] = v4[3];
  v5[4] = v4[4];
  v5[5] = v4[5];
  v5[6] = v4[6];
  v5[7] = v4[7];
  v5[8] = v4[8];
  v5[9] = v4[9];
  return result;
}
