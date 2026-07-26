/*
 * XREFs of __memset_query @ 0x1400EE540
 * Callers:
 *     __memset_repmovs @ 0x1400EE4C0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x14009AFA0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
