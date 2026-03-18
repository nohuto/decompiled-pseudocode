/*
 * XREFs of ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x180298FAC
 * Callers:
 *     ??_GCDelegatedInkCanvas@@EEAAPEAXI@Z @ 0x1802990A0 (--_GCDelegatedInkCanvas@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18017E4B0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x18021E888 (--1-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x18024BD78 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z @ 0x1802587CC (-GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1732988217@@@details@wil@@QEAA_NXZ @ 0x180299B7C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1732988217@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDelegatedInkCanvas::~CDelegatedInkCanvas(CDelegatedInkCanvas *this)
{
  void **v2; // rdi
  int InkCanvasInputHost; // eax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInkCanvasInputHost *v7; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDelegatedInkCanvas::`vftable';
  v2 = (void **)((char *)this + 192);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_1732988217>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1732988217>::GetImpl'::`2'::impl)
    || *v2 )
  {
    CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL), this);
  }
  if ( *((_QWORD *)this + 21) != *((_QWORD *)this + 22) )
  {
    v7 = 0LL;
    InkCanvasInputHost = CMit::GetInkCanvasInputHost(&v7);
    if ( InkCanvasInputHost < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
        (const char *)(unsigned int)InkCanvasInputHost,
        v5);
    v4 = (*(__int64 (__fastcall **)(struct IInkCanvasInputHost *, _QWORD))(*(_QWORD *)v7 + 32LL))(
           v7,
           *((_QWORD *)this + 21));
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
        (const char *)(unsigned int)v4,
        v5);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v7);
  }
  std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>(v2);
  std::vector<unsigned char>::_Tidy((__int64)this + 168);
  CSuperWetSource::~CSuperWetSource(this);
}
