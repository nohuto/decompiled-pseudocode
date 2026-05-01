/*
 * XREFs of ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C444
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B2C4 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003CC04 (-HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18005A12C (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18005A1A8 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostShouldSendPsmQuiesceNotifications@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180067650 (-HampHostShouldSendPsmQuiesceNotifications@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180067A30 (-HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostComputeWaitType(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // r8
  unsigned int v2; // edi
  struct _RM_HAM_ACTIVITY_HOST *v3; // r8
  __int64 v5; // rbx
  int v6; // edi

  v2 = 0;
  if ( HampHostShouldSendDesktopWindowClose(a1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v1 + 792) + 88LL);
    HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v5);
    v6 = *(_DWORD *)(v5 + 340);
    HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v5);
    return (v6 & 2 | 4u) >> 1;
  }
  else if ( HampHostShouldSendPsmQuiesceAndQueryRestart((struct _RM_HAM_ACTIVITY_HOST *)v1) )
  {
    return 4;
  }
  else
  {
    LOBYTE(v2) = HampHostShouldSendPsmQuiesceNotifications(v3) != 0;
  }
  return v2;
}
