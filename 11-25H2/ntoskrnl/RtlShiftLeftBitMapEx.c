/*
 * XREFs of RtlShiftLeftBitMapEx @ 0x1405DC330
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x1402A9FB0 (RtlClearBitsEx.c)
 *     RtlExtractBitMapEx @ 0x140499A50 (RtlExtractBitMapEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall RtlShiftLeftBitMapEx(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r8

  if ( a2 )
  {
    v2 = *(_QWORD *)a1;
    v3 = 0LL;
    if ( a2 < *(_QWORD *)a1 )
    {
      RtlExtractBitMapEx((_QWORD *)a1, a1, a2, v2 - a2);
      RtlClearBitsEx(a1, *(_QWORD *)a1 - a2, a2);
    }
    else
    {
      LOBYTE(v3) = (v2 & 0x1F) != 0;
      memset_0(*(void **)(a1 + 8), 0, 4 * ((v2 >> 5) + v3));
    }
  }
}
