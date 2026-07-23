/*
 * XREFs of __memset_query @ 0x1406C1100
 * Callers:
 *     __memset_repmovs @ 0x1406C1080 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1404FF900 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
