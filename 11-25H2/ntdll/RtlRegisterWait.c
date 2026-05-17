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

__int64 __fastcall RtlRegisterWait(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v9; // r8
  int v10; // eax
  int v11; // esi
  __int64 Heap; // rax
  __int64 v13; // rdi
  HANDLE v14; // rsi
  int v15; // eax
  int v16; // eax
  char v18; // [rsp+30h] [rbp-A8h]
  int v19; // [rsp+34h] [rbp-A4h]
  __int64 v20; // [rsp+38h] [rbp-A0h]
  HANDLE Handle; // [rsp+40h] [rbp-98h] BYREF
  __int64 v22; // [rsp+48h] [rbp-90h] BYREF
  _DWORD v24[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v25; // [rsp+68h] [rbp-70h]
  __int64 v26; // [rsp+70h] [rbp-68h]
  __int64 v27; // [rsp+78h] [rbp-60h]
  __int128 v28; // [rsp+80h] [rbp-58h]
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-48h]
  int v30; // [rsp+98h] [rbp-40h]
  int v31; // [rsp+9Ch] [rbp-3Ch]
  int v32; // [rsp+A0h] [rbp-38h]

  v18 = 0;
  v24[1] = 0;
  memset_thunk_772440563353939046(v24, 0, 0x44uLL);
  Handle = 0LL;
  v20 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFCuLL || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v22 = 0LL;
  Handle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    goto LABEL_7;
  LOBYTE(v9) = 1;
  v10 = NtOpenThreadToken(-2LL, (a6 & 0x100 | 0x200) >> 7, v9, &Handle);
  v11 = v10;
  if ( v10 < 0 )
  {
    v19 = v10;
    goto LABEL_8;
  }
  v22 = 0LL;
  v11 = NtSetInformationThread(-2LL, 5LL, &v22);
  if ( v11 < 0 )
  {
    NtClose(Handle);
    Handle = 0LL;
    v19 = v11;
  }
  else
  {
LABEL_7:
    v19 = 0;
    v11 = 0;
  }
LABEL_8:
  if ( v11 < 0 )
  {
    v13 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    v13 = Heap;
    v20 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 48) = 0LL;
      v14 = Handle;
      *(_DWORD *)(Heap + 8) = a6;
      *(_QWORD *)Heap = 0LL;
      if ( (a6 & 0xFFFF0000) != 0 )
        TpSetDefaultPoolMaxThreads(HIWORD(a6));
      if ( v14 && (a6 & 0x100) != 0 && (v16 = NtDuplicateToken(v14, 4LL, 0LL), v11 = v16, v16 < 0) )
      {
        v19 = v16;
      }
      else
      {
        v18 = 1;
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
        v24[0] = 3;
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0LL;
        v29 = 0LL;
        v30 = 0;
        v31 = 1;
        v32 = 72;
        v15 = 0;
        if ( (a6 & 0xC4) != 0 )
        {
          v30 = 2;
          v15 = 2;
        }
        if ( (a6 & 0x10) != 0 )
          v30 = v15 | 1;
        v29 = RtlpTpWaitFinalizationCallback;
        v11 = TpAllocWait(v13 + 48, RtlpTpWaitCallback, v13, v24);
        v19 = v11;
        if ( v11 >= 0 )
        {
          RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v13 + 16));
          *a1 = v13;
          TpSetWaitEx(*(_QWORD *)(v13 + 48), a2, *(_QWORD *)(v13 + 72), 0LL);
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v13 + 16));
          v13 = 0LL;
          v20 = 0LL;
          v11 = 0;
          v19 = 0;
        }
      }
    }
    else
    {
      v11 = -1073741801;
      v19 = -1073741801;
    }
  }
  if ( v13 )
  {
    if ( v18 )
    {
      if ( *(_QWORD *)v13 )
        NtClose(*(HANDLE *)v13);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v20);
    v11 = v19;
  }
  RtlpTpResumeImpersonation(Handle);
  return (unsigned int)v11;
}
