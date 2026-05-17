/*
 * XREFs of TpSetWaitEx @ 0x1800200E0
 * Callers:
 *     EtwpNotificationThread @ 0x18001DFF0 (EtwpNotificationThread.c)
 *     RtlpWnfNotificationThread @ 0x18001FCF0 (RtlpWnfNotificationThread.c)
 *     RtlRegisterWait @ 0x18006DF00 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18006E2B0 (RtlDeregisterWaitEx.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180095B08 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpTpWaitCheckReset @ 0x1800EB900 (RtlpTpWaitCheckReset.c)
 *     TpSetWait @ 0x1800F2DD0 (TpSetWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F749C (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     TppFreeWait @ 0x1800204A0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x1800204F0 (TppTimerpFree.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseHandleStatus @ 0x18006A9B8 (TppRaiseHandleStatus.c)
 *     TppSetTimer @ 0x18006B410 (TppSetTimer.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x18006C3B0 (TppCancelTimer.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180162EC0 (ZwAssociateWaitCompletionPacket.c)
 *     ZwCancelWaitCompletionPacket @ 0x180162F60 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall TpSetWaitEx(_PEB_LDR_DATA *Ldr, _LIST_ENTRY *a2, _LIST_ENTRY **a3, __int64 a4)
{
  int ShutdownThreadId; // eax
  _PEB_LDR_DATA *v6; // rbx
  int v7; // ebp
  char *SchedulerSharedDataSlot; // r8
  _LIST_ENTRY *Blink; // rdi
  volatile signed __int32 *p_EntryInProgress; // r14
  unsigned int i; // edx
  volatile signed __int32 **v12; // rcx
  char v13; // r12
  _BYTE *p_Blink; // r15
  signed int v15; // edi
  char v16; // al
  BOOL v17; // esi
  _LIST_ENTRY *v18; // r15
  _LIST_ENTRY *Flink; // rcx
  int v20; // eax
  void (__fastcall *v22)(_PEB_LDR_DATA *); // rax
  _LIST_ENTRY **v23; // rcx
  char v24; // al
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  int v30; // r8d
  char v31; // al
  char v32; // [rsp+80h] [rbp+8h] BYREF
  _LIST_ENTRY **v33; // [rsp+90h] [rbp+18h]

  v33 = a3;
  ShutdownThreadId = (int)Ldr[1].ShutdownThreadId;
  v6 = Ldr;
  if ( (ShutdownThreadId & 0x10000) != 0
    || (ShutdownThreadId & 0x20000) != 0
    || Ldr->SsHandle != TppWaitpCleanupGroupMemberVFuncs
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    if ( !a2 )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( Ldr->ShutdownInProgress )
        return 0LL;
    }
  }
  else if ( !a4 )
  {
    v7 = 0;
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    Blink = v6[1].InInitializationOrderModuleList.Blink;
    p_EntryInProgress = (volatile signed __int32 *)&v6[2].EntryInProgress;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v12 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v12 )
        {
          if ( v12 )
            *v12 = p_EntryInProgress;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(p_EntryInProgress, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&v6[2].EntryInProgress);
    if ( v6[4].SsHandle )
    {
      v25 = ZwCancelWaitCompletionPacket(v6[4].InLoadOrderModuleList.Flink, 0LL);
      if ( !v25 )
      {
        v13 = 1;
        v6[4].SsHandle = 0LL;
        p_Blink = &v6[5].InLoadOrderModuleList.Blink;
        v15 = -((unsigned __int8)TppCancelTimer(v6, &Blink[7], 1LL) != 0) - 1;
        if ( ((__int64)v6[5].InLoadOrderModuleList.Blink & 4) != 0 )
        {
          TppBarrierAdjust((volatile signed __int64 *)&v6->InInitializationOrderModuleList.Blink, -1, 0);
          *p_Blink &= ~4u;
        }
LABEL_17:
        *p_Blink &= ~1u;
        v16 = *p_Blink & 0xFD;
        *p_Blink = v16;
        v17 = v15 != 0;
        if ( !a2 || HIBYTE(v6[4].Length) )
          goto LABEL_29;
        if ( !v13 )
        {
          v23 = v33;
          v24 = v16 | 1;
          v6[4].InLoadOrderModuleList.Blink = a2;
          *p_Blink = v24;
          if ( v23 )
          {
            *p_Blink = v24 | 2;
            v6[4].InMemoryOrderModuleList.Flink = *v23;
          }
LABEL_25:
          if ( v15 > 0 )
          {
            _InterlockedAdd((volatile signed __int32 *)v6, v15);
            RtlReleaseSRWLockExclusive(&v6[2].EntryInProgress);
            return v17;
          }
LABEL_29:
          RtlReleaseSRWLockExclusive(&v6[2].EntryInProgress);
          if ( v15 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v6, v15) == -v15 )
          {
            v22 = *(void (__fastcall **)(_PEB_LDR_DATA *))v6->SsHandle;
            if ( (char *)v22 == (char *)TppFreeWait )
            {
              TppFreeWait(v6);
            }
            else if ( (char *)v22 == (char *)TppTimerpFree )
            {
              TppTimerpFree(v6);
            }
            else
            {
              v22(v6);
            }
          }
          return v17;
        }
        if ( v6[4].SsHandle )
          goto LABEL_29;
        v18 = v6[1].InInitializationOrderModuleList.Blink;
        Flink = v6[4].InLoadOrderModuleList.Flink;
        v32 = 0;
        v6[4].SsHandle = a2;
        v20 = ZwAssociateWaitCompletionPacket(
                Flink,
                v18[4].Flink,
                a2,
                &v6[4].InMemoryOrderModuleList.Blink,
                v6,
                0,
                0LL,
                &v32);
        if ( v20 < 0 )
        {
          v6[4].SsHandle = 0LL;
          TppRaiseHandleStatus((unsigned int)v20, a2, v6);
        }
        else
        {
          if ( v33 && !v32 )
          {
            v27 = (__int64)*v33;
            if ( (__int64)*v33 < 0 )
            {
              v29 = -v27;
            }
            else
            {
              if ( v27 <= MEMORY[0x7FFE0014] )
              {
                LODWORD(v28) = 0;
                goto LABEL_52;
              }
              v29 = v27 - MEMORY[0x7FFE0014];
            }
            v28 = v29 >> 16;
            v30 = 300;
            if ( v28 > 0x12C )
            {
LABEL_53:
              TppSetTimer((_DWORD)v6, (_DWORD)v18 + 112, (_DWORD)v33, 0, v30);
              v7 = 2;
              goto LABEL_24;
            }
LABEL_52:
            v30 = v28;
            goto LABEL_53;
          }
          v7 = 1;
        }
LABEL_24:
        v15 += v7;
        goto LABEL_25;
      }
      if ( v25 != 259 && v25 != -1073741536 )
        TppRaiseInvalidParameter(v26);
      p_Blink = &v6[5].InLoadOrderModuleList.Blink;
      v13 = 0;
      v31 = (char)v6[5].InLoadOrderModuleList.Blink;
      if ( (v31 & 4) == 0 )
      {
        *p_Blink = v31 | 4;
        TppBarrierAdjust((volatile signed __int64 *)&v6->InInitializationOrderModuleList.Blink, 1, 0);
      }
    }
    else
    {
      v13 = 1;
      p_Blink = &v6[5].InLoadOrderModuleList.Blink;
    }
    v15 = 0;
    goto LABEL_17;
  }
  TppRaiseInvalidParameter(Ldr);
  return 0LL;
}
