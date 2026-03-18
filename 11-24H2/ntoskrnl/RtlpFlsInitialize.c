/*
 * XREFs of RtlpFlsInitialize @ 0x140787C2C
 * Callers:
 *     PspTlsInitialize @ 0x140C35E00 (PspTlsInitialize.c)
 * Callees:
 *     <none>
 */

void RtlpFlsInitialize()
{
  *(_OWORD *)&PspTlsContext = 0LL;
  unk_140E280E0 = 0LL;
  *(_OWORD *)(&PspTlsContext + 1) = 0LL;
  *(__int128 *)((char *)&xmmword_140E280D0 + 8) = 0LL;
}
