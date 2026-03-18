/*
 * XREFs of __memset_query @ 0x1400AC900
 * Callers:
 *     __memset_repmovs @ 0x1400AC880 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1400851E0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
