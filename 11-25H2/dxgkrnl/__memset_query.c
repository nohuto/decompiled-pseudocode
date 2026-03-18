/*
 * XREFs of __memset_query @ 0x14009FE80
 * Callers:
 *     __memset_repmovs @ 0x14009FE00 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1400653F0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
