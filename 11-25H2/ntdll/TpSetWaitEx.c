/*
 * XREFs of TpSetWaitEx @ 0x180041AF0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x180001008 (EtwpRegisterTpNotificationOnce.c)
 *     RtlRegisterWait @ 0x18003C400 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18003C7B0 (RtlDeregisterWaitEx.c)
 *     RtlpWnfNotificationThread @ 0x180040FB0 (RtlpWnfNotificationThread.c)
 *     EtwpNotificationThread @ 0x1800451D0 (EtwpNotificationThread.c)
 *     RtlpTpWaitCheckReset @ 0x1800EC620 (RtlpTpWaitCheckReset.c)
 *     TpSetWait @ 0x1800F4940 (TpSetWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F90FC (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppSetTimer @ 0x18003EB00 (TppSetTimer.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppFreeWait @ 0x180041EB0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x180041F00 (TppTimerpFree.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppRaiseHandleStatus @ 0x1800D71E8 (TppRaiseHandleStatus.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180164450 (ZwAssociateWaitCompletionPacket.c)
 *     ZwCancelWaitCompletionPacket @ 0x1801644F0 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall TpSetWaitEx(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  int v4; // eax
  int v7; // ebp
  char *SchedulerSharedDataSlot; // r8
  __int64 v9; // rdi
  volatile signed __int32 *v10; // r14
  unsigned int i; // edx
  volatile signed __int32 **v12; // rcx
  char v13; // r12
  _BYTE *v14; // r15
  signed int v15; // edi
  char v16; // al
  BOOL v17; // esi
  __int64 v18; // r15
  __int64 v19; // rcx
  int v20; // eax
  void (__fastcall *v22)(__int64); // rax
  __int64 *v23; // rcx
  char v24; // al
  int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  int v29; // r8d
  char v30; // al
  char v31; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v32; // [rsp+90h] [rbp+18h]

  v32 = a3;
  v4 = *(_DWORD *)(a1 + 168);
  if ( (v4 & 0x10000) != 0
    || (v4 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !a2 && NtCurrentPeb()->Ldr->ShutdownInProgress )
      return 0LL;
  }
  else if ( !a4 )
  {
    v7 = 0;
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    v9 = *(_QWORD *)(a1 + 144);
    v10 = (volatile signed __int32 *)(a1 + 240);
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v12 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v12 )
        {
          if ( v12 )
            *v12 = v10;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v10, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(a1 + 240);
    if ( *(_QWORD *)(a1 + 360) )
    {
      v25 = ZwCancelWaitCompletionPacket(*(_QWORD *)(a1 + 368), 0LL);
      if ( !v25 )
      {
        v13 = 1;
        *(_QWORD *)(a1 + 360) = 0LL;
        v14 = (_BYTE *)(a1 + 464);
        v15 = -(TppCancelTimer(a1, (volatile signed __int32 *)(v9 + 112), 1) != 0) - 1;
        if ( (*(_BYTE *)(a1 + 464) & 4) != 0 )
        {
          TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -1, 0);
          *v14 &= ~4u;
        }
LABEL_17:
        *v14 &= ~1u;
        v16 = *v14 & 0xFD;
        *v14 = v16;
        v17 = v15 != 0;
        if ( !a2 || *(_BYTE *)(a1 + 355) )
          goto LABEL_29;
        if ( !v13 )
        {
          v23 = v32;
          v24 = v16 | 1;
          *(_QWORD *)(a1 + 376) = a2;
          *v14 = v24;
          if ( v23 )
          {
            *v14 = v24 | 2;
            *(_QWORD *)(a1 + 384) = *v23;
          }
LABEL_25:
          if ( v15 > 0 )
          {
            _InterlockedAdd((volatile signed __int32 *)a1, v15);
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
            return v17;
          }
LABEL_29:
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
          if ( v15 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v15) == -v15 )
          {
            v22 = **(void (__fastcall ***)(__int64))(a1 + 8);
            if ( (char *)v22 == (char *)TppFreeWait )
            {
              TppFreeWait(a1);
            }
            else if ( (char *)v22 == (char *)TppTimerpFree )
            {
              TppTimerpFree(a1);
            }
            else
            {
              v22(a1);
            }
          }
          return v17;
        }
        if ( *(_QWORD *)(a1 + 360) )
          goto LABEL_29;
        v18 = *(_QWORD *)(a1 + 144);
        v19 = *(_QWORD *)(a1 + 368);
        v31 = 0;
        *(_QWORD *)(a1 + 360) = a2;
        v20 = ZwAssociateWaitCompletionPacket(v19, *(_QWORD *)(v18 + 64), a2, a1 + 392, a1, 0, 0LL, &v31);
        if ( v20 < 0 )
        {
          *(_QWORD *)(a1 + 360) = 0LL;
          TppRaiseHandleStatus((unsigned int)v20, a2, a1);
        }
        else
        {
          if ( v32 && !v31 )
          {
            v26 = *v32;
            if ( *v32 < 0 )
            {
              v28 = -v26;
            }
            else
            {
              if ( v26 <= MEMORY[0x7FFE0014] )
              {
                LODWORD(v27) = 0;
                goto LABEL_52;
              }
              v28 = v26 - MEMORY[0x7FFE0014];
            }
            v27 = v28 >> 16;
            v29 = 300;
            if ( v27 > 0x12C )
            {
LABEL_53:
              TppSetTimer(a1, (volatile signed __int32 *)(v18 + 112), v32, 0LL, v29);
              v7 = 2;
              goto LABEL_24;
            }
LABEL_52:
            v29 = v27;
            goto LABEL_53;
          }
          v7 = 1;
        }
LABEL_24:
        v15 += v7;
        goto LABEL_25;
      }
      if ( v25 != 259 && v25 != -1073741536 )
        TppRaiseInvalidParameter();
      v14 = (_BYTE *)(a1 + 464);
      v13 = 0;
      v30 = *(_BYTE *)(a1 + 464);
      if ( (v30 & 4) == 0 )
      {
        *v14 = v30 | 4;
        TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), 1, 0);
      }
    }
    else
    {
      v13 = 1;
      v14 = (_BYTE *)(a1 + 464);
    }
    v15 = 0;
    goto LABEL_17;
  }
  TppRaiseInvalidParameter();
  return 0LL;
}
