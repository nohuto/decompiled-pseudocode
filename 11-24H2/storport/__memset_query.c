/*
 * XREFs of __memset_query @ 0x140143C40
 * Callers:
 *     __memset_repmovs @ 0x140143BC0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1400564C0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
