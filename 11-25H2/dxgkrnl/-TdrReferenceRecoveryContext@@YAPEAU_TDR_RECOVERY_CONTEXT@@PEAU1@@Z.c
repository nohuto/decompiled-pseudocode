/*
 * XREFs of ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x14018A2C4
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401CB1C0 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401CB2A0 (-TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1403F4DD0 (-TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ.c)
 * Callees:
 *     <none>
 */

struct _TDR_RECOVERY_CONTEXT *__fastcall TdrReferenceRecoveryContext(struct _TDR_RECOVERY_CONTEXT *a1)
{
  if ( a1 && _InterlockedAdd((volatile signed __int32 *)a1 + 724, 1u) <= 0 )
    return 0LL;
  return a1;
}
