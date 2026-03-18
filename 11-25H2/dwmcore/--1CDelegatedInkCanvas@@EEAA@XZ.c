/*
 * XREFs of ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x1802A302C
 * Callers:
 *     ??_GCDelegatedInkCanvas@@EEAAPEAXI@Z @ 0x1802A3110 (--_GCDelegatedInkCanvas@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18005CAE0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x180229C74 (--1-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180257148 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z @ 0x18026370C (-GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDelegatedInkCanvas::~CDelegatedInkCanvas(CDelegatedInkCanvas *this)
{
  void **v1; // rsi
  bool v3; // zf
  int InkCanvasInputHost; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInkCanvasInputHost *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (void **)((char *)this + 192);
  v3 = *((_QWORD *)this + 24) == 0LL;
  *(_QWORD *)this = &CDelegatedInkCanvas::`vftable';
  if ( !v3 )
    CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL), this);
  if ( *((_QWORD *)this + 21) != *((_QWORD *)this + 22) )
  {
    v8 = 0LL;
    InkCanvasInputHost = CMit::GetInkCanvasInputHost(&v8);
    if ( InkCanvasInputHost < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
        (const char *)(unsigned int)InkCanvasInputHost,
        v6);
    v5 = (*(__int64 (__fastcall **)(struct IInkCanvasInputHost *, _QWORD))(*(_QWORD *)v8 + 32LL))(
           v8,
           *((_QWORD *)this + 21));
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x20,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
        (const char *)(unsigned int)v5,
        v6);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v8);
  }
  std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>(v1);
  std::vector<unsigned char>::_Tidy((__int64)this + 168);
  CSuperWetSource::~CSuperWetSource(this);
}
