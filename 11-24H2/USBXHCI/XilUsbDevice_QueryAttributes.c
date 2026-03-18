/*
 * XREFs of XilUsbDevice_QueryAttributes @ 0x14003CA78
 * Callers:
 *     Etw_DeviceUpdate @ 0x14003423C (Etw_DeviceUpdate.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall XilUsbDevice_QueryAttributes(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        _BYTE *a4,
        _OWORD *a5,
        _BYTE *a6,
        _OWORD *a7)
{
  _OWORD *v8; // rcx
  _OWORD *result; // rax
  _OWORD *v10; // rcx

  if ( a2 )
    *a2 = *(_BYTE *)(a1 + 680);
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 681);
  if ( a4 )
    *a4 = *(_BYTE *)(a1 + 682);
  if ( a5 )
  {
    *a5 = 0LL;
    a5[1] = 0LL;
    v8 = *(_OWORD **)(a1 + 688);
    if ( v8 )
    {
      *a5 = *v8;
      a5[1] = v8[1];
    }
  }
  if ( a4 )
    *a6 = *(_BYTE *)(a1 + 696);
  result = a7;
  if ( a7 )
  {
    *a7 = 0LL;
    a7[1] = 0LL;
    v10 = *(_OWORD **)(a1 + 704);
    if ( v10 )
    {
      *a7 = *v10;
      a7[1] = v10[1];
    }
  }
  return result;
}
