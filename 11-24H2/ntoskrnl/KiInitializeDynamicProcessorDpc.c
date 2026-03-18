/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x140B575C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetAffinityProcess @ 0x140202B7C (KeSetAffinityProcess.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KeSignalCallDpcSynchronize @ 0x140435830 (KeSignalCallDpcSynchronize.c)
 *     KiIpiSendPacket @ 0x1404656E8 (KiIpiSendPacket.c)
 *     KeIpiGenericCall @ 0x1404677F0 (KeIpiGenericCall.c)
 *     KiIpiStallOnPacketTargets @ 0x1404679AC (KiIpiStallOnPacketTargets.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiConfigureCooperativeIdleSearchTargets @ 0x1405B6964 (KiConfigureCooperativeIdleSearchTargets.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B6C9C (KiFinalizeCoreControlBlockAssignment.c)
 *     KiReconfigureSubNodeSchedulingInformation @ 0x1405B73DC (KiReconfigureSubNodeSchedulingInformation.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KiConfigureProcessorBlock @ 0x140B55FA8 (KiConfigureProcessorBlock.c)
 *     KiConfigureSchedulingInformation @ 0x140B560D8 (KiConfigureSchedulingInformation.c)
 *     KiInitializeProcessor @ 0x140B565CC (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x140B57820 (KeRestoreMtrrBroadcast.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // dl
  __int64 result; // rax
  ULONG_PTR Context; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h]
  int v17; // [rsp+40h] [rbp-C0h]
  _DWORD v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[264]; // [rsp+58h] [rbp-A8h] BYREF

  memset_0(v19, 0, 0x100uLL);
  if ( (unsigned int)KeSignalCallDpcSynchronize(a4, v7) )
  {
    v8 = *a2;
    v16 = 0LL;
    v17 = 0;
    LODWORD(Context) = *(_DWORD *)(v8 + 36);
    HIDWORD(Context) = KeGetPcr()->Prcb.Number;
    LODWORD(v16) = KeNumberProcessors_0 - 1;
    HIDWORD(v16) = KeNumberProcessors_0 - 1;
    v17 = 0;
    KeIpiGenericCall(KiUpdateNumberProcessorsIpi, (ULONG_PTR)&Context);
    KiInitializeProcessor(*a2);
    KiConfigureProcessorBlock(*a2);
    KeSetAffinityProcess(PsInitialSystemProcess, 0, &KeActiveProcessors);
    v18[1] = 0;
    v18[0] = 2097153;
    memset_0(v19, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v18, *(_DWORD *)(*a2 + 36));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
    KiIpiSendPacket(0, (char *)v18, (__int64)KiInitDynamicProcessorIpi, 0LL, 0LL, 0LL);
    KiIpiStallOnPacketTargets(v10);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    KeRestoreMtrrBroadcast();
    guard_dispatch_icall_no_overrides(0LL, *a2 + 36, v11, v12);
    KiConfigureSchedulingInformation(*a2);
    KiFinalizeCoreControlBlockAssignment(*a2, v13);
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
