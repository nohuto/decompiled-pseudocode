/*
 * XREFs of ?HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800688D0
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18008515C (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIsQuiesceInterrupted(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return (*((_QWORD *)a1 + 83) >> 51) & 1LL;
}
