/*
 * XREFs of __memset_query @ 0x14001C0C0
 * Callers:
 *     __memset_repmovs @ 0x14001C040 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x140019E10 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
