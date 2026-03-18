/*
 * XREFs of PopFxNextParentRelationSafe @ 0x140375C20
 * Callers:
 *     PopFxNotifyPostDIrpCompletion @ 0x140375B78 (PopFxNotifyPostDIrpCompletion.c)
 *     PopFxNotifyPreDIrpIssue @ 0x1403765BC (PopFxNotifyPreDIrpIssue.c)
 *     PoFxRemoveComponentRelation @ 0x1405D0490 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405D06F0 (PoFxRemoveDeviceRelation.c)
 *     PopFxComponentRelationsCleanup @ 0x1405D0A1C (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x1405D0EBC (PopFxDeviceRelationsCleanup.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall PopFxNextParentRelationSafe(_QWORD **a1, __int64 a2, _QWORD *a3)
{
  _QWORD **v6; // rdi
  _QWORD *v7; // rsi
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  _QWORD *v11; // rax

  if ( a2 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(a2 + 8));
    v6 = (_QWORD **)(a2 + 56);
  }
  else
  {
    v6 = a1;
  }
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == a1 )
      return 0;
    v9 = v7 - 7;
    KxAcquireSpinLock(v7 - 6);
    if ( (*(_DWORD *)(v7 - 5) & 4) != 0 )
      break;
    KxReleaseSpinLock(v9 + 1);
    *((_DWORD *)v9 + 4) &= ~8u;
    v9[6] = 0LL;
    v10 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v11 = (_QWORD *)v7[1], (_QWORD *)*v11 != v7) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    ExFreePoolWithTag(v7 - 7, 0x4D584650u);
  }
  *a3 = v9;
  return 1;
}
