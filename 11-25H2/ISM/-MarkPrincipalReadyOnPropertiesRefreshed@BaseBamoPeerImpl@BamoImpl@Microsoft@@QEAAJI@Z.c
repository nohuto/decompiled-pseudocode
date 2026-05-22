/*
 * XREFs of ?MarkPrincipalReadyOnPropertiesRefreshed@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x1800B92C0
 * Callers:
 *     ?Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800BB0B0 (-Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPee.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x180040D40 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18005A2D4 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::MarkPrincipalReadyOnPropertiesRefreshed(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        __int64 a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rbx
  Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  int v4; // eax
  unsigned int v5; // ebx
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rax
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL);
  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(v2, a2);
  if ( Principal )
  {
    CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(Principal);
    v7 = *(_QWORD *)CurrentCaller;
    *((_BYTE *)CurrentCaller + 57) = 1;
    v8 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(v7 + 64))(CurrentCaller);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x107,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)(unsigned int)v8,
        v10);
    return 0;
  }
  else
  {
    v4 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)v2,
           0x87B2080C,
           0);
    v5 = v4;
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60C,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v4);
  }
  return v5;
}
