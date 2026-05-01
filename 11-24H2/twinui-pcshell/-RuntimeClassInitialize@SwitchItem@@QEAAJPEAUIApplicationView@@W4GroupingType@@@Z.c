/*
 * XREFs of ?RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z @ 0x1804BF590
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItem@@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Z @ 0x1804BEF68 (--$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Mi.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ObservableProperty@PEAUHWND__@@@@QEAAAEBQEAUHWND__@@AEBQEAU1@@Z @ 0x1804B2D5C (--4-$ObservableProperty@PEAUHWND__@@@@QEAAAEBQEAUHWND__@@AEBQEAU1@@Z.c)
 *     ?_IsCortanaAltTabProxyWindowView@SwitchItem@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804BF720 (-_IsCortanaAltTabProxyWindowView@SwitchItem@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?_LoadTitle@SwitchItem@@AEAAJXZ @ 0x1804BF8E8 (-_LoadTitle@SwitchItem@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SwitchItem::RuntimeClassInitialize(__int64 a1, struct IApplicationView *a2, int a3)
{
  __int64 *v3; // r14
  __int64 v7; // rcx
  int Title; // ebx
  __int64 v9; // rdx
  __int64 v11; // rcx
  int v12; // eax
  SwitchItem *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 96);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 96), (__int64)a2);
  v7 = *v3;
  *(_DWORD *)(a1 + 184) = a3;
  Title = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 184LL))(v7, a1 + 192);
  if ( Title < 0 )
  {
    v9 = 88LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
      (const char *)(unsigned int)Title);
    return (unsigned int)Title;
  }
  v11 = *v3;
  v15 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 72LL))(v11, &v15);
  if ( v12 >= 0 )
    ObservableProperty<HWND__ *>::operator=((_QWORD *)(a1 + 144), &v15);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6C,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
      (const char *)(unsigned int)v12);
  Title = SwitchItem::_LoadTitle((SwitchItem *)a1);
  if ( Title < 0 )
  {
    v9 = 90LL;
    goto LABEL_3;
  }
  if ( SwitchItem::_IsCortanaAltTabProxyWindowView(v13, a2) )
    *(_QWORD *)(a1 + 192) = -1LL;
  return 0LL;
}
