/*
 * XREFs of KiStartReadyListEnumerator @ 0x14044DA54
 * Callers:
 *     KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x1402D8A9C (KiRemoveCurrentThreadScbReadyQueueEnumerator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiStartReadyListEnumerator(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = a3;
  if ( a2 )
  {
    _BitScanReverse(&a2, a2);
    result = a3 + 16LL * a2;
  }
  else
  {
    LOBYTE(a2) = 32;
  }
  *(_BYTE *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
