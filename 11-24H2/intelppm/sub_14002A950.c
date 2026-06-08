/*
 * XREFs of sub_14002A950 @ 0x14002A950
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400071A4 @ 0x1400071A4 (sub_1400071A4.c)
 */

_DWORD *sub_14002A950()
{
  _DWORD *result; // rax

  result = (_DWORD *)LODWORD(DeviceObject.Dpc.DeferredContext);
  if ( ((__int64)DeviceObject.Dpc.DeferredContext & 1) != 0 )
    return sub_1400071A4();
  return result;
}
