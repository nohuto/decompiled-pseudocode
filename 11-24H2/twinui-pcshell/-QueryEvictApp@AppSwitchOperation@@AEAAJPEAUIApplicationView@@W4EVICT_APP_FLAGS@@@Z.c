/*
 * XREFs of ?QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180525570
 * Callers:
 *     ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180524FF0 (-EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C1258 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     ?_ConsolidateBuffers@CAppLayoutOperation@@IEAAJPEAUIAppLayoutItem@@@Z @ 0x1806C1884 (-_ConsolidateBuffers@CAppLayoutOperation@@IEAAJPEAUIAppLayoutItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppSwitchOperation::QueryEvictApp(__int64 a1, __int64 a2, char a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  CAppLayoutOperation *v9; // rsi
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, GUID *, struct IAppLayoutItem **); // rbx
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  struct IAppLayoutItem *v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 152LL))(
         *(_QWORD *)(a1 + 64),
         a2,
         0LL,
         &v15);
  if ( v6 < 0 )
  {
    v7 = 449LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
         *(_QWORD *)(a1 + 64),
         a2,
         0LL,
         1LL);
  if ( v6 < 0 )
  {
    v7 = 452LL;
    goto LABEL_3;
  }
  v9 = (CAppLayoutOperation *)(a1 + 24);
  CAppLayoutOperation::_AddAnimationData(a1 + 24, a2, 8 * (a3 & 1u) + 2);
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 4LL) > 1 )
  {
    v16 = 0LL;
    v10 = *(_QWORD *)(a1 + 64);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IAppLayoutItem **))(*(_QWORD *)v10 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    v12 = v11(v10, v15, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v16);
    v6 = v12;
    if ( v12 < 0 )
    {
      v13 = 459LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      return (unsigned int)v6;
    }
    v12 = CAppLayoutOperation::_ConsolidateBuffers(v9, v16);
    v6 = v12;
    if ( v12 < 0 )
    {
      v13 = 460LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  }
  return 0LL;
}
