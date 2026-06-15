/*
 * XREFs of ?FormatV@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z @ 0x18001B6C8
 * Callers:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001B6A0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 * Callees:
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x18001B800 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001B844 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B930 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     vswprintf_s @ 0x18002131C (vswprintf_s.c)
 *     _vscwprintf @ 0x180021380 (_vscwprintf.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x180042E9C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180043010 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::FormatV(
        wchar_t *const *a1,
        const wchar_t *a2,
        va_list a3)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 Manager; // rax
  __int64 v10; // r8
  wchar_t *v11; // rbx
  wchar_t *Format; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = vscwprintf(a2, a3);
  v7 = v6;
  v8 = -1LL;
  if ( v6 == -1 )
    ATL::AtlThrowImpl(-2147024882);
  Manager = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
  if ( !Manager )
    ATL::AtlThrowImpl(-2147467259);
  Format = (wchar_t *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Manager + 24LL))(Manager) + 24);
  if ( (unsigned __int64)a2 >= 0x10000 )
  {
    do
      ++v8;
    while ( a2[v8] );
    ATL::CSimpleStringT<unsigned short,0>::SetString(&Format, a2, (unsigned int)v8);
  }
  else
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      &Format,
      (unsigned __int16)a2,
      v10);
  }
  if ( ((1 - *((_DWORD *)*a1 - 2)) | (*((_DWORD *)*a1 - 3) - (int)v7)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)v7);
  v11 = Format;
  vswprintf_s(*a1, (int)v7 + 1, Format, a3);
  if ( (int)v7 < 0 || (int)v7 > *((_DWORD *)*a1 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*a1 - 4) = v7;
  (*a1)[v7] = 0;
  ATL::CStringData::Release((ATL::CStringData *)(v11 - 12));
}
