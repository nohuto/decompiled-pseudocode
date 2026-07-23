/*
 * XREFs of PspWow64InitThread @ 0x1409E089C
 * Callers:
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsWow64GetProcessNtdllType @ 0x1408DFF44 (PsWow64GetProcessNtdllType.c)
 *     PspWow64GetSharedInformation @ 0x1408DFF60 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessMachine @ 0x14091D9C0 (PsWow64GetProcessMachine.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409E0B6C (RtlpArchContextFlagFromMachine.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E0BB8 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     PspWow64InitThreadGuestx86 @ 0x1409E0C08 (PspWow64InitThreadGuestx86.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r15
  ULONG64 CpuAreaEnabledFeatures; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int16 ProcessNtdllType; // ax
  unsigned __int16 ProcessMachine; // [rsp+30h] [rbp-98h]
  ULONG ContextFlags[3]; // [rsp+34h] [rbp-94h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+40h] [rbp-88h] BYREF
  __int64 v20; // [rsp+48h] [rbp-80h]
  __int64 v21; // [rsp+50h] [rbp-78h]
  _OWORD v22[3]; // [rsp+58h] [rbp-70h] BYREF

  v20 = a4;
  memset(v22, 0, sizeof(v22));
  v7 = 0;
  ContextEx = 0LL;
  ProcessMachine = PsWow64GetProcessMachine((__int64)BugCheckParameter1);
  ContextFlags[0] = RtlpArchContextFlagFromMachine(ProcessMachine);
  if ( !ContextFlags[0] )
    return 3221225485LL;
  v8 = a3[31];
  if ( v8 == qword_140FC74C0 )
  {
    ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)BugCheckParameter1);
    v8 = *((_QWORD *)PspWow64GetSharedInformation(ProcessNtdllType) + 4);
  }
  v9 = a3[16];
  v10 = a3[17];
  v21 = *(_QWORD *)(a2 + 40);
  v11 = *(_QWORD *)(a2 + 16);
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v22);
  *(_QWORD *)(v20 + 5256) = v11;
  *(_DWORD *)v11 = ProcessMachine << 16;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(ContextFlags);
  RtlInitializeExtendedContext2((PCONTEXT)(v11 + 4), ContextFlags[0], &ContextEx, CpuAreaEnabledFeatures);
  if ( ProcessMachine == 332 )
  {
    PspWow64InitThreadGuestx86((_DWORD)BugCheckParameter1, (_DWORD)ContextEx, v8, v21, v9, v10);
  }
  else
  {
    v7 = -1073741811;
    ContextFlags[1] = -1073741811;
  }
  KiUnstackDetachProcess((__int64)v22, 0, v13, v14);
  return v7;
}
