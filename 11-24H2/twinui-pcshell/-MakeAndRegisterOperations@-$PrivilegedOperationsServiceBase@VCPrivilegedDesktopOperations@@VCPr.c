/*
 * XREFs of ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x180110600
 * Callers:
 *     ??$MakeAndInitialize@VPrivilegedOperationsService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801100C8 (--$MakeAndInitialize@VPrivilegedOperationsService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180043C40 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18011070C (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@.c)
 *     ??$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedDesktopOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x180110FC8 (--$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperation.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801FBE00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDeskt.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
        __int64 *a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 *v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  int v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  GUID v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v11 = a2;
  v4 = PrivilegedOperationsServiceBase<CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(a1);
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
  v7 = a1 + 10;
  v8 = a1[10];
  v12 = *a1;
  if ( v8 )
  {
    *v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::Release();
  }
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedDesktopOperations,CPrivilegedDesktopOperations,IamAccess *,PrivilegedOperationsService * &>(
         a1 + 10,
         &v12,
         v11);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v14 = *v7;
    v13 = GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8;
    v15 = 0LL;
    v4 = CImmersiveShellComponent::RegisterServiceInformation(
           (CImmersiveShellComponent *)(a2 + 48),
           (__int64)&v13,
           1uLL);
    if ( v4 < 0 )
    {
      v5 = 648LL;
      goto LABEL_3;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x285,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
