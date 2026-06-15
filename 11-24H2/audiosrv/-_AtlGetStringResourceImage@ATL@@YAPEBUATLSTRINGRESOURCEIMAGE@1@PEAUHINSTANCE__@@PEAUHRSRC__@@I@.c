/*
 * XREFs of ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x1800C2E68
 * Callers:
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x1800C225C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800C230C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     <none>
 */

const struct ATL::ATLSTRINGRESOURCEIMAGE *__fastcall ATL::_AtlGetStringResourceImage(
        HINSTANCE hModule,
        HRSRC hResInfo,
        char a3)
{
  HGLOBAL Resource; // rax
  unsigned __int64 v7; // rbx
  char *v8; // rcx
  int v9; // edi

  Resource = LoadResource(hModule, hResInfo);
  if ( Resource )
  {
    v7 = (unsigned __int64)LockResource(Resource);
    if ( v7 )
    {
      v8 = (char *)(v7 + SizeofResource(hModule, hResInfo));
      v9 = a3 & 0xF;
      if ( v9 )
      {
        while ( v7 < (unsigned __int64)v8 )
        {
          v7 += 2LL * *(unsigned __int16 *)v7 + 2;
          if ( !--v9 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        if ( v7 < (unsigned __int64)v8 )
          return (const struct ATL::ATLSTRINGRESOURCEIMAGE *)(v7 & -(__int64)(*(_WORD *)v7 != 0));
      }
    }
  }
  return 0LL;
}
