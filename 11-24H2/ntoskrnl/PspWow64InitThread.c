/*
 * XREFs of PspWow64InitThread @ 0x1409E600C
 * Callers:
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PsWow64GetProcessMachine @ 0x1408FB0E0 (PsWow64GetProcessMachine.c)
 *     PsWow64GetProcessNtdllType @ 0x140908828 (PsWow64GetProcessNtdllType.c)
 *     PspWow64GetSharedInformation @ 0x140908844 (PspWow64GetSharedInformation.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409E62DC (RtlpArchContextFlagFromMachine.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E6328 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     PspWow64InitThreadGuestx86 @ 0x1409E6378 (PspWow64InitThreadGuestx86.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r13
  _DWORD *v11; // r15
  __int64 CpuAreaEnabledFeatures; // rax
  unsigned __int16 ProcessNtdllType; // ax
  unsigned __int16 ProcessMachine; // [rsp+30h] [rbp-98h]
  unsigned int v16[3]; // [rsp+34h] [rbp-94h] BYREF
  __int64 v17; // [rsp+40h] [rbp-88h] BYREF
  __int64 v18; // [rsp+48h] [rbp-80h]
  __int64 v19; // [rsp+50h] [rbp-78h]
  _OWORD v20[3]; // [rsp+58h] [rbp-70h] BYREF

  v18 = a4;
  memset(v20, 0, sizeof(v20));
  v7 = 0;
  v17 = 0LL;
  ProcessMachine = PsWow64GetProcessMachine((__int64)BugCheckParameter1);
  v16[0] = RtlpArchContextFlagFromMachine(ProcessMachine);
  if ( !v16[0] )
    return 3221225485LL;
  v8 = a3[31];
  if ( v8 == qword_140FC6440 )
  {
    ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)BugCheckParameter1);
    v8 = *((_QWORD *)PspWow64GetSharedInformation(ProcessNtdllType) + 4);
  }
  v9 = a3[16];
  v10 = a3[17];
  v19 = *(_QWORD *)(a2 + 40);
  v11 = *(_DWORD **)(a2 + 16);
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v20);
  *(_QWORD *)(v18 + 5256) = v11;
  *v11 = ProcessMachine << 16;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(v16);
  RtlInitializeExtendedContext2((__int64)(v11 + 1), v16[0], &v17, CpuAreaEnabledFeatures);
  if ( ProcessMachine == 332 )
  {
    PspWow64InitThreadGuestx86((_DWORD)BugCheckParameter1, v17, v8, v19, v9, v10);
  }
  else
  {
    v7 = -1073741811;
    v16[1] = -1073741811;
  }
  KiUnstackDetachProcess((__int64)v20, 0);
  return v7;
}
