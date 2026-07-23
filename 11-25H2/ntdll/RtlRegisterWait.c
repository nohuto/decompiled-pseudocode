/*
 * XREFs of RtlRegisterWait @ 0x18003C400
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18003C978 (RtlpTpResumeImpersonation.c)
 *     TpAllocWait @ 0x18003CCE0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111770 (TpSetDefaultPoolMaxThreads.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenThreadToken @ 0x1801636A0 (NtOpenThreadToken.c)
 *     NtDuplicateToken @ 0x180163A60 (NtDuplicateToken.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlRegisterWait(
        PHANDLE WaitHandle,
        HANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG Milliseconds,
        ULONG Flags)
{
  NTSTATUS v9; // eax
  int v10; // esi
  HANDLE *Heap; // rax
  HANDLE *NewTokenHandle; // rdi
  HANDLE v13; // rsi
  int v14; // eax
  NTSTATUS v15; // eax
  char v17; // [rsp+30h] [rbp-A8h]
  int v18; // [rsp+34h] [rbp-A4h]
  HANDLE *BaseAddress; // [rsp+38h] [rbp-A0h]
  HANDLE TokenHandle; // [rsp+40h] [rbp-98h] BYREF
  __int64 ThreadInformation; // [rsp+48h] [rbp-90h] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+60h] [rbp-78h] BYREF

  v17 = 0;
  *(&CallbackEnviron.Version + 1) = 0;
  memset_thunk_772440563353939046(&CallbackEnviron, 0, 0x44uLL);
  TokenHandle = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( (char *)Handle - 1 > (char *)0xFFFFFFFFFFFFFFFCLL || !Function )
    return -1073741811;
  *WaitHandle = 0LL;
  ThreadInformation = 0LL;
  TokenHandle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    goto LABEL_7;
  v9 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, (Flags & 0x100 | 0x200) >> 7, 1u, &TokenHandle);
  v10 = v9;
  if ( v9 < 0 )
  {
    v18 = v9;
    goto LABEL_8;
  }
  ThreadInformation = 0LL;
  v10 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  if ( v10 < 0 )
  {
    NtClose(TokenHandle);
    TokenHandle = 0LL;
    v18 = v10;
  }
  else
  {
LABEL_7:
    v18 = 0;
    v10 = 0;
  }
LABEL_8:
  if ( v10 < 0 )
  {
    NewTokenHandle = 0LL;
  }
  else
  {
    Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    NewTokenHandle = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      Heap[6] = 0LL;
      v13 = TokenHandle;
      *((_DWORD *)Heap + 2) = Flags;
      *Heap = 0LL;
      if ( (Flags & 0xFFFF0000) != 0 )
        TpSetDefaultPoolMaxThreads(HIWORD(Flags));
      if ( v13
        && (Flags & 0x100) != 0
        && (v15 = NtDuplicateToken(v13, 4u, 0LL, 0, TokenImpersonation, NewTokenHandle), v10 = v15, v15 < 0) )
      {
        v18 = v15;
      }
      else
      {
        v17 = 1;
        NewTokenHandle[2] = 0LL;
        *((_DWORD *)NewTokenHandle + 6) = 0;
        NewTokenHandle[4] = Function;
        NewTokenHandle[5] = Context;
        NewTokenHandle[7] = Handle;
        if ( Milliseconds == -1 )
        {
          NewTokenHandle[8] = 0LL;
          NewTokenHandle[9] = 0LL;
        }
        else
        {
          NewTokenHandle[8] = (HANDLE)Milliseconds;
          NewTokenHandle[8] = (HANDLE)(-10000LL * Milliseconds);
          NewTokenHandle[9] = NewTokenHandle + 8;
        }
        NewTokenHandle[10] = 0LL;
        *((_DWORD *)NewTokenHandle + 22) = 0;
        CallbackEnviron.Version = 3;
        memset(&CallbackEnviron.Pool, 0, 52);
        CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
        CallbackEnviron.Size = 72;
        v14 = 0;
        if ( (Flags & 0xC4) != 0 )
        {
          CallbackEnviron.u.Flags = 2;
          v14 = 2;
        }
        if ( (Flags & 0x10) != 0 )
          CallbackEnviron.u.Flags = v14 | 1;
        CallbackEnviron.FinalizationCallback = (void (__fastcall *)(_TP_CALLBACK_INSTANCE *, void *))RtlpTpWaitFinalizationCallback;
        v10 = TpAllocWait((PTP_WAIT *)NewTokenHandle + 6, RtlpTpWaitCallback, NewTokenHandle, &CallbackEnviron);
        v18 = v10;
        if ( v10 >= 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)NewTokenHandle + 2);
          *WaitHandle = NewTokenHandle;
          TpSetWaitEx((PTP_WAIT)NewTokenHandle[6], Handle, (PLARGE_INTEGER)NewTokenHandle[9], 0LL);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)NewTokenHandle + 2);
          NewTokenHandle = 0LL;
          BaseAddress = 0LL;
          v10 = 0;
          v18 = 0;
        }
      }
    }
    else
    {
      v10 = -1073741801;
      v18 = -1073741801;
    }
  }
  if ( NewTokenHandle )
  {
    if ( v17 )
    {
      if ( *NewTokenHandle )
        NtClose(*NewTokenHandle);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v10 = v18;
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v10;
}
