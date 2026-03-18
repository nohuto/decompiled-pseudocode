/*
 * XREFs of KeEnumerateQueueApc @ 0x1405BCEE0
 * Callers:
 *     DbgkpLkmdSnapThread @ 0x14057E9C4 (DbgkpLkmdSnapThread.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x1402067B0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeEnumerateQueueApc(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  char v4; // bl
  char v7; // bp
  __int64 v8; // r9
  _QWORD **v9; // r14
  _QWORD *i; // rsi
  unsigned __int8 v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v12 = 0;
  if ( a4 )
  {
    v4 = *a4;
    v7 = *a4;
  }
  else
  {
    v7 = 1;
  }
  KiAcquireThreadLockRaiseToDpc(a1, &v12);
  do
  {
    v9 = (_QWORD **)(a1 + 16LL * v4 + 152);
    for ( i = *v9; i != v9; i = (_QWORD *)*i )
      guard_dispatch_icall_no_overrides(i - 2, 88LL, a3, v8);
    ++v4;
  }
  while ( v4 <= v7 );
  return KiReleaseThreadLockLowerIrql(a1, v12);
}
