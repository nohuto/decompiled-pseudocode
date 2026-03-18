/*
 * XREFs of __memset_query @ 0x14023F6C0
 * Callers:
 *     __memset_repmovs @ 0x14023F640 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1401A0B80 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
