/*
 * XREFs of ?VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AF20
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051320 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     _lambda_f4238eedaddfdd5e0dcb8daad31e4c10_::_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_ @ 0x140214714 (_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_--_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_.c)
 *     _lambda_7c63a497f6cae7dbe38226205c3cc046_::operator() @ 0x140214728 (_lambda_7c63a497f6cae7dbe38226205c3cc046_--operator().c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusUpdateMonitorMapping(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 **v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v5 = a1;
  v1 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  v7 = v1;
  if ( v1 )
  {
    v2 = (__int64 **)lambda_f4238eedaddfdd5e0dcb8daad31e4c10_::_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_(
                       v4,
                       (__int64)&v5,
                       (__int64)&v7);
    v6 = lambda_7c63a497f6cae7dbe38226205c3cc046_::operator()(v2);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v5 + 16), &v6, 4u);
    LOBYTE(v1) = 1;
  }
  return v1;
}
