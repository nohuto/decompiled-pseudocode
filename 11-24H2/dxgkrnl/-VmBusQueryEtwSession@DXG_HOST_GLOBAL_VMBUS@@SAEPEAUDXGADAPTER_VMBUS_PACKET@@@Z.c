/*
 * XREFs of ?VmBusQueryEtwSession@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140226E50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x140073AE0 (McTemplateK0j_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusQueryEtwSession(struct VMBPACKETCOMPLETION__ **a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rbx
  UUID Uuid; // [rsp+50h] [rbp-28h] BYREF

  Uuid = 0LL;
  v2 = ExUuidCreate(&Uuid);
  if ( v2 < 0 )
  {
    v6 = v2;
    WdLogSingleEntry1(2LL, v2);
    WdLogGlobalForLineNumber = 7630;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to generate ETW session GUID: Status=0x%.8x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      McTemplateK0j_EtwWriteTransfer(v3, &EventVGPUHostGenerateSessionId, v4, (__int64)&Uuid);
    VmBusCompletePacket(a1[16], &Uuid, 0x10u);
    return 1;
  }
}
