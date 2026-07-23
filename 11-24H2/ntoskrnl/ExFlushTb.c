/*
 * XREFs of ExFlushTb @ 0x1402A1EA4
 * Callers:
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiManageUltraSpacePageTable @ 0x140352F3C (MiManageUltraSpacePageTable.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1405B9E70 (KeFlushEntireTb.c)
 *     KeFlushSingleCurrentTb @ 0x1405B9F1C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405BA104 (KeFlushSingleTb.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KTHREAD *__fastcall ExFlushTb(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx

  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( a3 != 1 )
  {
    v8 = ExpSvmIommuSystemContext;
    return (struct _KTHREAD *)guard_dispatch_icall_no_overrides(v8, a1);
  }
  v6 = Process[3].ActiveGroupPadding[1];
  v7 = Process[4].Padding[1];
  if ( v6 )
    result = (struct _KTHREAD *)guard_dispatch_icall_no_overrides(v6, a1);
  if ( v7 )
  {
    v8 = v7;
    return (struct _KTHREAD *)guard_dispatch_icall_no_overrides(v8, a1);
  }
  return result;
}
