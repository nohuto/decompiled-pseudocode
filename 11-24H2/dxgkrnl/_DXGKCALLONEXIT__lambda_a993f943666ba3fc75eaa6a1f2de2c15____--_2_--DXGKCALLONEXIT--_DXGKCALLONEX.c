/*
 * XREFs of _DXGKCALLONEXIT__lambda_a993f943666ba3fc75eaa6a1f2de2c15____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14007B060
 * Callers:
 *     ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402265B0 (-VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

int **__fastcall DXGKCALLONEXIT__lambda_a993f943666ba3fc75eaa6a1f2de2c15____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(
        __int64 a1)
{
  int **result; // rax
  int *v2; // rdx

  if ( *(_BYTE *)(a1 + 32) )
  {
    result = *(int ***)a1;
    if ( **(_BYTE **)a1 )
    {
      result = *(int ***)(a1 + 8);
      v2 = *result;
      if ( *result )
      {
        if ( (result = *(int ***)(a1 + 16), *result) && **result < 0
          || (result = *(int ***)(a1 + 24), !*(_BYTE *)result) )
        {
          _InterlockedDecrement(v2 + 100);
        }
      }
    }
  }
  return result;
}
