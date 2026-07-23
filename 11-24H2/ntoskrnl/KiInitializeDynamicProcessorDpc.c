/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x140B59640
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     KeSignalCallDpcSynchronize @ 0x1404282B0 (KeSignalCallDpcSynchronize.c)
 *     KiIpiSendPacket @ 0x14045D668 (KiIpiSendPacket.c)
 *     KeIpiGenericCall @ 0x14045F290 (KeIpiGenericCall.c)
 *     KiIpiStallOnPacketTargets @ 0x14045F44C (KiIpiStallOnPacketTargets.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiConfigureCooperativeIdleSearchTargets @ 0x1405B3C24 (KiConfigureCooperativeIdleSearchTargets.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B3F5C (KiFinalizeCoreControlBlockAssignment.c)
 *     KiReconfigureSubNodeSchedulingInformation @ 0x1405B473C (KiReconfigureSubNodeSchedulingInformation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KiConfigureProcessorBlock @ 0x140B57FF8 (KiConfigureProcessorBlock.c)
 *     KiConfigureSchedulingInformation @ 0x140B58128 (KiConfigureSchedulingInformation.c)
 *     KiInitializeProcessor @ 0x140B5861C (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x140B598A0 (KeRestoreMtrrBroadcast.c)
 */

__int64 __fastcall KiInitializeDynamicProcessorDpc(
        __int64 a1,
        __int64 *a2,
        volatile signed __int32 *a3,
        unsigned __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // rcx
  char v11; // dl
  __int64 result; // rax
  ULONG_PTR Context; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  int v15; // [rsp+40h] [rbp-C0h]
  _DWORD v16[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[264]; // [rsp+58h] [rbp-A8h] BYREF

  memset_0(v17, 0, 0x100uLL);
  if ( (unsigned int)KeSignalCallDpcSynchronize(a4, v7) )
  {
    v8 = *a2;
    v14 = 0LL;
    v15 = 0;
    LODWORD(Context) = *(_DWORD *)(v8 + 36);
    HIDWORD(Context) = KeGetPcr()->Prcb.Number;
    LODWORD(v14) = KeNumberProcessors_0 - 1;
    HIDWORD(v14) = KeNumberProcessors_0 - 1;
    v15 = 0;
    KeIpiGenericCall(KiUpdateNumberProcessorsIpi, (ULONG_PTR)&Context);
    KiInitializeProcessor(*a2);
    KiConfigureProcessorBlock(*a2);
    KeSetAffinityProcess(PsInitialSystemProcess, 0, &KeActiveProcessors);
    v16[1] = 0;
    v16[0] = 2097153;
    memset_0(v17, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v16, *(_DWORD *)(*a2 + 36));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
    KiIpiSendPacket(0, (char *)v16, (__int64)KiInitDynamicProcessorIpi, 0LL, 0LL, 0LL);
    KiIpiStallOnPacketTargets(v10);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    KeRestoreMtrrBroadcast();
    guard_dispatch_icall_no_overrides(0LL, *a2 + 36);
    KiConfigureSchedulingInformation(*a2);
    KiFinalizeCoreControlBlockAssignment(*a2, v11);
    KiReconfigureSubNodeSchedulingInformation(*(_QWORD *)(*a2 + 192), (_QWORD *)*a2);
    KiConfigureCooperativeIdleSearchTargets();
    KiBarrierWait = 0;
    *((_BYTE *)a2 + 8) = 1;
  }
  else
  {
    while ( !*((_BYTE *)a2 + 8) )
      _mm_pause();
  }
  result = KiConfigureSchedulingInformation((__int64)KeGetCurrentPrcb());
  _InterlockedDecrement(a3);
  return result;
}
