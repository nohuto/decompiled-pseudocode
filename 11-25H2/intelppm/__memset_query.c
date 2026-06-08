/*
 * XREFs of __memset_query @ 0x140010500
 * Callers:
 *     __memset_repmovs @ 0x140010480 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x140006960 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
