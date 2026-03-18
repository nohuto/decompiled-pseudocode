/*
 * XREFs of ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z @ 0x1801B96CC
 * Callers:
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x1801B95C8 (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 *     ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x1802969B0 (-AddSharedLights@CVisual@@AEAAJAEAV-$vector@ULightEntry@CVisual@@V-$allocator@ULightEntry@CVisua.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1801B97AC (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 */

__int64 __fastcall CCompositionLight::AddTarget(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v7; // r14
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r11
  __int64 v11; // r8
  unsigned int v12; // edx
  int v13; // edi
  unsigned int v15; // eax
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = a2;
  v7 = a4;
  v8 = a1 + (a3 != 0 ? 128LL : 88LL);
  v9 = 0;
  v10 = *(_QWORD *)v8;
  v11 = *(unsigned int *)(v8 + 24);
  while ( v9 < (unsigned int)v11 )
  {
    if ( a2 == *(_QWORD *)(v10 + 8LL * v9) )
      return 0LL;
    ++v9;
  }
  v12 = v11 + 1;
  if ( (int)v11 + 1 < (unsigned int)v11 )
  {
    v13 = -2147024362;
    v15 = 181;
    LODWORD(a4) = -2147024362;
    goto LABEL_14;
  }
  if ( v12 > *(_DWORD *)(v8 + 20) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet(v8, 8, 1, &v18);
    a4 = (unsigned int)v13;
    if ( v13 >= 0 )
      goto LABEL_8;
    v15 = 192;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, a4, v15, 0LL);
    v16 = 351LL;
    goto LABEL_15;
  }
  *(_QWORD *)(v10 + 8 * v11) = a2;
  *(_DWORD *)(v8 + 24) = v12;
LABEL_8:
  LOBYTE(a4) = v7;
  v13 = CVisual::AddLight(v18, a1, a3, a4);
  if ( v13 >= 0 )
    return 0LL;
  v16 = 352LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionlight.cpp",
    (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
