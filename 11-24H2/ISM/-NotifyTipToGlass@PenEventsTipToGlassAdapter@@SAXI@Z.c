/*
 * XREFs of ?NotifyTipToGlass@PenEventsTipToGlassAdapter@@SAXI@Z @ 0x1801B95D0
 * Callers:
 *     ?OnHitTest@TipToGlassProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800536F0 (-OnHitTest@TipToGlassProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?NotifyTipToGlass@PenEventsDispatcherPrincipal@@QEAAXI@Z @ 0x18019593C (-NotifyTipToGlass@PenEventsDispatcherPrincipal@@QEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PenEventsTipToGlassAdapter::NotifyTipToGlass(unsigned int a1)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  _QWORD *v3; // rbx
  PenEventsDispatcherPrincipal *v4; // rax

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( BamoServerConnection )
  {
    v3 = (_QWORD *)*((_QWORD *)BamoServerConnection + 31);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD *))*v3)(v3);
      v4 = (PenEventsDispatcherPrincipal *)(*(__int64 (__fastcall **)(_QWORD *))(v3[1] + 184LL))(v3 + 1);
      if ( v4 )
        PenEventsDispatcherPrincipal::NotifyTipToGlass(v4, a1);
    }
    if ( v3 )
      (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
  }
}
