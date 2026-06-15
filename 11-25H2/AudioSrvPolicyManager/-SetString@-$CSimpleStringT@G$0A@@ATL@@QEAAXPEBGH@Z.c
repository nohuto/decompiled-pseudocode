/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001B714
 * Callers:
 *     ?FormatV@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z @ 0x18001B598 (-FormatV@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180047828 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18001A94C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B800 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001EAA4 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180021136 (_invalid_parameter_noinfo.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180045830 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     memcpy_0 @ 0x18004B3CC (memcpy_0.c)
 *     memmove_0 @ 0x18004B3D8 (memmove_0.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(_QWORD *a1, char *a2, unsigned int a3)
{
  __int64 v3; // rdi
  char *v4; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  char *v8; // rcx
  size_t v9; // r8

  v3 = (int)a3;
  v4 = a2;
  if ( !a3 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
    return;
  }
  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = (__int64)&a2[-*a1] >> 1;
  v7 = *(unsigned int *)(*a1 - 16LL);
  if ( (((*(_DWORD *)(*a1 - 12LL) - a3) | (1 - *(_DWORD *)(*a1 - 8LL))) & 0x80000000) != 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, a3);
  v8 = (char *)*a1;
  v9 = 2 * v3;
  if ( v6 > v7 )
  {
    if ( !v9 )
      goto LABEL_16;
    if ( v8 )
    {
      memcpy_0(v8, v4, v9);
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  a2 = &v8[2 * v6];
  if ( v9 )
  {
    if ( v8 && a2 )
    {
      memmove_0(v8, a2, v9);
      goto LABEL_16;
    }
LABEL_14:
    *(_DWORD *)_o__errno(v8, a2, v9) = 22;
    invalid_parameter_noinfo();
  }
LABEL_16:
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v3);
}
