/*
 * XREFs of AvDestroyProcessHeap @ 0x18010D8AC
 * Callers:
 *     _DllMainStartup @ 0x18001D2A0 (_DllMainStartup.c)
 * Callees:
 *     ??_GHeapBase@WPF@@UEAAPEAXI@Z @ 0x18010D860 (--_GHeapBase@WPF@@UEAAPEAXI@Z.c)
 */

__int64 AvDestroyProcessHeap()
{
  if ( WPF::g_pProcessHeap )
  {
    WPF::HeapBase::`scalar deleting destructor'(WPF::g_pProcessHeap, 0);
    HeapFree(g_hProcessHeap, 0, WPF::g_pProcessHeap);
    WPF::g_pProcessHeap = 0LL;
    g_hProcessHeap = 0LL;
  }
  return 0LL;
}
