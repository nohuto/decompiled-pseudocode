/*
 * XREFs of MiGetClosestImplicitNode @ 0x1403F379C
 * Callers:
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407E8944 (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x1407E96AC (MiMapNewPfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetClosestImplicitNode(unsigned int a1)
{
  _DWORD *v2; // r9

  if ( a1 )
  {
    v2 = (_DWORD *)(qword_140E2DAD0 + 4LL * (unsigned __int16)KeNumberNodes * (a1 - 1));
    if ( v2 < &v2[(unsigned __int16)KeNumberNodes] )
      return (unsigned int)(*v2 + 1);
  }
  return a1;
}
