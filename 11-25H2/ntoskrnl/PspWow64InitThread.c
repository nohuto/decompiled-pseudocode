/*
 * XREFs of PspWow64InitThread @ 0x1409EB93C
 * Callers:
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PsWow64GetProcessNtdllType @ 0x14083CB84 (PsWow64GetProcessNtdllType.c)
 *     PspWow64GetSharedInformation @ 0x14083CBA0 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessMachine @ 0x140907610 (PsWow64GetProcessMachine.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409EBAB0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     PspWow64InitThreadGuestx86 @ 0x1409EBB00 (PspWow64InitThreadGuestx86.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409EC038 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // r13
  _DWORD *v14; // r15
  __int64 CpuAreaEnabledFeatures; // rax
  unsigned __int16 ProcessNtdllType; // ax
  unsigned __int16 ProcessMachine; // [rsp+30h] [rbp-98h]
  int v19[3]; // [rsp+34h] [rbp-94h] BYREF
  __int64 v20; // [rsp+40h] [rbp-88h] BYREF
  __int64 v21; // [rsp+48h] [rbp-80h]
  __int64 v22; // [rsp+50h] [rbp-78h]
  _OWORD v23[3]; // [rsp+58h] [rbp-70h] BYREF

  v21 = a4;
  memset(v23, 0, sizeof(v23));
  v7 = 0;
  v20 = 0LL;
  ProcessMachine = PsWow64GetProcessMachine((__int64)BugCheckParameter1);
  v19[0] = RtlpArchContextFlagFromMachine(ProcessMachine, v8, v9, v10);
  if ( !v19[0] )
    return 3221225485LL;
  v11 = a3[31];
  if ( v11 == qword_140FC6480 )
  {
    ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)BugCheckParameter1);
    v11 = *((_QWORD *)PspWow64GetSharedInformation(ProcessNtdllType) + 4);
  }
  v12 = a3[16];
  v13 = a3[17];
  v22 = *(_QWORD *)(a2 + 40);
  v14 = *(_DWORD **)(a2 + 16);
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v23);
  *(_QWORD *)(v21 + 5256) = v14;
  *v14 = ProcessMachine << 16;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(v19);
  RtlInitializeExtendedContext2((__int64)(v14 + 1), v19[0], &v20, CpuAreaEnabledFeatures);
  if ( ProcessMachine == 332 )
  {
    PspWow64InitThreadGuestx86((_DWORD)BugCheckParameter1, v20, v11, v22, v12, v13);
  }
  else
  {
    v7 = -1073741811;
    v19[1] = -1073741811;
  }
  KiUnstackDetachProcess((__int64)v23, 0LL);
  return v7;
}
