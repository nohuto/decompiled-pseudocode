/*
 * XREFs of ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x18020D510
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x180100570 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180109514 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CRedirectedVisualContent::Initialize(CRedirectedVisualContent *this)
{
  int v2; // eax
  int VisualTree; // ebx
  CVisual *v4; // rcx
  struct CVisualTree *v6; // [rsp+38h] [rbp-20h] BYREF
  char v7; // [rsp+40h] [rbp-18h]

  v2 = CResource::RegisterNotifier(this, *((struct CResource **)this + 9));
  VisualTree = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x23u, 0LL);
  }
  else
  {
    v4 = (CVisual *)*((_QWORD *)this + 9);
    v6 = 0LL;
    v7 = 1;
    VisualTree = CVisual::GetVisualTree(v4, &v6);
    if ( v7 )
      wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
        (__int64 *)this + 10,
        (__int64)v6);
    if ( VisualTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, VisualTree, 0x26u, 0LL);
  }
  return (unsigned int)VisualTree;
}
