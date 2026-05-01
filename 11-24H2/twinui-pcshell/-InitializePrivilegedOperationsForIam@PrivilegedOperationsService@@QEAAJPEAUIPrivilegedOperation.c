/*
 * XREFs of ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x1800A38AC
 * Callers:
 *     ?InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x1800A3858 (-InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800A39F8 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VC.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1800A3BC8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180679D28 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall PrivilegedOperationsService::InitializePrivilegedOperationsForIam(
        PrivilegedOperationsService *this,
        struct IPrivilegedOperationsConsumer *a2)
{
  struct PrivilegedOperationsService *v2; // r14
  __int64 *v4; // rdi
  CCriticalFailureHandler *v5; // rcx
  int v6; // ebx
  unsigned __int64 *v8; // [rsp+20h] [rbp-59h]
  unsigned __int64 *v9; // [rsp+28h] [rbp-51h]
  int v10[4]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v11[7]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = PrivilegedOperationsService::s_this;
  v4 = (__int64 *)v11;
  v11[0] = GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8;
  v11[1] = GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v11[2] = GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v11[3] = GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90;
  v11[4] = GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v11[5] = GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v11[6] = GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b;
  while ( 1 )
  {
    if ( v4 == &v12 )
      return 0LL;
    v6 = PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
           (char *)v2 + 168,
           a2,
           v4);
    v10[0] = v6;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v5, v10);
      v6 = v10[0];
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( v6 < 0 )
    {
      if ( v6 != -2147024882 && v6 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v5,
          v10,
          L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
          0x362u,
          v8,
          v9);
        v6 = v10[0];
      }
      if ( v6 < 0 )
        break;
    }
    v4 += 2;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x362,
    (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
