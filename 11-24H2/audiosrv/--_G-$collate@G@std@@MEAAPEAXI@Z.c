/*
 * XREFs of ??_G?$collate@G@std@@MEAAPEAXI@Z @ 0x1801446B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$collate@G@std@@MEAA@XZ @ 0x180144228 (--1-$collate@G@std@@MEAA@XZ.c)
 */

void **__fastcall std::collate<unsigned short>::`scalar deleting destructor'(void **a1, char a2)
{
  std::collate<unsigned short>::~collate<unsigned short>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
