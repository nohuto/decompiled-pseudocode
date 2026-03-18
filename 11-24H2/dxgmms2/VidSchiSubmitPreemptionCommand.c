/*
 * XREFs of VidSchiSubmitPreemptionCommand @ 0x1400B633C
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140018790 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchFromSuspendedDevices @ 0x14003B1A0 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiResetEngine @ 0x140047318 (VidSchiResetEngine.c)
 *     VidSchiCheckHwProgress @ 0x1400B5C20 (VidSchiCheckHwProgress.c)
 *     VidSchiPreemptEngineNodes @ 0x140110AD8 (VidSchiPreemptEngineNodes.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     VidSchiAllocateDmaPacket @ 0x1400B67D0 (VidSchiAllocateDmaPacket.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1400B71FC (VidSchiSendToExecutionQueueWithWait.c)
 */

__int64 __fastcall VidSchiSubmitPreemptionCommand(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 DmaPacket; // r14
  __int64 v6; // rax
  void (__fastcall *v7)(_QWORD); // rax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(v1 + 104);
  DmaPacket = VidSchiAllocateDmaPacket();
  *(_DWORD *)DmaPacket = 912353622;
  *(_QWORD *)(DmaPacket + 48) = v1;
  v6 = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(DmaPacket + 92) = 0;
  *(_QWORD *)(DmaPacket + 80) = v6;
  *(_DWORD *)(DmaPacket + 72) = 7;
  *(_DWORD *)(DmaPacket + 88) = 3;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 780));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 3012));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 1836));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 784));
  *(_BYTE *)(v3 + 54) = 1;
  if ( *(_DWORD *)(a1 + 16520) != -1 )
  {
    v7 = *(void (__fastcall **)(_QWORD))(v3 + 3288);
    if ( v7 )
      v7(*(_QWORD *)(v3 + 3352));
  }
  *(_BYTE *)(v3 + 54) = 0;
  *(_DWORD *)(DmaPacket + 92) |= 0x400u;
  return VidSchiSendToExecutionQueueWithWait(DmaPacket, 0LL);
}
