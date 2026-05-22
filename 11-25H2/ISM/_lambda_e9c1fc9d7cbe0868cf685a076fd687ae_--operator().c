/*
 * XREFs of _lambda_e9c1fc9d7cbe0868cf685a076fd687ae_::operator() @ 0x1800BBC0C
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800BC5D4 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x180032310 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 */

__int64 __fastcall lambda_e9c1fc9d7cbe0868cf685a076fd687ae_::operator()(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        _OWORD *a6)
{
  int v10; // eax
  __int64 v11; // rax
  int v12; // ecx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 result; // rax
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  memset_0((void *)a2, 0, 0xBC0uLL);
  *(_DWORD *)(a2 + 24) = 3008;
  v10 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, a3, 512, a5, a2);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C4,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v10,
      v16);
  v11 = *a1;
  *(_DWORD *)(a2 + 1056) = 1;
  v12 = *(_DWORD *)(v11 + 3372);
  *(_DWORD *)(a2 + 1200) = -1;
  *(_DWORD *)(a2 + 1064) = a4;
  v13 = a6[1];
  *(_OWORD *)(a2 + 312) = *a6;
  *(_DWORD *)(a2 + 1068) = a3;
  v14 = a6[2];
  result = a2;
  *(_OWORD *)(a2 + 328) = v13;
  *(_DWORD *)(a2 + 1060) = v12;
  *(_OWORD *)(a2 + 344) = v14;
  *(_DWORD *)(a2 + 1072) = 1065353216;
  *(_WORD *)(a2 + 964) = 0;
  *(_WORD *)(a2 + 996) = 0;
  return result;
}
