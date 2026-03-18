/*
 * XREFs of ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AF90
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B28 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     _lambda_f4238eedaddfdd5e0dcb8daad31e4c10_::_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_ @ 0x140214714 (_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_--_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_.c)
 *     _lambda_f4238eedaddfdd5e0dcb8daad31e4c10_::operator() @ 0x140214994 (_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_--operator().c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusVsyncControl(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 **v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v5 = a1;
  v1 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v7 = v1;
  if ( v1 )
  {
    v2 = (__int64 **)lambda_f4238eedaddfdd5e0dcb8daad31e4c10_::_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_(
                       v4,
                       (__int64)&v7,
                       (__int64)&v5);
    v6 = lambda_f4238eedaddfdd5e0dcb8daad31e4c10_::operator()(v2);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v5 + 16), &v6, 4u);
    LOBYTE(v1) = 1;
  }
  return v1;
}
