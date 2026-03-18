/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0053088
 * Callers:
 *     GenerateMouseMove @ 0x1C0053020 (GenerateMouseMove.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C0055268 (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionGetExecutionEvironment @ 0x1C0081F54 (ApiSetEditionGetExecutionEvironment.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v6; // rbx
  PKDPC BufferChainingDpc; // rdi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx
  int DeferredRoutine; // edi
  int v10; // ecx
  int v11; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+38h] [rbp-50h] BYREF
  int *v13; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-28h]

  v4 = a2;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !*(_DWORD *)(v6 + 3456) )
    *(_DWORD *)(v6 + 3456) = ApiSetEditionGetExecutionEvironment();
  if ( *(_DWORD *)(v6 + 3456) != 1 )
  {
    v11 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1516LL);
  }
  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL);
  DeferredRoutine = (int)BufferChainingDpc->DeferredRoutine;
  ExReleasePushLockSharedEx(p_DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
  if ( (v4 & 1) != 0 )
  {
    v10 = *((_DWORD *)gpsi + 1241);
    *(_DWORD *)(a1 + 60) = *((_DWORD *)gpsi + 1240);
    *(_DWORD *)(a1 + 64) = v10;
    *(_DWORD *)(a1 + 68) = 18;
    *((_QWORD *)gpsi + 619) = 0LL;
    *(struct tagPOINT *)(a1 + 3440) = gptCursorAsync;
    *(_QWORD *)(a1 + 3448) = 0LL;
  }
  if ( (v4 & 2) != 0 )
  {
    if ( gpqCursor )
    {
      v11 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1549LL);
    }
    RIMLockExclusive(a1 + 3824);
    *(_BYTE *)(a1 + 3840) = 1;
    *(_QWORD *)(a1 + 3832) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 3824, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (unsigned int)dword_1C0289810 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 64LL) )
  {
    v11 = v4;
    v13 = &v11;
    v14 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0289810, (int)&dword_1C025F40E, 0, 0, 3u, &v12);
  }
  if ( DeferredRoutine == 2 )
  {
    if ( qword_1C0296CC0 && (int)qword_1C0296CC0() >= 0 )
    {
      if ( qword_1C0296CC8 )
        qword_1C0296CC8();
    }
  }
  else
  {
    CMouseProcessor::ExecuteMoveMouseWindowManagement((CMouseProcessor *)a1);
  }
}
