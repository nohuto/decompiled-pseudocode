/*
 * XREFs of ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C008A7A4
 * Callers:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FB100 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00FBB30 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0100110 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     GreRealizePalette @ 0x1C02D0D2C (GreRealizePalette.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C02D7D28 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C02D7E1C (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02D7E6C (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C02D8610 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x1C02DBD8C (-bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulTime(XEPALOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v2 == v1 )
    return *(unsigned int *)(v1 + 32);
  else
    return *(unsigned int *)(v2 + 32);
}
