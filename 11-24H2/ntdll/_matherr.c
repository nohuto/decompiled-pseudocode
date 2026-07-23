/*
 * XREFs of _matherr @ 0x18012A700
 * Callers:
 *     _call_matherr @ 0x180128150 (_call_matherr.c)
 *     _umatherr @ 0x180129270 (_umatherr.c)
 * Callees:
 *     <none>
 */

int __cdecl matherr(struct _exception *Except)
{
  return 0;
}
