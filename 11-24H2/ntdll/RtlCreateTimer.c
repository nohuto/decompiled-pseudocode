/*
 * XREFs of RtlCreateTimer @ 0x180089920
 * Callers:
 *     RtlSetTimer @ 0x18015ADF0 (RtlSetTimer.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TpAllocTimer @ 0x1800896F0 (TpAllocTimer.c)
 *     RtlpTpRevertCapture @ 0x180089880 (RtlpTpRevertCapture.c)
 *     RtlpTpDeleteData @ 0x18008A1E0 (RtlpTpDeleteData.c)
 *     RtlpTpResumeImpersonation @ 0x18008AD58 (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x18008B5A0 (RtlpTpInitializeData.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCreateTimer(
        HANDLE TimerQueueHandle,
        PHANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG DueTime,
        ULONG Period,
        ULONG Flags)
{
  int v10; // ebx
  char *Heap; // rax
  _QWORD *v12; // rdi
  PTP_TIMER *v13; // r15
  int v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // r8
  int v18; // [rsp+24h] [rbp-94h]
  _QWORD *BaseAddress; // [rsp+28h] [rbp-90h]
  HANDLE TokenHandle; // [rsp+30h] [rbp-88h] BYREF
  LARGE_INTEGER v21; // [rsp+38h] [rbp-80h] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+40h] [rbp-78h] BYREF

  *(&CallbackEnviron.Version + 1) = 0;
  memset_thunk_772440563353939046(&CallbackEnviron, 0, 0x44uLL);
  v21.QuadPart = 0LL;
  TokenHandle = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  *Handle = 0LL;
  v10 = RtlpTpRevertCapture(&TokenHandle, Flags & 0x100);
  v18 = v10;
  if ( v10 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v12 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v13 = (PTP_TIMER *)(Heap + 64);
      *((_QWORD *)Heap + 8) = 0LL;
      *((_DWORD *)Heap + 23) = 0;
      v10 = RtlpTpInitializeData((PHANDLE)Heap + 2);
      v18 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v12[4] = Function;
      v12[5] = Context;
      *((_DWORD *)v12 + 12) = 0;
      *((_BYTE *)v12 + 88) = Period != 0;
      v12[7] = TimerQueueHandle;
      v12[9] = 0LL;
      v12[10] = 0LL;
      CallbackEnviron.Version = 3;
      memset(&CallbackEnviron.Pool, 0, 52);
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 72;
      v14 = 0;
      if ( (Flags & 0xE0) != 0 )
      {
        v14 = 2;
        CallbackEnviron.u.Flags = 2;
      }
      if ( (Flags & 0x10) != 0 )
        CallbackEnviron.u.Flags = v14 | 1;
      CallbackEnviron.FinalizationCallback = (void (__fastcall *)(_TP_CALLBACK_INSTANCE *, void *))RtlpTpTimerFinalizationCallback;
      v10 = TpAllocTimer(v13, RtlpTpTimerCallback, v12, &CallbackEnviron);
      v18 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v21.QuadPart = -10000LL * DueTime;
      _InterlockedIncrement((volatile signed __int32 *)TimerQueueHandle);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      v15 = (char *)TimerQueueHandle + 24;
      v16 = *((_QWORD *)TimerQueueHandle + 3);
      if ( *(HANDLE *)(v16 + 8) != (char *)TimerQueueHandle + 24 )
        __fastfail(3u);
      *BaseAddress = v16;
      BaseAddress[1] = v15;
      *(_QWORD *)(v16 + 8) = BaseAddress;
      *v15 = BaseAddress;
      *Handle = BaseAddress;
      TpSetTimerEx(*v13, &v21, Period, 0);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      v12 = 0LL;
      BaseAddress = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    v18 = v10;
  }
LABEL_16:
  if ( v12 )
  {
    RtlpTpDeleteData(v12 + 2);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v10 = v18;
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v10;
}
