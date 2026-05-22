/*
 * XREFs of ?UpdateSuppressionRegions@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@I@Z @ 0x180143950
 * Callers:
 *     ?Thunk_UpdateSuppressionRegions_150@?$IDragManagerClientProxy_Receive@VBamoDragManagerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801438F0 (-Thunk_UpdateSuppressionRegions_150@-$IDragManagerClientProxy_Receive@VBamoDragManagerClientProx.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180143910 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBa.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AC1C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006ACC4 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$CopyArray@UtagRECT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagRECT@@IPEAPEAU3@@Z @ 0x180141E60 (--$CopyArray@UtagRECT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagRECT@@IPEAPEAU3@@Z.c)
 *     ?LogOnSuppressionRegionsChanged@BamoDragManagerClientProxy@@AEAAXXZ @ 0x18014323C (-LogOnSuppressionRegionsChanged@BamoDragManagerClientProxy@@AEAAXXZ.c)
 *     ?LogOnSuppressionRegionsChanging@BamoDragManagerClientProxy@@AEAAXI@Z @ 0x18014328C (-LogOnSuppressionRegionsChanging@BamoDragManagerClientProxy@@AEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::UpdateSuppressionRegions(
        BamoImpl::BamoDragManagerClientProxyImpl *this,
        char a2,
        struct tagRECT *a3,
        const char *a4)
{
  unsigned int v4; // esi
  BamoDragManagerClientProxy *v8; // r14
  int v9; // eax
  int v10; // eax
  const struct std::nothrow_t *v11; // rdx
  __int64 v12; // r8
  int v13; // edi
  void *v14; // rcx
  int v15; // eax
  int v17[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v4 = (unsigned int)a4;
  v8 = (BamoImpl::BamoDragManagerClientProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoDragManagerClientProxy::LogOnSuppressionRegionsChanging((BamoImpl::BamoDragManagerClientProxyImpl *)((char *)this - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v17,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v9 = (*(__int64 (__fastcall **)(BamoDragManagerClientProxy *, struct tagRECT *, _QWORD))(*(_QWORD *)v8 + 120LL))(
           v8,
           a3,
           v4);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBC09,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v17);
  }
  v19 = 0LL;
  v10 = Microsoft::BamoImpl::Util::CopyArray<tagRECT>(a3, v4, &v19, a4);
  v13 = v10;
  if ( v10 >= 0 )
  {
    v14 = (void *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v19;
    if ( v14 )
      operator delete(v14, v11);
    *((_DWORD *)this + 14) = v4;
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD55,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v10);
  }
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBC0C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v13,
      v17[0]);
  if ( *((_BYTE *)this + 28) )
  {
    BamoDragManagerClientProxy::LogOnSuppressionRegionsChanged(v8);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v17,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v15 = (*(__int64 (__fastcall **)(BamoDragManagerClientProxy *))(*(_QWORD *)v8 + 128LL))(v8);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBC17,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v17);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)v11, v12);
  return 0LL;
}
