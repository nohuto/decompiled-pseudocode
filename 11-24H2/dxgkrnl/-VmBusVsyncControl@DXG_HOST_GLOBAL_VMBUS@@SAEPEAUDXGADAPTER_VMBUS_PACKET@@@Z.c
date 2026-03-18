/*
 * XREFs of ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140231880
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051578 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     _lambda_f93b6c6ee9b6b8901d0816f359f99208_::_lambda_f93b6c6ee9b6b8901d0816f359f99208_ @ 0x14019FF9C (_lambda_f93b6c6ee9b6b8901d0816f359f99208_--_lambda_f93b6c6ee9b6b8901d0816f359f99208_.c)
 *     _lambda_30b46b3e1498d0fd094f88f23b33fdcf_::operator() @ 0x14021AD34 (_lambda_30b46b3e1498d0fd094f88f23b33fdcf_--operator().c)
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
    v2 = (__int64 **)lambda_f93b6c6ee9b6b8901d0816f359f99208_::_lambda_f93b6c6ee9b6b8901d0816f359f99208_(
                       v4,
                       (__int64)&v7,
                       (__int64)&v5);
    v6 = lambda_30b46b3e1498d0fd094f88f23b33fdcf_::operator()(v2);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v5 + 16), &v6, 4u);
    LOBYTE(v1) = 1;
  }
  return v1;
}
