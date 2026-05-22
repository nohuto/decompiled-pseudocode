/*
 * XREFs of ?UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUDockableDeviceIdentity@@@Z @ 0x180127EC8
 * Callers:
 *     ?Thunk_UpdateDeviceId_75@?$IDockableDeviceProxy_Receive@VBamoDockableDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180126680 (-Thunk_UpdateDeviceId_75@-$IDockableDeviceProxy_Receive@VBamoDockableDeviceProxyImpl@BamoImpl@@@.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockableDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012C1B0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockableDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoP.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AA6C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006AB14 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnDeviceIdChanged@BamoDockableDeviceProxy@@AEAAXXZ @ 0x1801179E8 (-LogOnDeviceIdChanged@BamoDockableDeviceProxy@@AEAAXXZ.c)
 *     ?LogOnDeviceIdChanging@BamoDockableDeviceProxy@@AEAAXAEBUDockableDeviceIdentity@@@Z @ 0x180117A38 (-LogOnDeviceIdChanging@BamoDockableDeviceProxy@@AEAAXAEBUDockableDeviceIdentity@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceId(
        BamoImpl::BamoDockableDeviceProxyImpl *this,
        const struct DockableDeviceIdentity *a2,
        const struct DockableDeviceIdentity *a3)
{
  char v4; // bp
  BamoDockableDeviceProxy *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char)a2;
  v6 = (BamoImpl::BamoDockableDeviceProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoDockableDeviceProxy::LogOnDeviceIdChanging((BamoImpl::BamoDockableDeviceProxyImpl *)((char *)this - 16), a2);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoDockableDeviceProxy *, const struct DockableDeviceIdentity *))(*(_QWORD *)v6 + 120LL))(
           v6,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBB97,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoDockableDeviceProxy::LogOnDeviceIdChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoDockableDeviceProxy *))(*(_QWORD *)v6 + 128LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBBA5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)a2, (__int64)a3);
  return 0LL;
}
