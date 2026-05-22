/*
 * XREFs of ?UpdateIsInputDisabled@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18013207C
 * Callers:
 *     ?Thunk_UpdateIsInputDisabled_11@?$ICUIHostInputObjectProxy_Receive@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180131E60 (-Thunk_UpdateIsInputDisabled_11@-$ICUIHostInputObjectProxy_Receive@VBamoCUIHostInputObjectProxyI.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoCUIHostInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801321A0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoCUIHostInputObjectProxyImpl@BamoImpl@@UEAAXPEAVB.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AA6C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006AB14 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnIsInputDisabledChanged@BamoCUIHostInputObjectProxy@@AEAAXXZ @ 0x180131690 (-LogOnIsInputDisabledChanged@BamoCUIHostInputObjectProxy@@AEAAXXZ.c)
 *     ?LogOnIsInputDisabledChanging@BamoCUIHostInputObjectProxy@@AEAAX_N@Z @ 0x1801316E0 (-LogOnIsInputDisabledChanging@BamoCUIHostInputObjectProxy@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateIsInputDisabled(
        BamoImpl::BamoCUIHostInputObjectProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // si
  char v4; // bp
  BamoCUIHostInputObjectProxy *v6; // rdi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = (BamoImpl::BamoCUIHostInputObjectProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoCUIHostInputObjectProxy::LogOnIsInputDisabledChanging((BamoImpl::BamoCUIHostInputObjectProxyImpl *)((char *)this - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    LOBYTE(v7) = v3;
    v8 = (*(__int64 (__fastcall **)(BamoCUIHostInputObjectProxy *, __int64))(*(_QWORD *)v6 + 120LL))(v6, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8DEC,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v11);
  }
  *((_BYTE *)this + 40) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoCUIHostInputObjectProxy::LogOnIsInputDisabledChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v9 = (*(__int64 (__fastcall **)(BamoCUIHostInputObjectProxy *))(*(_QWORD *)v6 + 128LL))(v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8DFA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v11);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
