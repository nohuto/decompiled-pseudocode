/*
 * XREFs of ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x18013F810
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x18013FA70 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802875C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 */

__int64 __fastcall CClassicWindow::ChangeWindowType(CClassicWindow *a1, __int64 a2)
{
  int v2; // r14d
  __int16 v3; // di
  __int64 v5; // rdx
  int v6; // ebp
  unsigned int v7; // edi
  char v8; // cl
  __int64 v9; // rdx
  char v10; // si
  bool v11; // zf
  unsigned __int8 v12; // bp
  __int64 v13; // rdx
  char v14; // al
  int v15; // ebx
  __int64 v16; // rdx
  unsigned __int8 v17; // bl

  v2 = *((_DWORD *)a1 + 18);
  v3 = a2;
  if ( (a2 & 1) != 0 )
  {
    *((_DWORD *)a1 + 18) = v2 | 4;
  }
  else if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)a1 + 18) = v2 & 0xFFFFFFFB;
    CClassicWindow::SetOwner(a1, 0LL);
  }
  if ( (v3 & 4) != 0 )
  {
    *((_DWORD *)a1 + 18) = *((_DWORD *)a1 + 18) & 0xFFFFFFFC | 1;
  }
  else if ( (v3 & 8) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~1u;
  }
  if ( (v3 & 0x20) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 2u;
  }
  else if ( (v3 & 0x40) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~2u;
  }
  if ( (v3 & 0x200) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 8u;
  }
  else if ( (v3 & 0x400) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~8u;
  }
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    a2);
  if ( (v3 & 0x2000) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 0x10u;
  }
  else if ( (v3 & 0x4000) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~0x10u;
  }
  v6 = *((_DWORD *)a1 + 18);
  v7 = v3 & 0x10;
  v8 = v2 ^ v6;
  if ( (((unsigned __int8)v2 ^ *((_BYTE *)a1 + 72)) & 4) != 0 )
    v7 |= 2 - ((v6 & 4) != 0);
  if ( (v8 & 1) != 0 )
    v7 |= 4 * ((v6 & 1) == 0) + 4;
  if ( (v8 & 2) != 0 )
    v7 |= (v6 & 2) != 0 ? 32 : 64;
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v5);
  v10 = 0;
  if ( (v6 & 0x13) != 0 && (v6 & 8) == 0 || (v11 = (v6 & 5) == 0, v12 = 0, !v11) )
    v12 = 1;
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v9);
  if ( (v2 & 0x13) != 0 && (v2 & 8) == 0 || (v14 = 0, (v2 & 5) != 0) )
    v14 = 1;
  if ( v14 != v12 )
    v7 |= ((v12 ^ 1) << 7) + 128;
  v15 = *((_DWORD *)a1 + 18);
  LOBYTE(v13) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v13);
  if ( (v15 & 0x13) == 0 || (v11 = (v15 & 8) == 0, v17 = 1, !v11) )
    v17 = 0;
  LOBYTE(v16) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v16);
  if ( (v2 & 0x13) != 0 && (v2 & 8) == 0 )
    v10 = 1;
  if ( v10 != v17 )
    v7 |= ((v17 ^ 1) << 11) + 2048;
  return v7;
}
