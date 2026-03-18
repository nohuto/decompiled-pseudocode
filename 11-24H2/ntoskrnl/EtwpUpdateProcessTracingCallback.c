/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x1407AA720
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x1408301F0 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEnableDisableUMGL @ 0x140A15A4C (EtwpEnableDisableUMGL.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     PsGetProcessId @ 0x140434960 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     EtwpNotifyProcessTracingChange @ 0x1407AA578 (EtwpNotifyProcessTracingChange.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(PEPROCESS Process, __int64 a2)
{
  struct _LIST_ENTRY *Blink; // rsi
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  char v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 *ReadyTime; // rcx
  HANDLE ProcessId; // rax
  signed __int8 v12; // [rsp+20h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  Blink = Process[1].ProcessListEntry.Blink;
  if ( Blink )
  {
    p_Blink = (struct _EX_RUNDOWN_REF *)&Process[1].ProfileListHead.Blink;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    {
      KeStackAttachProcess(Process, &ApcState);
      v6 = *(_BYTE *)(a2 + 4);
      v7 = *(_DWORD *)a2;
      if ( v6 )
        v12 = !_interlockedbittestandset((volatile signed __int32 *)&Blink[55].Blink, v7);
      else
        v12 = _interlockedbittestandreset((volatile signed __int32 *)&Blink[55].Blink, v7);
      v8 = 0LL;
      ReadyTime = (__int64 *)Process[1].ReadyTime;
      if ( ReadyTime )
        v8 = *ReadyTime;
      if ( v8 )
      {
        if ( v6 )
          _interlockedbittestandset((volatile signed __int32 *)(v8 + 576), v7);
        else
          _interlockedbittestandreset((volatile signed __int32 *)(v8 + 576), v7);
      }
      KiUnstackDetachProcess((__int64)&ApcState, 0);
      ExReleaseRundownProtection_0(p_Blink);
      if ( v12 )
      {
        ProcessId = PsGetProcessId(Process);
        EtwpNotifyProcessTracingChange(ProcessId);
      }
    }
  }
  return 0LL;
}
