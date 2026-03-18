/*
 * XREFs of ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C013E6E0
 * Callers:
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C02746E4 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C0275074 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C027617C (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     NtGdiGetETM @ 0x1C02D5240 (NtGdiGetETM.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C007E42C (--1SURFREF@@QEAA@XZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C013E594 (--1CAutoTGO@@QEAA@XZ.c)
 */

void __fastcall SURFFAKEOBJ::~SURFFAKEOBJ(SURFFAKEOBJ *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( *((_QWORD *)this + 4) )
  {
    CAutoTGO::~CAutoTGO((SURFFAKEOBJ *)((char *)this + 40));
    v2 = *((_QWORD *)this + 4);
    v3 = v2 + 40;
    if ( !v2 )
      v3 = 16LL;
    *(_QWORD *)v3 = *((_QWORD *)this + 10);
    v4 = *((_QWORD *)this + 4);
    v5 = v4 + 48;
    if ( !v4 )
      v5 = 24LL;
    *(_QWORD *)v5 = *((_QWORD *)this + 11);
    v6 = *((_QWORD *)this + 4);
    v7 = v6 + 100;
    if ( !v6 )
      v7 = 76LL;
    *(_WORD *)v7 = *((_WORD *)this + 48);
    SURFREF::vTryDeleteSurface(this);
  }
  CAutoTGO::~CAutoTGO((SURFFAKEOBJ *)((char *)this + 40));
  SURFREF::~SURFREF(this);
}
