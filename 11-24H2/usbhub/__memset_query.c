/*
 * XREFs of __memset_query @ 0x140061500
 * Callers:
 *     __memset_repmovs @ 0x140061480 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x140060E70 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
