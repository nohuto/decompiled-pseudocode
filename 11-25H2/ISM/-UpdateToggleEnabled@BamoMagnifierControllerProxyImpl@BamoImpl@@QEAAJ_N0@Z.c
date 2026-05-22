/*
 * XREFs of ?UpdateToggleEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180156688
 * Callers:
 *     ?Thunk_UpdateToggleEnabled_11@?$IMagnifierControllerProxy_Receive@VBamoMagnifierControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180156340 (-Thunk_UpdateToggleEnabled_11@-$IMagnifierControllerProxy_Receive@VBamoMagnifierControllerProxyI.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMagnifierControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180156640 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMagnifierControllerProxyImpl@BamoImpl@@UEAAXPEAV.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AC1C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006ACC4 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnToggleEnabledChanged@BamoMagnifierControllerProxy@@AEAAXXZ @ 0x180155B44 (-LogOnToggleEnabledChanged@BamoMagnifierControllerProxy@@AEAAXXZ.c)
 *     ?LogOnToggleEnabledChanging@BamoMagnifierControllerProxy@@AEAAX_N@Z @ 0x180155B94 (-LogOnToggleEnabledChanging@BamoMagnifierControllerProxy@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoMagnifierControllerProxyImpl::UpdateToggleEnabled(
        BamoImpl::BamoMagnifierControllerProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // si
  char v4; // bp
  BamoMagnifierControllerProxy *v6; // rdi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = (BamoImpl::BamoMagnifierControllerProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoMagnifierControllerProxy::LogOnToggleEnabledChanging((BamoImpl::BamoMagnifierControllerProxyImpl *)((char *)this - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    LOBYTE(v7) = v3;
    v8 = (*(__int64 (__fastcall **)(BamoMagnifierControllerProxy *, __int64))(*(_QWORD *)v6 + 104LL))(v6, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x48F8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v11);
  }
  *((_BYTE *)this + 32) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoMagnifierControllerProxy::LogOnToggleEnabledChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v9 = (*(__int64 (__fastcall **)(BamoMagnifierControllerProxy *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4906,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v11);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
