/*
 * XREFs of CempListRemoveHeadAndClear @ 0x1800637CC
 * Callers:
 *     RmpWnfCleanupPendingCallbackList @ 0x1800664B4 (RmpWnfCleanupPendingCallbackList.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18008C24C (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CempListRemoveHeadAndClear(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx

  result = *a1;
  if ( *a1 == a1 || (_QWORD **)result[1] != a1 || (v2 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
    __fastfail(3u);
  *a1 = v2;
  v2[1] = a1;
  *(_OWORD *)result = 0LL;
  return result;
}
