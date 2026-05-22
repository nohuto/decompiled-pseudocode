/*
 * XREFs of ?UpdateOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NM@Z @ 0x180128DCC
 * Callers:
 *     ?Thunk_UpdateOrientationBiasInDegrees_190@?$IEdgyGestureRecognitionConfigurationProxy_Receive@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180124C90 (-Thunk_UpdateOrientationBiasInDegrees_190@-$IEdgyGestureRecognitionConfigurationProxy_Receive@VB.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012A2D0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyGestureRecognitionConfigurationProxyImpl@Bam.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AC1C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006ACC4 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnOrientationBiasInDegreesChanged@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXXZ @ 0x180117644 (-LogOnOrientationBiasInDegreesChanged@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXXZ.c)
 *     ?LogOnOrientationBiasInDegreesChanging@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXM@Z @ 0x180117694 (-LogOnOrientationBiasInDegreesChanging@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateOrientationBiasInDegrees(
        BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl *this,
        __int64 a2,
        float a3)
{
  __int64 v3; // r8
  char v4; // si
  BamoEdgyGestureRecognitionConfigurationProxy *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v10[8]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a2;
  v6 = (BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoEdgyGestureRecognitionConfigurationProxy::LogOnOrientationBiasInDegreesChanging(
      (BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl *)((char *)this - 16),
      a3);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoEdgyGestureRecognitionConfigurationProxy *))(*(_QWORD *)v6 + 120LL))(v6);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD6C1,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *((float *)this + 10) = a3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoEdgyGestureRecognitionConfigurationProxy::LogOnOrientationBiasInDegreesChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoEdgyGestureRecognitionConfigurationProxy *))(*(_QWORD *)v6 + 128LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD6CF,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, v3);
  return 0LL;
}
