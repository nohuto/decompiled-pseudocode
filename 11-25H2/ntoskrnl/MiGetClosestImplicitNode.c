/*
 * XREFs of MiGetClosestImplicitNode @ 0x1403EC42C
 * Callers:
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407D8A84 (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x1407D97EC (MiMapNewPfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetClosestImplicitNode(unsigned int a1)
{
  _DWORD *v2; // r9

  if ( a1 )
  {
    v2 = (_DWORD *)(qword_140E2D890 + 4LL * (unsigned __int16)KeNumberNodes * (a1 - 1));
    if ( v2 < &v2[(unsigned __int16)KeNumberNodes] )
      return (unsigned int)(*v2 + 1);
  }
  return a1;
}
