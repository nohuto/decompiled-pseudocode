/*
 * XREFs of RtlCreateTimer @ 0x18003B9A0
 * Callers:
 *     RtlSetTimer @ 0x18015DF90 (RtlSetTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpRevertCapture @ 0x18003B900 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18003C978 (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x18003D1C0 (RtlpTpInitializeData.c)
 *     RtlpTpDeleteData @ 0x18003DF64 (RtlpTpDeleteData.c)
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     TpAllocTimer @ 0x1800461E0 (TpAllocTimer.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateTimer(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v10; // ebx
  __int64 Heap; // rax
  __int64 v12; // rdi
  _QWORD *v13; // r15
  int v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // r8
  int v18; // [rsp+24h] [rbp-94h]
  _QWORD *v19; // [rsp+28h] [rbp-90h]
  HANDLE v20; // [rsp+30h] [rbp-88h] BYREF
  __int64 v21; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v22[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v23; // [rsp+48h] [rbp-70h]
  __int64 v24; // [rsp+50h] [rbp-68h]
  __int64 v25; // [rsp+58h] [rbp-60h]
  __int128 v26; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v27)(__int64, __int64); // [rsp+70h] [rbp-48h]
  int v28; // [rsp+78h] [rbp-40h]
  int v29; // [rsp+7Ch] [rbp-3Ch]
  int v30; // [rsp+80h] [rbp-38h]

  v22[1] = 0;
  memset_thunk_772440563353939046(v22, 0, 0x44uLL);
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a2 = 0LL;
  v10 = RtlpTpRevertCapture(&v20, a7 & 0x100);
  v18 = v10;
  if ( v10 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    v12 = Heap;
    v19 = (_QWORD *)Heap;
    if ( Heap )
    {
      v13 = (_QWORD *)(Heap + 64);
      *(_QWORD *)(Heap + 64) = 0LL;
      *(_DWORD *)(Heap + 92) = 0;
      v10 = RtlpTpInitializeData(Heap + 16, a7, v20);
      v18 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      *(_QWORD *)(v12 + 32) = a3;
      *(_QWORD *)(v12 + 40) = a4;
      *(_DWORD *)(v12 + 48) = 0;
      *(_BYTE *)(v12 + 88) = a6 != 0;
      *(_QWORD *)(v12 + 56) = a1;
      *(_QWORD *)(v12 + 72) = 0LL;
      *(_QWORD *)(v12 + 80) = 0LL;
      v22[0] = 3;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0;
      v29 = 1;
      v30 = 72;
      v14 = 0;
      if ( (a7 & 0xE0) != 0 )
      {
        v14 = 2;
        v28 = 2;
      }
      if ( (a7 & 0x10) != 0 )
        v28 = v14 | 1;
      v27 = RtlpTpTimerFinalizationCallback;
      v10 = TpAllocTimer(v13, RtlpTpTimerCallback, v12, v22, 1);
      v18 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v21 = -10000LL * a5;
      _InterlockedIncrement((volatile signed __int32 *)a1);
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 8));
      v15 = (_QWORD *)(a1 + 24);
      v16 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v16 + 8) != a1 + 24 )
        __fastfail(3u);
      *v19 = v16;
      v19[1] = v15;
      *(_QWORD *)(v16 + 8) = v19;
      *v15 = v19;
      *a2 = v19;
      TpSetTimerEx(*v13, &v21, a6, 0LL);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      v12 = 0LL;
      v19 = 0LL;
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
    RtlpTpDeleteData(v12 + 16);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v19);
    v10 = v18;
  }
  RtlpTpResumeImpersonation(v20);
  return (unsigned int)v10;
}
