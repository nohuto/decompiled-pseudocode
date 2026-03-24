/*
 * XREFs of __memset_query @ 0x1C00070C0
 * Callers:
 *     __memset_repmovs @ 0x1C0007040 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C0006A10 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
