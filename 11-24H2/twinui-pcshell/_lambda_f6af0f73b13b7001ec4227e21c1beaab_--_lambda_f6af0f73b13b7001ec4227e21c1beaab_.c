/*
 * XREFs of _lambda_f6af0f73b13b7001ec4227e21c1beaab_::_lambda_f6af0f73b13b7001ec4227e21c1beaab_ @ 0x18036BB98
 * Callers:
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801143C0 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_f6af0f73b13b7001ec4227e21c1beaab_::_lambda_f6af0f73b13b7001ec4227e21c1beaab_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rcx

  *a1 = a2;
  v4 = *a3;
  a1[1] = *a3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
