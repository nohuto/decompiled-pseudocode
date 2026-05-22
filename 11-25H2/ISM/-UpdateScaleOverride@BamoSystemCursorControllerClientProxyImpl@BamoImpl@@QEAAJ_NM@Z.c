/*
 * XREFs of ?UpdateScaleOverride@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_NM@Z @ 0x180129B5C
 * Callers:
 *     ?Thunk_UpdateScaleOverride_190@?$ISystemCursorControllerClientProxy_Receive@VBamoSystemCursorControllerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180124DC0 (-Thunk_UpdateScaleOverride_190@-$ISystemCursorControllerClientProxy_Receive@VBamoSystemCursorCon.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012A770 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AC1C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006ACC4 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnScaleOverrideChanged@BamoSystemCursorControllerClientProxy@@AEAAXXZ @ 0x180117D60 (-LogOnScaleOverrideChanged@BamoSystemCursorControllerClientProxy@@AEAAXXZ.c)
 *     ?LogOnScaleOverrideChanging@BamoSystemCursorControllerClientProxy@@AEAAXM@Z @ 0x180117E00 (-LogOnScaleOverrideChanging@BamoSystemCursorControllerClientProxy@@AEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSystemCursorControllerClientProxyImpl::UpdateScaleOverride(
        BamoImpl::BamoSystemCursorControllerClientProxyImpl *this,
        __int64 a2,
        float a3)
{
  __int64 v3; // r8
  char v4; // si
  BamoSystemCursorControllerClientProxy *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v10[8]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a2;
  v6 = (BamoImpl::BamoSystemCursorControllerClientProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoSystemCursorControllerClientProxy::LogOnScaleOverrideChanging(
      (BamoImpl::BamoSystemCursorControllerClientProxyImpl *)((char *)this - 16),
      a3);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoSystemCursorControllerClientProxy *))(*(_QWORD *)v6 + 104LL))(v6);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x96EC,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *((float *)this + 8) = a3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoSystemCursorControllerClientProxy::LogOnScaleOverrideChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoSystemCursorControllerClientProxy *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x96FA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, v3);
  return 0LL;
}
