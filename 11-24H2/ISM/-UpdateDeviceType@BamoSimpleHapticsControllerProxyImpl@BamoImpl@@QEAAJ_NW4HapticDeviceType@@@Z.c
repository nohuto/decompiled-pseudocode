/*
 * XREFs of ?UpdateDeviceType@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NW4HapticDeviceType@@@Z @ 0x180128110
 * Callers:
 *     ?Thunk_UpdateDeviceType_16@?$ISimpleHapticsControllerProxy_Receive@VBamoSimpleHapticsControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801266B0 (-Thunk_UpdateDeviceType_16@-$ISimpleHapticsControllerProxy_Receive@VBamoSimpleHapticsControllerP.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012C780 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAX.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18006AA6C (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006AB14 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnDeviceTypeChanged@BamoSimpleHapticsControllerProxy@@AEAAXXZ @ 0x180117AE0 (-LogOnDeviceTypeChanged@BamoSimpleHapticsControllerProxy@@AEAAXXZ.c)
 *     ?LogOnDeviceTypeChanging@BamoSimpleHapticsControllerProxy@@AEAAXW4HapticDeviceType@@@Z @ 0x180117B94 (-LogOnDeviceTypeChanging@BamoSimpleHapticsControllerProxy@@AEAAXW4HapticDeviceType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateDeviceType(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  char v4; // bp
  BamoSimpleHapticsControllerProxy *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = (BamoSimpleHapticsControllerProxy *)(a1 - 16);
  if ( *(_BYTE *)(a1 + 28) )
  {
    BamoSimpleHapticsControllerProxy::LogOnDeviceTypeChanging();
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))a1,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoSimpleHapticsControllerProxy *, _QWORD))(*(_QWORD *)v6 + 104LL))(v6, v3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8E77,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *(_DWORD *)(a1 + 32) = v3;
  if ( *(_BYTE *)(a1 + 28) )
  {
    BamoSimpleHapticsControllerProxy::LogOnDeviceTypeChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))a1,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoSimpleHapticsControllerProxy *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8E85,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference((Microsoft::BamoImpl::BamoProxyImpl *)a1, a2, a3);
  return 0LL;
}
