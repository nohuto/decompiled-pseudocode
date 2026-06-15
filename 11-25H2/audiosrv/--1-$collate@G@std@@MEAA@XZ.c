/*
 * XREFs of ??1?$collate@G@std@@MEAA@XZ @ 0x18013B758
 * Callers:
 *     ??_G?$collate@G@std@@MEAAPEAXI@Z @ 0x18013BBE0 (--_G-$collate@G@std@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::collate<unsigned short>::~collate<unsigned short>(void **a1)
{
  *a1 = &std::collate<unsigned short>::`vftable';
  free(a1[3]);
  std::locale::facet::~facet((std::locale::facet *)a1);
}
