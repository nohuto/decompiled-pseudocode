/*
 * XREFs of MiLockMemoryListsCallback @ 0x1404AEA90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
