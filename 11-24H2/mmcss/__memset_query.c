/*
 * XREFs of __memset_query @ 0x140005F80
 * Callers:
 *     __memset_repmovs @ 0x140005F00 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x140005900 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
