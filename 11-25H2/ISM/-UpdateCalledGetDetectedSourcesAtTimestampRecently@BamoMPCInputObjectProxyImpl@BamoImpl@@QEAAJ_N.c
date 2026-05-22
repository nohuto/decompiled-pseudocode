/*
 * XREFs of ?UpdateCalledGetDetectedSourcesAtTimestampRecently@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x1801256C0
 * Callers:
 *     ?Thunk_UpdateCalledGetDetectedSourcesAtTimestampRecently_11@?$IMPCInputObjectProxy_Receive@VBamoMPCInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801247F0 (-Thunk_UpdateCalledGetDetectedSourcesAtTimestampRecently_11@-$IMPCInputObjectProxy_Receive@VBamo.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012A5F0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoP.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AC1C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006ACC4 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnCalledGetDetectedSourcesAtTimestampRecentlyChanged@BamoMPCInputObjectProxy@@AEAAXXZ @ 0x18011580C (-LogOnCalledGetDetectedSourcesAtTimestampRecentlyChanged@BamoMPCInputObjectProxy@@AEAAXXZ.c)
 *     ?LogOnCalledGetDetectedSourcesAtTimestampRecentlyChanging@BamoMPCInputObjectProxy@@AEAAX_N@Z @ 0x18011585C (-LogOnCalledGetDetectedSourcesAtTimestampRecentlyChanging@BamoMPCInputObjectProxy@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::UpdateCalledGetDetectedSourcesAtTimestampRecently(
        BamoImpl::BamoMPCInputObjectProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // si
  char v4; // bp
  BamoMPCInputObjectProxy *v6; // rdi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = (BamoImpl::BamoMPCInputObjectProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoMPCInputObjectProxy::LogOnCalledGetDetectedSourcesAtTimestampRecentlyChanging((BamoImpl::BamoMPCInputObjectProxyImpl *)((char *)this - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    LOBYTE(v7) = v3;
    v8 = (*(__int64 (__fastcall **)(BamoMPCInputObjectProxy *, __int64))(*(_QWORD *)v6 + 120LL))(v6, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x433C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v11);
  }
  *((_BYTE *)this + 36) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoMPCInputObjectProxy::LogOnCalledGetDetectedSourcesAtTimestampRecentlyChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v9 = (*(__int64 (__fastcall **)(BamoMPCInputObjectProxy *))(*(_QWORD *)v6 + 128LL))(v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x434A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v11);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
