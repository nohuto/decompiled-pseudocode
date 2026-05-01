/*
 * XREFs of ?StartInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A96F4
 * Callers:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800473FC (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801AEA80 (-IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801CFF1C (-IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800BAC80 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

__int64 *__fastcall SnapInteraction::InteractionRecord::StartInteraction(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = std::chrono::steady_clock::now(&v5);
  v4 = *result;
  if ( !*(_BYTE *)(a1 + 24) )
    *(_BYTE *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 16) = v4;
  return result;
}
