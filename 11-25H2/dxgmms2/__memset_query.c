/*
 * XREFs of __memset_query @ 0x140056940
 * Callers:
 *     __memset_repmovs @ 0x1400568C0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x140056190 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
