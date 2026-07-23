/*
 * XREFs of HvlQueryProcessorTopologyEx @ 0x140580BA0
 * Callers:
 *     HvlQueryProcessorTopology @ 0x140580B40 (HvlQueryProcessorTopology.c)
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x140440CF0 (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall HvlQueryProcessorTopologyEx(unsigned int a1, _WORD *a2, _DWORD *a3, __int64 a4, int *a5)
{
  __int128 *LpcbByLpIndex; // rax
  _DWORD *v9; // r11
  __int128 *v10; // r10
  int v11; // ecx
  int v12; // eax

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( a1 >= HvlpLogicalProcessorRegionsCount )
    return 3221225485LL;
  LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
  v10 = LpcbByLpIndex;
  if ( !LpcbByLpIndex )
    return 3221225485LL;
  if ( a2 )
    *a2 = *((_WORD *)LpcbByLpIndex + 48);
  if ( a3 )
    *a3 = *((_DWORD *)LpcbByLpIndex + 3);
  if ( v9 )
    *v9 = *((_DWORD *)LpcbByLpIndex + 4);
  if ( a5 )
  {
    v11 = *((_DWORD *)LpcbByLpIndex + 5);
    v12 = -1;
    if ( v11 != -1 )
      v12 = *((_DWORD *)v10 + 5);
    *a5 = v12;
  }
  return 0LL;
}
