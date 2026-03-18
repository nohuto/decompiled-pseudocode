/*
 * XREFs of MiHotPatchAllProcesses @ 0x1407E2DB4
 * Callers:
 *     MiLoadHotPatchForUserSid @ 0x140A98B50 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A98E64 (MiLoadHotPatch.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     Feature_HostOnlyHotpatching__private_IsEnabledDeviceUsageNoInline @ 0x1404F2184 (Feature_HostOnlyHotpatching__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2, unsigned int a3)
{
  struct _KPROCESS *i; // rcx
  int v7; // eax
  __int64 ProcessServerSilo; // rdi
  __int64 NextProcess; // rax
  struct _KPROCESS *v10; // rsi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  for ( i = 0LL; ; i = v10 )
  {
    NextProcess = PsGetNextProcess(i);
    v10 = (struct _KPROCESS *)NextProcess;
    if ( !NextProcess )
      break;
    v7 = *(_DWORD *)(NextProcess + 1532);
    if ( (v7 & 0x1000) == 0 && (v7 & 1) == 0 && !v10[3].Padding[5] )
    {
      if ( !(unsigned int)Feature_HostOnlyHotpatching__private_IsEnabledDeviceUsageNoInline()
        || (ProcessServerSilo = PsGetProcessServerSilo((__int64)v10),
            ProcessServerSilo == PdcCreateWatchdogAroundClientCall()) )
      {
        KeStackAttachProcess(v10, &ApcState);
        MiHotPatchProcess(
          v10,
          a1,
          a2,
          a3,
          ApcState.ApcListHead[0].Flink,
          ApcState.ApcListHead[0].Blink,
          ApcState.ApcListHead[1].Flink,
          ApcState.ApcListHead[1].Blink,
          ApcState.Process,
          *(_QWORD *)&ApcState.InProgressFlags);
        KiUnstackDetachProcess((__int64)&ApcState, 0LL);
      }
    }
  }
  return 0LL;
}
