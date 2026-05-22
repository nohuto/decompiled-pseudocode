/*
 * XREFs of ?IsTipToGlassRequired@PenEventsTipToGlassAdapter@@SA_NXZ @ 0x180063F84
 * Callers:
 *     ?OnHitTest@TipToGlassProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800538A0 (-OnHitTest@TipToGlassProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ @ 0x180064058 (-IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool PenEventsTipToGlassAdapter::IsTipToGlassRequired(void)
{
  bool IsTipToGlassRequired; // di
  struct InputSystemServerConnection *BamoServerConnection; // rax
  _QWORD *v2; // rbx
  PenEventsDispatcherPrincipal *v3; // rax

  IsTipToGlassRequired = 0;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( BamoServerConnection )
  {
    v2 = (_QWORD *)*((_QWORD *)BamoServerConnection + 31);
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD *))*v2)(v2);
      v3 = (PenEventsDispatcherPrincipal *)(*(__int64 (__fastcall **)(_QWORD *))(v2[1] + 184LL))(v2 + 1);
      if ( v3 )
        IsTipToGlassRequired = PenEventsDispatcherPrincipal::IsTipToGlassRequired(v3);
    }
    if ( v2 )
      (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
  }
  return IsTipToGlassRequired;
}
