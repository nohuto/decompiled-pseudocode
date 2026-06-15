/*
 * XREFs of _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180008180
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 */

int dynamic_initializer_for__g_ListOfSpatialTech__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  dword_1801DB808 = 0;
  memset_0(&unk_1801DB798, 0, 0x48uLL);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_ListOfSpatialTech__);
}
