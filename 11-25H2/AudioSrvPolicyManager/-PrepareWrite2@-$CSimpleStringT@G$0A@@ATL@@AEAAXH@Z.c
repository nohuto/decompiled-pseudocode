/*
 * XREFs of ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180045830
 * Callers:
 *     ?FormatV@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z @ 0x18001B598 (-FormatV@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001B714 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x18004576C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180045940 (-Reallocate@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(const void **a1, signed int a2)
{
  signed int v3; // r8d
  _DWORD *v4; // rcx
  int v5; // ecx
  int v6; // eax
  int v7; // eax

  v3 = a2;
  v4 = *a1;
  if ( *(v4 - 4) > a2 )
    v3 = *(v4 - 4);
  if ( (int)*(v4 - 2) <= 1 )
  {
    v5 = *(v4 - 3);
    if ( v5 < v3 )
    {
      if ( v5 <= 0x40000000 )
        v6 = v5 / 2;
      else
        v6 = 0x100000;
      v7 = v5 + v6;
      if ( v7 >= v3 )
        v3 = v7;
      ATL::CSimpleStringT<unsigned short,0>::Reallocate(a1, (unsigned int)v3);
    }
  }
  else
  {
    ATL::CSimpleStringT<unsigned short,0>::Fork(a1, v3);
  }
}
