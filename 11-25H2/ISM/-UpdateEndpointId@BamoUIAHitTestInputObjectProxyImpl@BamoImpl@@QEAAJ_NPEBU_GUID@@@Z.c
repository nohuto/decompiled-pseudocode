/*
 * XREFs of ?UpdateEndpointId@BamoUIAHitTestInputObjectProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x180126AA8
 * Callers:
 *     ?Thunk_UpdateEndpointId_47@?$IUIAHitTestInputObjectProxy_Receive@VBamoUIAHitTestInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801249B0 (-Thunk_UpdateEndpointId_47@-$IUIAHitTestInputObjectProxy_Receive@VBamoUIAHitTestInputObjectProxy.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoUIAHitTestInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012A7B0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoUIAHitTestInputObjectProxyImpl@BamoImpl@@UEAAXPE.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AC1C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006ACC4 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnEndpointIdChanged@BamoUIAHitTestInputObjectProxy@@AEAAXXZ @ 0x18011634C (-LogOnEndpointIdChanged@BamoUIAHitTestInputObjectProxy@@AEAAXXZ.c)
 *     ?LogOnEndpointIdChanging@BamoUIAHitTestInputObjectProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011639C (-LogOnEndpointIdChanging@BamoUIAHitTestInputObjectProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoUIAHitTestInputObjectProxyImpl::UpdateEndpointId(
        BamoImpl::BamoUIAHitTestInputObjectProxyImpl *this,
        __int64 a2,
        const struct _GUID *a3)
{
  char v4; // bp
  BamoUIAHitTestInputObjectProxy *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  v6 = (BamoImpl::BamoUIAHitTestInputObjectProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoUIAHitTestInputObjectProxy::LogOnEndpointIdChanging(
      (BamoImpl::BamoUIAHitTestInputObjectProxyImpl *)((char *)this - 16),
      a3);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoUIAHitTestInputObjectProxy *, const struct _GUID *))(*(_QWORD *)v6 + 104LL))(
           v6,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9EF6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *((struct _GUID *)this + 2) = *a3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoUIAHitTestInputObjectProxy::LogOnEndpointIdChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoUIAHitTestInputObjectProxy *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9F04,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
