/*
 * XREFs of ??1?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800464B4
 * Callers:
 *     ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1800463E0 (-OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180062640 (-OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     _Microsoft::BamoImpl::BamoProxyImpl::OnZeroReferenceCount_::_1_::dtor$0 @ 0x1801CACBA (_Microsoft--BamoImpl--BamoProxyImpl--OnZeroReferenceCount_--_1_--dtor$0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x1800AC3E8 (-OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        Microsoft::BamoImpl::CalloutWrapperObject *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)a1 + 1) )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog(a1);
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 16) + 24LL))(*(_QWORD *)(v5 + 16));
    *(_DWORD *)(v5 + 184) = GetCurrentThreadId();
  }
  if ( *((_QWORD *)a1 + 1) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF6,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.h",
      a4);
}
