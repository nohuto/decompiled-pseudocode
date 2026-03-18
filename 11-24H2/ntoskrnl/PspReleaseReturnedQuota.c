/*
 * XREFs of PspReleaseReturnedQuota @ 0x1405E52A0
 * Callers:
 *     PspExpandQuota @ 0x14024B688 (PspExpandQuota.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspReleaseReturnedQuota(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r8
  __int64 v4; // r9

  v2 = 0LL;
  v3 = *(_QWORD **)(a2 + 40);
  if ( v3 != (_QWORD *)(a2 + 40) )
  {
    v4 = (4LL - (int)a1) << 7;
    do
    {
      v2 += _InterlockedExchange64(v3 - 1, 0LL);
      if ( !*(_DWORD *)((char *)v3 + v4 - 80) )
        v2 += _InterlockedExchange64(v3 - 2, 0LL);
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != (_QWORD *)(a2 + 40) );
    if ( v2 )
      guard_dispatch_icall_no_overrides(a1, v2, v3, v4);
  }
  return v2;
}
