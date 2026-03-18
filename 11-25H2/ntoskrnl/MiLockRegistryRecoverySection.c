/*
 * XREFs of MiLockRegistryRecoverySection @ 0x1407D7EF0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiSnapDriverRange @ 0x140A39B68 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiLockRegistryRecoverySection(__int64 a1)
{
  int v2; // ebx
  volatile signed __int64 *v4; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v2 = 0;
  do
  {
    v2 = MiSnapDriverRange(a1, v2, 128, 0, (__int64)&v4, (__int64)&v5);
    if ( v4 )
      MiLockCode(a1, v4, v5, 2);
  }
  while ( v2 );
  return 0LL;
}
