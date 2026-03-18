/*
 * XREFs of __memset_query @ 0x1400AC9C0
 * Callers:
 *     __memset_repmovs @ 0x1400AC940 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1400851D0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
