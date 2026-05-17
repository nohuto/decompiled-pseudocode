/*
 * XREFs of _matherr @ 0x18012DFB0
 * Callers:
 *     _call_matherr @ 0x18012BA00 (_call_matherr.c)
 *     _umatherr @ 0x18012CB20 (_umatherr.c)
 * Callees:
 *     <none>
 */

int __cdecl matherr(struct _exception *Except)
{
  return 0;
}
