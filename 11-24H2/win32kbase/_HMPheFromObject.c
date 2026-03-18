/*
 * XREFs of _HMPheFromObject @ 0x140042A90
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     HandleInputDestDestruction @ 0x140060EC8 (HandleInputDestDestruction.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     CleanupInputDelegation @ 0x140136650 (CleanupInputDelegation.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014835C (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x140161EC0 (-ComputeDominantState@tagWND@@QEAAXXZ.c)
 *     HMRemoveHandleForObject @ 0x14016AC70 (HMRemoveHandleForObject.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z @ 0x1401A9890 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z.c)
 *     HMChangeOwnerThreadWorker @ 0x1401B6138 (HMChangeOwnerThreadWorker.c)
 *     UserDeleteBaseWindowHandle @ 0x1401BE850 (UserDeleteBaseWindowHandle.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1401F3894 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 __fastcall HMPheFromObject(int *a1)
{
  struct _ERESOURCE *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 UserSessionState; // rdi
  __int64 v7; // rcx

  v2 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1) + 42400);
  if ( !*(_DWORD *)(W32GetUserSessionState(v3) + 19816)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || ExIsResourceAcquiredExclusiveLite(v2) != 1 && !ExIsResourceAcquiredSharedLite(v2)) )
  {
    __int2c();
  }
  v5 = *a1;
  UserSessionState = W32GetUserSessionState(v4);
  return *(_DWORD *)(W32GetUserSessionState(v7) + 19952) * (unsigned int)(unsigned __int16)v5
       + *(_QWORD *)(UserSessionState + 19944);
}
