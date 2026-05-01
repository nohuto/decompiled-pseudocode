/*
 * XREFs of _dynamic_initializer_for__AppSizeConstraintsCache::s_defaultMaxSize__ @ 0x180002D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__AppSizeConstraintsCache::s_defaultMaxSize__()
{
  int SystemMetrics; // ebx
  int result; // eax

  SystemMetrics = GetSystemMetrics(79);
  result = GetSystemMetrics(78);
  AppSizeConstraintsCache::s_defaultMaxSize = result;
  *(&AppSizeConstraintsCache::s_defaultMaxSize + 1) = SystemMetrics;
  return result;
}
