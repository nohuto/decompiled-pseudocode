/*
 * XREFs of ?HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x180081FE0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043D7C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E08 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x18009004C (-HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACT.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampActPdcActivationCallback(void *a1, int a2, __int64 a3, __int64 a4)
{
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  int v8; // edi
  int v9; // [rsp+20h] [rbp-89h] BYREF
  _BYTE v10[40]; // [rsp+28h] [rbp-81h] BYREF
  _BYTE v11[144]; // [rsp+50h] [rbp-59h] BYREF

  v9 = 0;
  memset(v10, 0, sizeof(v10));
  memset_0(v11, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  HampHostAcquireLockSharedEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a4 + 80), 0);
  v7 = *(struct _RM_HAM_ACTIVITY_HOST **)(a4 + 80);
  if ( *(void **)(a4 + 504) == a1 )
  {
    v8 = *(_DWORD *)(a4 + 384);
    HampHostReleaseLockSharedEx(v7);
    if ( a2 == 100 )
    {
      *(_QWORD *)&v10[8] = 0LL;
      *(_QWORD *)&v10[16] = a4 + 124;
      *(_DWORD *)v10 = 1;
      *(_DWORD *)&v10[4] = v8;
      *(_OWORD *)&v10[24] = 0LL;
      HampSystemActivationClientRenewActivation(
        a1,
        (const struct _PDC_ACTIVATION_PARAMETERS *)v10,
        (enum _PDC_ACTIVATOR_ERROR_DETAIL *)&v9);
    }
  }
  else
  {
    HampHostReleaseLockSharedEx(v7);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
