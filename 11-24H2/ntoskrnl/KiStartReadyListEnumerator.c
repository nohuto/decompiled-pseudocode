/*
 * XREFs of KiStartReadyListEnumerator @ 0x1404585A4
 * Callers:
 *     KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x14030E650 (KiRemoveCurrentThreadScbReadyQueueEnumerator.c)
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
