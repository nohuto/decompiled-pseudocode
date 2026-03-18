/*
 * XREFs of KeSpecialUserApcKernelRoutine @ 0x140A91590
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x140429EA0 (KeInitializeApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeSpecialUserApcKernelRoutine(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v10; // r10
  char v11; // bl
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 81) )
    return guard_dispatch_icall_no_overrides(a1);
  CurrentThread = KeGetCurrentThread();
  v10 = *a2;
  v11 = *(_BYTE *)(a1 + 1);
  *a2 = 0LL;
  KeInitializeApc(a1, (__int64)CurrentThread, 0, (__int64)KeSpecialUserApcKernelRoutine, v6, v10, 1u, *a3);
  if ( (v11 & 1) != 0 )
    *(_BYTE *)(a1 + 1) |= 1u;
  result = KeInsertQueueApc(a1, *a4, *a5, 0);
  if ( !(_BYTE)result )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
