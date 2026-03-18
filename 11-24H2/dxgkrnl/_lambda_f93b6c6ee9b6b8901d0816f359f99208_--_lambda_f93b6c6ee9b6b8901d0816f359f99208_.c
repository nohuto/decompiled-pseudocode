/*
 * XREFs of _lambda_f93b6c6ee9b6b8901d0816f359f99208_::_lambda_f93b6c6ee9b6b8901d0816f359f99208_ @ 0x14019FF9C
 * Callers:
 *     ?VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140231810 (-VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140231880 (-VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkAttemptOpmVmBusRedirect @ 0x1403A43EC (DxgkAttemptOpmVmBusRedirect.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_f93b6c6ee9b6b8901d0816f359f99208_::_lambda_f93b6c6ee9b6b8901d0816f359f99208_(
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
