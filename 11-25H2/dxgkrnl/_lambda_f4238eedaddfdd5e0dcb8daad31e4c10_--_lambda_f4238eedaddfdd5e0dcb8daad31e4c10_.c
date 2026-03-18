/*
 * XREFs of _lambda_f4238eedaddfdd5e0dcb8daad31e4c10_::_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_ @ 0x140214714
 * Callers:
 *     ?VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AF20 (-VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AF90 (-VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_f4238eedaddfdd5e0dcb8daad31e4c10_::_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
