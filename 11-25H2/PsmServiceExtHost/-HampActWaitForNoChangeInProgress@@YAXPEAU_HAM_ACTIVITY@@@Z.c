/*
 * XREFs of ?HampActWaitForNoChangeInProgress@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180082084
 * Callers:
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18000AC3C (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 * Callees:
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043DFC (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E88 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampActWaitForNoChangeInProgress(struct _RM_HAM_ACTIVITY_HOST **a1)
{
  int *v2; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v3; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  HampHostAcquireLockSharedEx(a1[10], 0);
  v2 = (int *)(a1 + 69);
  while ( 1 )
  {
    v3 = a1[10];
    if ( (*v2 & 1) == 0 )
      break;
    v4 = *v2;
    HampHostReleaseLockSharedEx(v3);
    RtlWaitOnAddress(a1 + 69, &v4, 4LL);
    HampHostAcquireLockSharedEx(a1[10], 0);
  }
  HampHostReleaseLockSharedEx(v3);
}
