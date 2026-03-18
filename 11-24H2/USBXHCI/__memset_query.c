/*
 * XREFs of __memset_query @ 0x140059080
 * Callers:
 *     __memset_repmovs @ 0x140059000 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x14003CCD0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
