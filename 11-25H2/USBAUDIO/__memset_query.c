/*
 * XREFs of __memset_query @ 0x14001CC00
 * Callers:
 *     __memset_repmovs @ 0x14001CB80 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x14001A940 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
