/*
 * XREFs of _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180007C70
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 */

int dynamic_initializer_for__g_ListOfSpatialTech__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  dword_1801CF6B8 = 0;
  memset_0(&unk_1801CF648, 0, 0x48uLL);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_ListOfSpatialTech__);
}
