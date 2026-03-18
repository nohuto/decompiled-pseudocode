/*
 * XREFs of ?ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ @ 0x1C00AD5B8
 * Callers:
 *     ?ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00AD580 (-ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAXPEAVCApplicationC.c)
 *     ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0227FD0 (-SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0022500 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::ClearSynchronizationEvents(
        DirectComposition::CCompiledEffectTemplateMarshaler *this)
{
  DirectComposition::CEvent *v2; // rcx
  __int64 v3; // rcx
  DirectComposition::CEvent *v4; // rcx

  v2 = (DirectComposition::CEvent *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    KeSetEvent(*(PRKEVENT *)(v3 + 8), 1, 0);
    v4 = (DirectComposition::CEvent *)*((_QWORD *)this + 11);
    if ( v4 )
      DirectComposition::CEvent::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 11) = 0LL;
  }
}
