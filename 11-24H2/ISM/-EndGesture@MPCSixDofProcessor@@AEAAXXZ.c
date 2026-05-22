/*
 * XREFs of ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1801BB820
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x180068540 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801BD594 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068824 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006885C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1DFC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B2058 (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 */

void __fastcall MPCSixDofProcessor::EndGesture(MPCSixDofProcessor *this)
{
  struct MPCGestureHandlerManager *Instance; // rbx
  __int64 *v3; // rax
  MPCGestureHandlerManager *v4; // rbx
  __int64 *v5; // rax
  const char *v6; // r9
  _QWORD v7[2]; // [rsp+20h] [rbp-BE8h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-BD8h] BYREF
  int v9; // [rsp+48h] [rbp-BC0h]
  char v10; // [rsp+120h] [rbp-AE8h]
  char v11; // [rsp+2B8h] [rbp-950h]
  int v12; // [rsp+388h] [rbp-880h]
  int WorkspaceId; // [rsp+3B0h] [rbp-858h]

  memset_0(v8, 0, 0xBC0uLL);
  v9 = 3008;
  Instance = MPCGestureHandlerManager::GetInstance();
  v3 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         v7,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)Instance, v3);
  v12 = 2;
  v10 = 1;
  v11 = 1;
  v4 = MPCGestureHandlerManager::GetInstance();
  v5 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         v7,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  MPCGestureHandlerManager::DownLevelTo2D(v4, (struct LegacyInputInfo *)v8, v5, v6);
  *((_BYTE *)this + 3677) = 0;
  *(_QWORD *)((char *)this + 4284) = 0LL;
  *((_DWORD *)this + 917) = 0;
}
