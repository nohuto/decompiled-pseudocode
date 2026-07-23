/*
 * XREFs of MiPrefetchNormally @ 0x140449308
 * Callers:
 *     MiPrefetchPagesViable @ 0x140449280 (MiPrefetchPagesViable.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPrefetchNormally(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r8

  v3 = a3;
  if ( a1[2344] < (signed __int64)(a2 + 159)
    || ((a1[2451] - a1[2408]) & (unsigned __int64)-(__int64)(a1[2408] < a1[2451])) < a2 + 4223 )
  {
    return 0LL;
  }
  v5 = a1 + 408;
  v6 = a1[376] + a1[360];
  while ( v5 < &a1[11 * v3 + 408] )
  {
    v6 += *v5;
    v5 += 11;
  }
  return v6 >= a2;
}
