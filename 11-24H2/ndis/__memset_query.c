/*
 * XREFs of __memset_query @ 0x1400E76C0
 * Callers:
 *     __memset_repmovs @ 0x1400E7640 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x14008F230 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
