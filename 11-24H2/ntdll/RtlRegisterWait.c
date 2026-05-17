/*
 * XREFs of RtlRegisterWait @ 0x18006DF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18006E478 (RtlpTpResumeImpersonation.c)
 *     TpAllocWait @ 0x18006E7E0 (TpAllocWait.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800EDE60 (TpSetDefaultPoolMaxThreads.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenThreadToken @ 0x180162110 (NtOpenThreadToken.c)
 *     NtDuplicateToken @ 0x1801624D0 (NtDuplicateToken.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlRegisterWait(
        __int64 *a1,
        _LIST_ENTRY *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v9; // r8
  int v10; // eax
  int v11; // esi
  __int64 Heap; // rax
  __int64 v13; // rdi
  HANDLE v14; // rsi
  int v15; // eax
  volatile signed __int32 **v16; // rdx
  unsigned __int64 v17; // r8
  int v18; // eax
  int v20; // [rsp+20h] [rbp-B8h]
  __int64 v21; // [rsp+28h] [rbp-B0h]
  char v22; // [rsp+30h] [rbp-A8h]
  int v23; // [rsp+34h] [rbp-A4h]
  unsigned __int64 v24; // [rsp+38h] [rbp-A0h]
  HANDLE Handle; // [rsp+40h] [rbp-98h] BYREF
  __int64 v26; // [rsp+48h] [rbp-90h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v29; // [rsp+68h] [rbp-70h]
  __int64 v30; // [rsp+70h] [rbp-68h]
  __int64 v31; // [rsp+78h] [rbp-60h]
  __int128 v32; // [rsp+80h] [rbp-58h]
  __int64 (__fastcall *v33)(__int64, __int64); // [rsp+90h] [rbp-48h]
  int v34; // [rsp+98h] [rbp-40h]
  int v35; // [rsp+9Ch] [rbp-3Ch]
  int v36; // [rsp+A0h] [rbp-38h]

  v22 = 0;
  v28[1] = 0;
  memset_thunk_772440563353939046(v28, 0, 0x44uLL);
  Handle = 0LL;
  v24 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( (unsigned __int64)&a2[-1].Blink + 7 > 0xFFFFFFFFFFFFFFFCuLL || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v26 = 0LL;
  Handle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    goto LABEL_7;
  LOBYTE(v9) = 1;
  v10 = NtOpenThreadToken(-2LL, (a6 & 0x100 | 0x200) >> 7, v9, &Handle);
  v11 = v10;
  if ( v10 < 0 )
  {
    v23 = v10;
    goto LABEL_8;
  }
  v26 = 0LL;
  v11 = NtSetInformationThread(-2LL, 5LL, &v26);
  if ( v11 < 0 )
  {
    NtClose(Handle);
    Handle = 0LL;
    v23 = v11;
  }
  else
  {
LABEL_7:
    v23 = 0;
    v11 = 0;
  }
LABEL_8:
  if ( v11 < 0 )
  {
    v13 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v13 = Heap;
    v24 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 48) = 0LL;
      v14 = Handle;
      *(_DWORD *)(Heap + 8) = a6;
      *(_QWORD *)Heap = 0LL;
      if ( (a6 & 0xFFFF0000) != 0 )
        TpSetDefaultPoolMaxThreads(HIWORD(a6));
      if ( v14 && (a6 & 0x100) != 0 && (v21 = v13, v20 = 2, v18 = NtDuplicateToken(v14, 4LL, 0LL), v11 = v18, v18 < 0) )
      {
        v23 = v18;
      }
      else
      {
        v22 = 1;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_DWORD *)(v13 + 24) = 0;
        *(_QWORD *)(v13 + 32) = a3;
        *(_QWORD *)(v13 + 40) = a4;
        *(_QWORD *)(v13 + 56) = a2;
        if ( a5 == -1 )
        {
          *(_QWORD *)(v13 + 64) = 0LL;
          *(_QWORD *)(v13 + 72) = 0LL;
        }
        else
        {
          *(_QWORD *)(v13 + 64) = a5;
          *(_QWORD *)(v13 + 64) = -10000LL * a5;
          *(_QWORD *)(v13 + 72) = v13 + 64;
        }
        *(_QWORD *)(v13 + 80) = 0LL;
        *(_DWORD *)(v13 + 88) = 0;
        v28[0] = 3;
        v29 = 0LL;
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0;
        v35 = 1;
        v36 = 72;
        v15 = 0;
        if ( (a6 & 0xC4) != 0 )
        {
          v34 = 2;
          v15 = 2;
        }
        if ( (a6 & 0x10) != 0 )
          v34 = v15 | 1;
        v33 = RtlpTpWaitFinalizationCallback;
        v11 = TpAllocWait(v13 + 48, RtlpTpWaitCallback, v13, v28, v20, v21);
        v23 = v11;
        if ( v11 >= 0 )
        {
          RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v13 + 16), v16, v17);
          *a1 = v13;
          TpSetWaitEx(*(_PEB_LDR_DATA **)(v13 + 48), a2, *(_LIST_ENTRY ***)(v13 + 72), 0LL);
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v13 + 16));
          v13 = 0LL;
          v24 = 0LL;
          v11 = 0;
          v23 = 0;
        }
      }
    }
    else
    {
      v11 = -1073741801;
      v23 = -1073741801;
    }
  }
  if ( v13 )
  {
    if ( v22 )
    {
      if ( *(_QWORD *)v13 )
        NtClose(*(HANDLE *)v13);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v24);
    v11 = v23;
  }
  RtlpTpResumeImpersonation(Handle);
  return (unsigned int)v11;
}
