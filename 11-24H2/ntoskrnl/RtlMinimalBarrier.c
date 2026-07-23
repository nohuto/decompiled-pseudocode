/*
 * XREFs of RtlMinimalBarrier @ 0x140BDCBE4
 * Callers:
 *     sub_140BDBDF0 @ 0x140BDBDF0 (sub_140BDBDF0.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlMinimalBarrier(volatile signed __int32 *a1, int a2)
{
  signed __int32 v2; // eax
  unsigned int v3; // r8d
  int v4; // r8d

  v2 = _InterlockedDecrement(a1);
  v3 = ~v2 & 0x80000000;
  if ( (v2 & 0x7FFFFFFF) != 0 )
  {
    while ( (*a1 & 0x80000000) != v3 )
      _mm_pause();
    if ( (a2 & 0x10000) != 0 )
      _InterlockedIncrement(a1 + 1);
    return 0;
  }
  else
  {
    v4 = *((_DWORD *)a1 + 1) | v3;
    if ( (a2 & 0x10000) != 0 )
      *((_DWORD *)a1 + 1) = 1;
    _InterlockedExchange(a1, v4);
    return 1;
  }
}
