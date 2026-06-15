/*
 * XREFs of ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x180028904
 * Callers:
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18002880C (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x180028A78 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18002B978 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800A4D44 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A8AFE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void **__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Mid(
        _QWORD *a1,
        void **a2,
        int a3,
        int a4)
{
  int v4; // esi
  int v7; // r8d
  int v8; // ebx
  int v9; // edx
  int v10; // eax
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax
  const void *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  size_t v16; // r8
  void *v17; // rcx

  v4 = 0;
  if ( a3 >= 0 )
    v4 = a3;
  v7 = 0;
  if ( a4 >= 0 )
    v7 = a4;
  if ( 0x7FFFFFFF - v4 < v7 )
    goto LABEL_26;
  v8 = 0;
  v9 = *(_DWORD *)(*a1 - 16LL);
  v10 = v9 - v4;
  if ( v7 + v4 <= v9 )
    v10 = v7;
  if ( v4 <= v9 )
    v8 = v10;
  if ( !v4 && v8 == v9 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      a2,
      a1);
    return a2;
  }
  Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
  v12 = (const void *)(*a1 + 2LL * v4);
  if ( !Manager )
    ATL::AtlThrowImpl(-2147467259);
  if ( !v12 && v8 )
    goto LABEL_26;
  v13 = (**Manager)(Manager, (unsigned int)v8, 2LL);
  if ( !v13 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  v15 = v13 + 24;
  *a2 = (void *)v15;
  if ( v8 < 0 || v8 > *(_DWORD *)(v15 - 12) )
LABEL_26:
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(v15 - 16) = v8;
  v16 = 2LL * v8;
  *(_WORD *)((char *)*a2 + v16) = 0;
  v17 = *a2;
  if ( v16 )
  {
    if ( v17 )
    {
      if ( v12 )
      {
        memcpy_0(v17, v12, v16);
        return a2;
      }
      memset_0(v17, 0, v16);
    }
    *(_DWORD *)_o__errno(v17, v14, v16) = 22;
    invalid_parameter_noinfo();
  }
  return a2;
}
