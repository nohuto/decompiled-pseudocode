/*
 * XREFs of ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1801107F8
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18011070C (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180043C40 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1801101A4 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperations@@.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedNotificationOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180205420 (-InternalRelease@-$ComPtr@VCPrivilegedNotificationOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCPrivilegedNotificationOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedNotificationOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x1802259D4 (--$MakeAndInitialize@VCPrivilegedNotificationOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOper.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
        __int64 *a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v7[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h] BYREF
  GUID v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v7 = a2;
  v4 = PrivilegedOperationsServiceBase<CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
         a1,
         a2);
  if ( v4 < 0 )
  {
    v5 = 644LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v8 = *a1;
  Microsoft::WRL::ComPtr<CPrivilegedNotificationOperations>::InternalRelease(a1 + 8);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedNotificationOperations,CPrivilegedNotificationOperations,IamAccess *,PrivilegedOperationsService * &>(
         a1 + 8,
         &v8,
         v7);
  if ( v4 < 0 )
  {
    v5 = 645LL;
    goto LABEL_3;
  }
  v10 = a1[8];
  v9 = GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v11 = 0LL;
  v4 = CImmersiveShellComponent::RegisterServiceInformation((CImmersiveShellComponent *)(a2 + 48), (__int64)&v9, 1uLL);
  if ( v4 < 0 )
  {
    v5 = 648LL;
    goto LABEL_3;
  }
  return 0LL;
}
