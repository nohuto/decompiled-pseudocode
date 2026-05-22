/*
 * XREFs of ?OnKernelInputEvent@NonBamoInputDeliveryServer@@AEAAXPEBUtagQMSGINPUTREPORT@@@Z @ 0x18015D094
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b30a7da4d22722610e9add99a7ef96c9__void_tagQMSGINPUTREPORT_const___::_Do_call @ 0x18015D340 (std--_Func_impl_no_alloc__lambda_b30a7da4d22722610e9add99a7ef96c9__void_tagQMSGINPU_ea_18015D340.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x180031388 (-DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x180031AC8 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NonBamoInputDeliveryServer::OnKernelInputEvent(
        NonBamoInputDeliveryServer *this,
        const struct tagQMSGINPUTREPORT *a2,
        __int64 a3,
        const char *a4)
{
  const struct std::nothrow_t *v5; // rdx
  int v6; // [rsp+20h] [rbp-59h] BYREF
  void *v7; // [rsp+28h] [rbp-51h] BYREF
  __int64 v8; // [rsp+30h] [rbp-49h] BYREF
  int v9; // [rsp+38h] [rbp-41h]
  __int64 v10; // [rsp+40h] [rbp-39h]
  int v11; // [rsp+48h] [rbp-31h]
  __int128 v12; // [rsp+50h] [rbp-29h]
  __int128 v13; // [rsp+60h] [rbp-19h]
  __int128 v14; // [rsp+70h] [rbp-9h]
  __int128 v15; // [rsp+80h] [rbp+7h]
  __int128 v16; // [rsp+90h] [rbp+17h]
  __int128 v17; // [rsp+A0h] [rbp+27h]
  __int128 v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+C0h] [rbp+47h]

  v12 = *(_OWORD *)a2;
  v13 = *((_OWORD *)a2 + 1);
  v14 = *((_OWORD *)a2 + 2);
  v15 = *((_OWORD *)a2 + 3);
  v16 = *((_OWORD *)a2 + 4);
  v17 = *((_OWORD *)a2 + 5);
  v18 = *((_OWORD *)a2 + 6);
  v19 = *((_QWORD *)a2 + 14);
  v8 = 0x800000LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 152;
  InputEventPayloadBuffer::InputEventPayloadBuffer((__int64)&v6, 5, (int *)&v8, a4);
  NonBamoInputDeliveryServer::DeliverInput((const struct tagQMSGINPUTREPORT *)((char *)a2 + 80), v7, v6);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v7, v5);
}
