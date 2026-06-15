/*
 * XREFs of ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001BF70
 * Callers:
 *     ?NewNode@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@PEBGPEAV312@1@Z @ 0x180126068 (-NewNode@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTr.c)
 *     ?NewNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x180162124 (-NewNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValu.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014E40 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18001C0C4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A4DEE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x1800C225C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        __int64 *a1,
        _WORD *a2)
{
  __int64 v4; // rax
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  char *v11; // rcx
  __int64 v12; // r14

  v4 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  *a1 = v4;
  if ( !a2 )
    goto LABEL_2;
  if ( (unsigned __int64)a2 < 0x10000 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      a1,
      (unsigned __int16)a2);
    return a1;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  if ( !(_DWORD)v8 )
  {
LABEL_2:
    ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
    return a1;
  }
  v9 = *(unsigned int *)(v4 - 16);
  v10 = ((__int64)a2 - v4) >> 1;
  if ( ((1 - *(_DWORD *)(v4 - 8)) | (*(_DWORD *)(v4 - 12) - (int)v8)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v8);
  v11 = (char *)*a1;
  v12 = 2LL * (int)v8;
  if ( v10 <= v9 )
  {
    v5 = &v11[2 * v10];
    if ( v12 )
    {
      if ( !v11 || !v5 )
      {
LABEL_11:
        *(_DWORD *)_o__errno(v11, v5, v6) = 22;
        invalid_parameter_noinfo();
        goto LABEL_13;
      }
      memmove_0(v11, v5, 2LL * (int)v8);
    }
  }
  else
  {
    if ( !v12 )
      goto LABEL_13;
    if ( !v11 )
      goto LABEL_11;
    memcpy_0(v11, a2, 2LL * (int)v8);
  }
LABEL_13:
  if ( (int)v8 < 0 || (int)v8 > *(_DWORD *)(*a1 - 12) )
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(*a1 - 16) = v8;
  *(_WORD *)(v12 + *a1) = 0;
  return a1;
}
