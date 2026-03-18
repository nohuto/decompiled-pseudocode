/*
 * XREFs of ExFlushTb @ 0x1403FA11C
 * Callers:
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiManageUltraSpacePageTable @ 0x140450E6C (MiManageUltraSpacePageTable.c)
 *     KeFlushEntireTb @ 0x1405B89A0 (KeFlushEntireTb.c)
 *     KeFlushSingleCurrentTb @ 0x1405B8A4C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405B8C34 (KeFlushSingleTb.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KTHREAD *__fastcall ExFlushTb(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx

  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( a3 != 1 )
  {
    v6 = ExpSvmIommuSystemContext;
    return (struct _KTHREAD *)guard_dispatch_icall_no_overrides(v6, a1);
  }
  v7 = Process[3].ActiveGroupPadding[1];
  v8 = Process[4].Padding[1];
  if ( v7 )
    result = (struct _KTHREAD *)guard_dispatch_icall_no_overrides(v7, a1);
  if ( v8 )
  {
    v6 = v8;
    return (struct _KTHREAD *)guard_dispatch_icall_no_overrides(v6, a1);
  }
  return result;
}
