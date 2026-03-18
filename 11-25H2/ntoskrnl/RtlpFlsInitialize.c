/*
 * XREFs of RtlpFlsInitialize @ 0x1407789DC
 * Callers:
 *     PspTlsInitialize @ 0x140C24B34 (PspTlsInitialize.c)
 * Callees:
 *     <none>
 */

void RtlpFlsInitialize()
{
  *(_OWORD *)&PspTlsContext = 0LL;
  unk_140E27EA0 = 0LL;
  *(_OWORD *)(&PspTlsContext + 1) = 0LL;
  *(__int128 *)((char *)&xmmword_140E27E90 + 8) = 0LL;
}
