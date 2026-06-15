/*
 * XREFs of ?GetFilteredProcessingModesForStreaming@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4ApoType@@_NAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18003D2E0
 * Callers:
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003CD24 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003E5F8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall EffectPack::GetFilteredProcessingModesForStreaming(
        __int64 a1,
        int a2,
        unsigned int a3,
        char a4,
        __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a3;
  v7 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  v8 = v6 + 3LL * a2;
  v9 = *(_QWORD *)(a1 + 1568);
  v8 *= 32LL;
  v10 = 0;
  v11 = *(_DWORD *)(v8 + v9 + 1328);
  v12 = *(_QWORD *)(v8 + v9 + 1336);
  v13 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  while ( 1 )
  {
    if ( v10 >= v11 )
      return 0LL;
    v15 = 16LL * v10;
    if ( a4 )
      break;
    v16 = *(_QWORD *)(v15 + v12) - v7;
    if ( !v16 )
      v16 = *(_QWORD *)(v15 + v12 + 8) - v13;
    if ( v16 )
      break;
LABEL_8:
    ++v10;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a5, v15 + v12) )
  {
    v13 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v7 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4CC,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
