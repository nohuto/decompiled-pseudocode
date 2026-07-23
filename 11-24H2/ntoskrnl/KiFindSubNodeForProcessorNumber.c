/*
 * XREFs of KiFindSubNodeForProcessorNumber @ 0x1405B8C38
 * Callers:
 *     KiAssignProcessorNumberToPrcb @ 0x1405B8790 (KiAssignProcessorNumberToPrcb.c)
 *     KiFreeProcessorNumber @ 0x1405B8CE8 (KiFreeProcessorNumber.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFindSubNodeForProcessorNumber(__int64 a1, unsigned __int16 *a2, __int64 *a3, _QWORD *a4)
{
  unsigned __int16 i; // r10
  __int64 v6; // r8
  __int64 v7; // rax

  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int16)KiSubNodeCount )
      return 3221226021LL;
    v6 = KiSubNodeConfigBlock + 24LL * i;
    if ( (*(_BYTE *)(v6 + 5) & 1) != 0 && *(_WORD *)(v6 + 6) == *(_WORD *)a1 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      if ( _bittest64(&v7, *(unsigned __int8 *)(a1 + 2)) )
        break;
    }
  }
  if ( a2 )
    *a2 = i;
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = *(_QWORD *)(KiSubNodes + 8LL * i);
  return 0LL;
}
