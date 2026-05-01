/*
 * XREFs of ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x18009D084
 * Callers:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x180047498 (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 * Callees:
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800719CC (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

void **__fastcall SP<unsigned long,SP_MEM<unsigned long>>::operator=(void **a1, void *a2)
{
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(a1);
  *a1 = a2;
  return a1;
}
