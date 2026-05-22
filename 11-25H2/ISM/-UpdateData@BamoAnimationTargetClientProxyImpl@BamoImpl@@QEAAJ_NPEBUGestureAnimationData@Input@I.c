/*
 * XREFs of ?UpdateData@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180081D70
 * Callers:
 *     ?Thunk_UpdateData_28@?$IAnimationTargetClientProxy_Receive@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180143FE0 (-Thunk_UpdateData_28@-$IAnimationTargetClientProxy_Receive@VBamoAnimationTargetClientProxyImpl@B.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoAnimationTargetClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180143FF0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoAnimationTargetClientProxyImpl@BamoImpl@@UEAAXPE.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006ACC4 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006F82C (--0-$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE_ea_18006F82C.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnDataChanged@BamoAnimationTargetClientProxy@@AEAAXXZ @ 0x180143DE8 (-LogOnDataChanged@BamoAnimationTargetClientProxy@@AEAAXXZ.c)
 *     ?LogOnDataChanging@BamoAnimationTargetClientProxy@@AEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180143E38 (-LogOnDataChanging@BamoAnimationTargetClientProxy@@AEAAXAEBUGestureAnimationData@Input@Internal@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoAnimationTargetClientProxyImpl::UpdateData(
        BamoImpl::BamoAnimationTargetClientProxyImpl *this,
        const struct Windows::UI::Internal::Input::GestureAnimationData *a2,
        const struct Windows::UI::Internal::Input::GestureAnimationData *a3)
{
  char v4; // bp
  BamoAnimationTargetClientProxy *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char)a2;
  v6 = (BamoImpl::BamoAnimationTargetClientProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoAnimationTargetClientProxy::LogOnDataChanging(
      (BamoImpl::BamoAnimationTargetClientProxyImpl *)((char *)this - 16),
      a2);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoAnimationTargetClientProxy *, const struct Windows::UI::Internal::Input::GestureAnimationData *))(*(_QWORD *)v6 + 120LL))(
           v6,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x76AE,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoAnimationTargetClientProxy::LogOnDataChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoAnimationTargetClientProxy *))(*(_QWORD *)v6 + 128LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x76BC,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)a2, (__int64)a3);
  return 0LL;
}
