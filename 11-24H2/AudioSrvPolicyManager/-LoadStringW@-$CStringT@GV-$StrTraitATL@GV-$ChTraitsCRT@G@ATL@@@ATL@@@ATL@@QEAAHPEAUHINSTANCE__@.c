/*
 * XREFs of ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x180042F4C
 * Callers:
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x180042E9C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x18001E7E0 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001E904 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _o_wmemcpy_s_0 @ 0x18002126C (_o_wmemcpy_s_0.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180043010 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x1800432EC (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        wchar_t **a1,
        HMODULE a2,
        unsigned int a3)
{
  HRSRC Resource; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *StringResourceImage; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *v8; // rdi
  rsize_t v9; // rbx
  errno_t v10; // eax

  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( !Resource )
    return 0LL;
  StringResourceImage = ATL::_AtlGetStringResourceImage(a2, Resource, a3);
  v8 = StringResourceImage;
  if ( !StringResourceImage )
    return 0LL;
  v9 = *(unsigned __int16 *)StringResourceImage;
  if ( ((1 - *((_DWORD *)*a1 - 2)) | (*((_DWORD *)*a1 - 3) - (int)v9)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, *(unsigned __int16 *)StringResourceImage);
  v10 = o_wmemcpy_s_0(*a1, v9, (const wchar_t *)v8 + 1, *(unsigned __int16 *)v8);
  ATL::AtlCrtErrorCheck(v10);
  ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v9);
  return 1LL;
}
