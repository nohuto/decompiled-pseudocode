/*
 * XREFs of ??0?$collate@G@std@@QEAA@AEBV_Locinfo@1@_K@Z @ 0x180144040
 * Callers:
 *     ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1801488C0 (-_Getcat@-$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
struct _Collvec *__fastcall std::collate<unsigned short>::collate<unsigned short>(
        struct _Collvec *a1,
        std::_Locinfo *a2)
{
  struct _Collvec v5; // [rsp+20h] [rbp-18h] BYREF

  std::locale::facet::facet((std::locale::facet *)a1, 0LL);
  *(_QWORD *)&a1->_Page = &std::collate<unsigned short>::`vftable';
  a1[1] = *std::_Locinfo::_Getcoll(a2, &v5);
  return a1;
}
