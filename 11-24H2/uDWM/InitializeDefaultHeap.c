/*
 * XREFs of InitializeDefaultHeap @ 0x1800F4A20
 * Callers:
 *     _DllMainStartup @ 0x1800F5430 (_DllMainStartup.c)
 * Callees:
 *     <none>
 */

HANDLE InitializeDefaultHeap()
{
  HANDLE result; // rax

  result = GetProcessHeap();
  g_hProcessHeap = result;
  return result;
}
