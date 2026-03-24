/*
 * XREFs of __memset_query @ 0x1C0007840
 * Callers:
 *     __memset_repmovs @ 0x1C00077C0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C00071C0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
