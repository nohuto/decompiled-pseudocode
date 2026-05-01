/*
 * XREFs of ?HampActNotifyResourcesAcquired@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18005D71C
 * Callers:
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18005D3E0 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027770 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800286D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002A880 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampActNotifyResourcesAcquired(__int64 a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v2; // rcx
  unsigned int v3; // eax
  unsigned int v4; // ebx

  if ( *(_BYTE *)(a1 + 562) == 2 )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 8LL);
    v2 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 1;
    HampHostUpdateActivityState(v2);
    v3 = HampActTryStart(a1);
    v4 = v3;
    if ( v3 && v3 - 9 <= 6 )
      HampHostCheckQueueStateWorker(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80), 0);
  }
  else
  {
    return 4;
  }
  return v4;
}
