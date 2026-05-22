/*
 * XREFs of ?UpdateSecondaryClickZone@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_NPEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z @ 0x18013706C
 * Callers:
 *     ?Thunk_UpdateSecondaryClickZone_418@?$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180136CA0 (-Thunk_UpdateSecondaryClickZone_418@-$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchp.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801373F0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@UEA.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AA6C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006AB14 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnSecondaryClickZoneChanged@BamoVirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180135720 (-LogOnSecondaryClickZoneChanged@BamoVirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?LogOnSecondaryClickZoneChanging@BamoVirtualTouchpadControllerProxy@@AEAAXAEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z @ 0x180135770 (-LogOnSecondaryClickZoneChanging@BamoVirtualTouchpadControllerProxy@@AEAAXAEBUPhysicalClickZone@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateSecondaryClickZone(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *this,
        const struct Windows::UI::Internal::Input::PhysicalClickZone *a2,
        const struct Windows::UI::Internal::Input::PhysicalClickZone *a3)
{
  char v4; // bp
  BamoVirtualTouchpadControllerProxy *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char)a2;
  v6 = (BamoImpl::BamoVirtualTouchpadControllerProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoVirtualTouchpadControllerProxy::LogOnSecondaryClickZoneChanging(
      (BamoImpl::BamoVirtualTouchpadControllerProxyImpl *)((char *)this - 16),
      a2);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoVirtualTouchpadControllerProxy *, const struct Windows::UI::Internal::Input::PhysicalClickZone *))(*(_QWORD *)v6 + 184LL))(
           v6,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB1F7,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)a3;
  *((_DWORD *)this + 26) = *((_DWORD *)a3 + 4);
  if ( *((_BYTE *)this + 28) )
  {
    BamoVirtualTouchpadControllerProxy::LogOnSecondaryClickZoneChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoVirtualTouchpadControllerProxy *))(*(_QWORD *)v6 + 192LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB205,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)a2, (__int64)a3);
  return 0LL;
}
