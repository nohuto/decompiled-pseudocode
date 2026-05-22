/*
 * XREFs of ?UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180128FD8
 * Callers:
 *     ?Thunk_UpdateGestureRecognitionConfiguration_8@?$IEdgyNotificationSourceClientProxy_Receive@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180126800 (-Thunk_UpdateGestureRecognitionConfiguration_8@-$IEdgyNotificationSourceClientProxy_Receive@VBam.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012C3B0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D804 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AA6C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006AB14 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x1800AF0CC (--4-$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?LogOnGestureRecognitionConfigurationChanged@BamoEdgyNotificationSourceClientProxy@@AEAAXXZ @ 0x180118344 (-LogOnGestureRecognitionConfigurationChanged@BamoEdgyNotificationSourceClientProxy@@AEAAXXZ.c)
 *     ?LogOnGestureRecognitionConfigurationChanging@BamoEdgyNotificationSourceClientProxy@@AEAAXPEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180118404 (-LogOnGestureRecognitionConfigurationChanging@BamoEdgyNotificationSourceClientProxy@@AEAAXPEAVBa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateGestureRecognitionConfiguration(
        BamoImpl::BamoEdgyNotificationSourceClientProxyImpl *this,
        char a2,
        unsigned int a3)
{
  __int64 v5; // rbp
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rdi
  struct BamoEdgyGestureRecognitionConfigurationProxy *v7; // rsi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v9; // eax
  unsigned int v10; // ebx
  char *v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  int v17[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v7 = 0LL;
  if ( a3 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(
              *((Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 2),
              a3);
    v6 = Proxy;
    if ( !Proxy )
    {
      v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 24) + 32LL),
             0x87B2080C,
             0);
      v10 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE4F7,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v9);
      return v10;
    }
    v7 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
  }
  v12 = (char *)this - 16;
  if ( *((_BYTE *)this + 28) )
  {
    BamoEdgyNotificationSourceClientProxy::LogOnGestureRecognitionConfigurationChanging(
      (BamoImpl::BamoEdgyNotificationSourceClientProxyImpl *)((char *)this - 16),
      v7);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v17,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v13 = (*(__int64 (__fastcall **)(char *, struct BamoEdgyGestureRecognitionConfigurationProxy *))(*(_QWORD *)v12 + 120LL))(
            (char *)this - 16,
            v7);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE506,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v13,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v17);
  }
  wil::com_ptr_t<BamoEdgyGestureRecognitionConfigurationProxy,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 5,
    (void (__fastcall ***)(_QWORD))v7);
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, v14, v15);
  if ( *((_BYTE *)this + 28) )
  {
    BamoEdgyNotificationSourceClientProxy::LogOnGestureRecognitionConfigurationChanged((BamoImpl::BamoEdgyNotificationSourceClientProxyImpl *)((char *)this - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v17,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v16 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 128LL))((char *)this - 16);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE519,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v16,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v17);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v14, v15);
  return 0LL;
}
