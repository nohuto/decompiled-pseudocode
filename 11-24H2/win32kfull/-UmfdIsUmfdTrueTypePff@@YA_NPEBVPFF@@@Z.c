/*
 * XREFs of ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x1400FF884
 * Callers:
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1400FE5E4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1400FF5D0 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1400FF8C8 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140145FC8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z @ 0x1402217AC (-GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z.c)
 *     ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x14032641C (-GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall UmfdIsUmfdTrueTypePff(const struct PFF *a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  char v5; // dl

  SessionState = W32GetSessionState(a1, a2, a3);
  v5 = 0;
  if ( *((_QWORD *)a1 + 12) == *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 24152LL) )
    return *(_DWORD *)(*((_QWORD *)a1 + 11) + 20LL) == 0;
  return v5;
}
