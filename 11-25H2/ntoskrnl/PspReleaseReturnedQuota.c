/*
 * XREFs of PspReleaseReturnedQuota @ 0x1405D9304
 * Callers:
 *     PspExpandQuota @ 0x1403C6748 (PspExpandQuota.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspReleaseReturnedQuota(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r8

  v2 = 0LL;
  v3 = *(_QWORD **)(a2 + 40);
  if ( v3 != (_QWORD *)(a2 + 40) )
  {
    do
    {
      v2 += _InterlockedExchange64(v3 - 1, 0LL);
      if ( !LODWORD(v3[16 * (4LL - (int)a1) - 10]) )
        v2 += _InterlockedExchange64(v3 - 2, 0LL);
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != (_QWORD *)(a2 + 40) );
    if ( v2 )
      guard_dispatch_icall_no_overrides(a1);
  }
  return v2;
}
