/*
 * XREFs of ?UpdateSourceType@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18007C548
 * Callers:
 *     ?Thunk_UpdateSourceType_47@?$IDragManagerClientProxy_Receive@VBamoDragManagerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180098B00 (-Thunk_UpdateSourceType_47@-$IDragManagerClientProxy_Receive@VBamoDragManagerClientProxyImpl@Bam.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180145AE0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBa.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AA6C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006AB14 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnSourceTypeChanged@BamoDragManagerClientProxy@@AEAAXXZ @ 0x180145358 (-LogOnSourceTypeChanged@BamoDragManagerClientProxy@@AEAAXXZ.c)
 *     ?LogOnSourceTypeChanging@BamoDragManagerClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x1801453A8 (-LogOnSourceTypeChanging@BamoDragManagerClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::UpdateSourceType(
        BamoImpl::BamoDragManagerClientProxyImpl *this,
        __int64 a2,
        const struct _GUID *a3)
{
  char v4; // bp
  BamoDragManagerClientProxy *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  v6 = (BamoImpl::BamoDragManagerClientProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoDragManagerClientProxy::LogOnSourceTypeChanging(
      (BamoImpl::BamoDragManagerClientProxyImpl *)((char *)this - 16),
      a3);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoDragManagerClientProxy *, const struct _GUID *))(*(_QWORD *)v6 + 104LL))(v6, a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC5C1,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *((struct _GUID *)this + 2) = *a3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoDragManagerClientProxy::LogOnSourceTypeChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoDragManagerClientProxy *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC5CF,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
