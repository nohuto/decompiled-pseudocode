/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x14079B350
 * Callers:
 *     EtwpEnableDisableUMGL @ 0x140A11670 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140A37348 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpNotifyProcessTracingChange @ 0x14079B1A8 (EtwpNotifyProcessTracingChange.c)
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
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
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
      KiUnstackDetachProcess((__int64)&ApcState, 0LL);
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
