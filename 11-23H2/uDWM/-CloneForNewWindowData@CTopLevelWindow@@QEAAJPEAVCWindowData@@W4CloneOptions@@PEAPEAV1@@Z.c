/*
 * XREFs of ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x18001039C
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18000F7D0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000FE38 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180010468 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Attach@?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@QEAAXPEAVCTopLevelWindow@@@Z @ 0x180010884 (-Attach@-$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@QEAAXPEAVCTopLevelWindow@@@Z.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180038EF0 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z @ 0x18004E714 (--0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6278 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::CloneForNewWindowData(
        __int64 a1,
        struct CWindowData *a2,
        unsigned int a3,
        CTopLevelWindow **a4)
{
  CTopLevelWindow *v8; // rax
  CTopLevelWindow *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CTopLevelWindow *v17; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v17 = 0LL;
  v8 = (CTopLevelWindow *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            872LL);
  v15 = (int)v8;
  if ( v8 )
    v8 = CTopLevelWindow::CTopLevelWindow(v8, a2, 1);
  Microsoft::WRL::ComPtr<CTopLevelWindow>::Attach(&v17, v8);
  v9 = v17;
  if ( v17 )
  {
    v10 = CTopLevelWindow::Initialize(v17);
    v11 = v10;
    if ( v10 < 0 )
    {
      v14 = 5389LL;
    }
    else
    {
      v10 = CTopLevelWindow::InitializeVisualTreeClone(a1, v9, a3);
      v11 = v10;
      if ( v10 >= 0 )
      {
        *a4 = v9;
        return 0LL;
      }
      v14 = 5390LL;
    }
    v13 = (unsigned int)v10;
  }
  else
  {
    v11 = -2147024882;
    v13 = 2147942414LL;
    v14 = 5388LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)v13,
    v15);
  Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v17);
  return v11;
}
