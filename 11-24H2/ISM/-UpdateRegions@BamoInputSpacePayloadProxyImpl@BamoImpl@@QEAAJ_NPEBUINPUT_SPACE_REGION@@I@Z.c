/*
 * XREFs of ?UpdateRegions@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE_REGION@@I@Z @ 0x18012B760
 * Callers:
 *     ?Thunk_UpdateRegions_279@?$IInputSpacePayloadProxy_Receive@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180126B40 (-Thunk_UpdateRegions_279@-$IInputSpacePayloadProxy_Receive@VBamoInputSpacePayloadProxyImpl@BamoI.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012C440 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXPEAVBa.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AA6C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006AB14 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ??$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3@@Z @ 0x180083B34 (--$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?LogOnRegionsChanged@BamoInputSpacePayloadProxy@@AEAAXXZ @ 0x1801198D0 (-LogOnRegionsChanged@BamoInputSpacePayloadProxy@@AEAAXXZ.c)
 *     ?LogOnRegionsChanging@BamoInputSpacePayloadProxy@@AEAAXI@Z @ 0x180119920 (-LogOnRegionsChanging@BamoInputSpacePayloadProxy@@AEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateRegions(
        BamoImpl::BamoInputSpacePayloadProxyImpl *this,
        char a2,
        const struct INPUT_SPACE_REGION *a3,
        const char *a4)
{
  unsigned int v4; // esi
  BamoInputSpacePayloadProxy *v8; // r14
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
  v8 = (BamoImpl::BamoInputSpacePayloadProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoInputSpacePayloadProxy::LogOnRegionsChanging((BamoImpl::BamoInputSpacePayloadProxyImpl *)((char *)this - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v17,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v9 = (*(__int64 (__fastcall **)(BamoInputSpacePayloadProxy *, const struct INPUT_SPACE_REGION *, _QWORD))(*(_QWORD *)v8 + 120LL))(
           v8,
           a3,
           v4);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x35B4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v17);
  }
  v19 = 0LL;
  v10 = Microsoft::BamoImpl::Util::CopyArray<INPUT_SPACE_REGION>(a3, v4, &v19, a4);
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
      (void *)0x3605,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v10);
  }
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35B7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v13,
      v17[0]);
  if ( *((_BYTE *)this + 28) )
  {
    BamoInputSpacePayloadProxy::LogOnRegionsChanged(v8);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v17,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v15 = (*(__int64 (__fastcall **)(BamoInputSpacePayloadProxy *))(*(_QWORD *)v8 + 128LL))(v8);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x35C2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v17);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)v11, v12);
  return 0LL;
}
