/*
 * XREFs of ?SetReferenceSurface@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@QEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1802848B0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1802B0CAC (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::SetReferenceSurface(
        CResource *this,
        struct CResource *a2)
{
  unsigned int v3; // edi
  struct CResource *v4; // rcx
  int v6; // eax

  v3 = 0;
  v4 = (struct CResource *)*((_QWORD *)this + 23);
  if ( a2 != v4 )
  {
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(**((_QWORD **)v4 + 12) + 424LL))(*((_QWORD **)v4 + 12), 0LL);
    v6 = CResource::RegisterNotifier(this, a2);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x13FEu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 23));
      *((_QWORD *)this + 23) = a2;
      CSynchronousSuperWetInk::OnPropertyChanged(this);
    }
  }
  return v3;
}
