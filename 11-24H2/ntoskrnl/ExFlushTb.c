/*
 * XREFs of ExFlushTb @ 0x1402922A4
 * Callers:
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiManageUltraSpacePageTable @ 0x1402D1CC4 (MiManageUltraSpacePageTable.c)
 *     KeFlushTb @ 0x1403AFDF0 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1405BC840 (KeFlushEntireTb.c)
 *     KeFlushSingleCurrentTb @ 0x1405BC8EC (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405BCAD4 (KeFlushSingleTb.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KTHREAD *__fastcall ExFlushTb(unsigned int a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx

  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( a3 != 1 )
  {
    v10 = ExpSvmIommuSystemContext;
    return (struct _KTHREAD *)guard_dispatch_icall_no_overrides(v10, a1, a2, a4);
  }
  v8 = Process[3].ActiveGroupPadding[1];
  v9 = Process[4].Padding[1];
  if ( v8 )
    result = (struct _KTHREAD *)guard_dispatch_icall_no_overrides(v8, a1, a2, a4);
  if ( v9 )
  {
    v10 = v9;
    return (struct _KTHREAD *)guard_dispatch_icall_no_overrides(v10, a1, a2, a4);
  }
  return result;
}
