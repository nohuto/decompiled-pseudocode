/*
 * XREFs of ?EngDeletePaletteInternal@@YAHPEAVEPALOBJ@@@Z @ 0x14011EF10
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x140036AB0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall EngDeletePaletteInternal(struct _BASEOBJECT **a1)
{
  struct _BASEOBJECT *v1; // r8
  __int64 result; // rax
  int v3; // edx

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    v3 = *((_DWORD *)v1 + 6);
    if ( (v3 & 0x100) == 0 )
    {
      *((_DWORD *)v1 + 6) = v3 | 0x4000000;
      XEPALOBJ::vUnrefPalette(a1);
      return 1LL;
    }
  }
  return result;
}
