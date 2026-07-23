/*
 * XREFs of PspReleaseReturnedQuota @ 0x1405E27C8
 * Callers:
 *     PspExpandQuota @ 0x14027BC98 (PspExpandQuota.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
      guard_dispatch_icall_no_overrides(a1, v2);
  }
  return v2;
}
