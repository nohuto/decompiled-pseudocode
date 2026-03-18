/*
 * XREFs of MiLockMemoryListsCallback @ 0x1404B4960
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiLockMemoryListsCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  volatile LONG *v6; // rbx

  v4 = a4;
  if ( a4 )
  {
    v6 = (volatile LONG *)(a3 + 32);
    do
    {
      if ( a1 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v6);
      else
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      v6 += 22;
      --v4;
    }
    while ( v4 );
  }
  return 1LL;
}
