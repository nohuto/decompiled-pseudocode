/*
 * XREFs of __memset_query @ 0x14000DC80
 * Callers:
 *     __memset_repmovs @ 0x14000DC00 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x140004090 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
