/*
 * XREFs of ?HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18006892C
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800277F0 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerTriggerInswapTurn(struct _HOST_ACTIVITY_MANAGER *a1, int a2)
{
  _DWORD *v2; // rcx

  if ( *((struct _HOST_ACTIVITY_MANAGER **)a1 + 131) != (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 1048)
    && (a2 || !*((_DWORD *)a1 + 266)) )
  {
    v2 = (_DWORD *)((char *)a1 + 1068);
    ++*v2;
    RtlWakeAddressAll(v2);
  }
}
