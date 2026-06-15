/*
 * XREFs of ?GetFreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAAXXZ @ 0x14000EF9C
 * Callers:
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000D230 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140026274 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetFreeNode(__int64 a1)
{
  struct ATL::CAtlPlex *v2; // rax
  int v3; // r8d
  _QWORD *i; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v2 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v2 )
      ATL::AtlThrowImpl(-2147024882);
    v3 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = (_QWORD *)((char *)v2 + 16 * v3 + 8 * (unsigned int)v3 + 8); v3 >= 0; --v3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
}
