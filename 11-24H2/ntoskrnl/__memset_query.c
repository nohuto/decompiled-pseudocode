/*
 * XREFs of __memset_query @ 0x1406C0200
 * Callers:
 *     __memset_repmovs @ 0x1406C0180 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x140502040 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
