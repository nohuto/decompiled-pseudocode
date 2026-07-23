/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x1407AA860
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x1409CF5D4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEnableDisableUMGL @ 0x140A0EC2C (EtwpEnableDisableUMGL.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpNotifyProcessTracingChange @ 0x1407AA6B8 (EtwpNotifyProcessTracingChange.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(PEPROCESS Process, __int64 a2)
{
  struct _LIST_ENTRY *Blink; // rsi
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 *ReadyTime; // rcx
  HANDLE ProcessId; // rax
  signed __int8 v13; // [rsp+20h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  Blink = Process[1].ProcessListEntry.Blink;
  if ( Blink )
  {
    p_Blink = (struct _EX_RUNDOWN_REF *)&Process[1].ProfileListHead.Blink;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    {
      KeStackAttachProcess(Process, &ApcState);
      LOBYTE(v7) = *(_BYTE *)(a2 + 4);
      v8 = *(_DWORD *)a2;
      if ( (_BYTE)v7 )
        v13 = !_interlockedbittestandset((volatile signed __int32 *)&Blink[55].Blink, v8);
      else
        v13 = _interlockedbittestandreset((volatile signed __int32 *)&Blink[55].Blink, v8);
      v9 = 0LL;
      ReadyTime = (__int64 *)Process[1].ReadyTime;
      if ( ReadyTime )
        v9 = *ReadyTime;
      if ( v9 )
      {
        if ( (_BYTE)v7 )
          _interlockedbittestandset((volatile signed __int32 *)(v9 + 576), v8);
        else
          _interlockedbittestandreset((volatile signed __int32 *)(v9 + 576), v8);
      }
      KiUnstackDetachProcess((__int64)&ApcState, 0, v7, v6);
      ExReleaseRundownProtection_0(p_Blink);
      if ( v13 )
      {
        ProcessId = PsGetProcessId(Process);
        EtwpNotifyProcessTracingChange(ProcessId);
      }
    }
  }
  return 0LL;
}
