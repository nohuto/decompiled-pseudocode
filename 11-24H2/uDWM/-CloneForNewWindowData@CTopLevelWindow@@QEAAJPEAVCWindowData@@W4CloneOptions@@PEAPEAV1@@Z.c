/*
 * XREFs of ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x180030460
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000728C (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800323B0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000AEF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x18002E160 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z @ 0x18002F138 (--0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180031104 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::CloneForNewWindowData(
        __int64 a1,
        struct CWindowData *a2,
        unsigned int a3,
        CBaseObject ***a4)
{
  CTopLevelWindow *v8; // rax
  CBaseObject **v9; // rbx
  int v10; // edi
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v15; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (CTopLevelWindow *)DefaultHeap::AllocClear(0x348uLL);
  v15 = v8;
  if ( v8 )
    v9 = (CBaseObject **)CTopLevelWindow::CTopLevelWindow(v8, a2, 1);
  else
    v9 = 0LL;
  v15 = v9;
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v15) )
  {
    v10 = -2147024882;
    v12 = 5465LL;
  }
  else
  {
    v10 = CTopLevelWindow::Initialize(v9);
    if ( v10 < 0 )
    {
      v12 = 5466LL;
    }
    else
    {
      v10 = CTopLevelWindow::InitializeVisualTreeClone(a1, v9, a3);
      if ( v10 >= 0 )
      {
        *a4 = v9;
        return 0LL;
      }
      v12 = 5467LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v10,
    v13);
  if ( v9 )
    CBaseObject::Release((CBaseObject *)v9);
  return (unsigned int)v10;
}
