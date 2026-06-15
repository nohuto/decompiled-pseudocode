/*
 * XREFs of _lambda_4accf571eb38f7e0aa8a7d61bf2f02b1_::_lambda_4accf571eb38f7e0aa8a7d61bf2f02b1_ @ 0x18014F6B0
 * Callers:
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1801521A4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x1801522E4 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall lambda_4accf571eb38f7e0aa8a7d61bf2f02b1_::_lambda_4accf571eb38f7e0aa8a7d61bf2f02b1_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v5; // rcx

  v5 = *a2;
  *a1 = *a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  a1[1] = a3;
  return a1;
}
