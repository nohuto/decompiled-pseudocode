/*
 * XREFs of ?UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x180128EF0
 * Callers:
 *     ?Thunk_UpdatePanelId_72@?$IDockDeviceProxy_Receive@VBamoDockDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180124CB0 (-Thunk_UpdatePanelId_72@-$IDockDeviceProxy_Receive@VBamoDockDeviceProxyImpl@BamoImpl@@@@SAJPEAXP.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012A0E0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxy.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AC1C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006ACC4 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x180113B8C (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ?LogOnPanelIdChanged@BamoDockDeviceProxy@@AEAAXXZ @ 0x1801176F4 (-LogOnPanelIdChanged@BamoDockDeviceProxy@@AEAAXXZ.c)
 *     ?LogOnPanelIdChanging@BamoDockDeviceProxy@@AEAAXPEBG@Z @ 0x180117744 (-LogOnPanelIdChanging@BamoDockDeviceProxy@@AEAAXPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDockDeviceProxyImpl::UpdatePanelId(
        BamoImpl::BamoDockDeviceProxyImpl *this,
        char a2,
        unsigned __int16 *a3)
{
  BamoDockDeviceProxy *v6; // rsi
  int v7; // eax
  int v8; // eax
  const struct std::nothrow_t *v9; // rdx
  __int64 v10; // r8
  int v11; // edi
  void *v12; // rcx
  int v13; // eax
  int v15[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = (BamoImpl::BamoDockDeviceProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoDockDeviceProxy::LogOnPanelIdChanging((BamoImpl::BamoDockDeviceProxyImpl *)((char *)this - 16), a3);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v15,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoDockDeviceProxy *, unsigned __int16 *))(*(_QWORD *)v6 + 104LL))(v6, a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xACBD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v15[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v15);
  }
  v17 = 0LL;
  v8 = Microsoft::BamoImpl::Util::CopyString(
         (Microsoft::BamoImpl::Util *)a3,
         (unsigned __int16 *)&v17,
         (unsigned __int16 **)a3);
  v11 = v8;
  if ( v8 >= 0 )
  {
    v12 = (void *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v17;
    if ( v12 )
      operator delete(v12, v9);
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD66,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8);
  }
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xACC0,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11,
      v15[0]);
  if ( *((_BYTE *)this + 28) )
  {
    BamoDockDeviceProxy::LogOnPanelIdChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v15,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v13 = (*(__int64 (__fastcall **)(BamoDockDeviceProxy *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xACCB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v13,
        v15[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v15);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)v9, v10);
  return 0LL;
}
