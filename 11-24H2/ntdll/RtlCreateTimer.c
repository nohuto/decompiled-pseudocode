/*
 * XREFs of RtlCreateTimer @ 0x18006D040
 * Callers:
 *     RtlSetTimer @ 0x18015CA30 (RtlSetTimer.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     TpAllocTimer @ 0x18006CE10 (TpAllocTimer.c)
 *     RtlpTpRevertCapture @ 0x18006CFA0 (RtlpTpRevertCapture.c)
 *     RtlpTpDeleteData @ 0x18006D900 (RtlpTpDeleteData.c)
 *     RtlpTpResumeImpersonation @ 0x18006E478 (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x18006ECC0 (RtlpTpInitializeData.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateTimer(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7)
{
  int v10; // ebx
  __int64 Heap; // rax
  __int64 v12; // rdi
  __int64 *v13; // r15
  int v14; // eax
  volatile signed __int32 **v15; // rdx
  unsigned __int64 v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // r8
  int v20; // [rsp+24h] [rbp-94h]
  _QWORD *v21; // [rsp+28h] [rbp-90h]
  HANDLE v22; // [rsp+30h] [rbp-88h] BYREF
  __int64 v23; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v24[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+48h] [rbp-70h]
  __int64 v26; // [rsp+50h] [rbp-68h]
  __int64 v27; // [rsp+58h] [rbp-60h]
  __int128 v28; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v29)(__int64, __int64); // [rsp+70h] [rbp-48h]
  int v30; // [rsp+78h] [rbp-40h]
  int v31; // [rsp+7Ch] [rbp-3Ch]
  int v32; // [rsp+80h] [rbp-38h]

  v24[1] = 0;
  memset_thunk_772440563353939046(v24, 0, 0x44uLL);
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a2 = 0LL;
  v10 = RtlpTpRevertCapture(&v22, a7 & 0x100);
  v20 = v10;
  if ( v10 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v12 = Heap;
    v21 = (_QWORD *)Heap;
    if ( Heap )
    {
      v13 = (__int64 *)(Heap + 64);
      *(_QWORD *)(Heap + 64) = 0LL;
      *(_DWORD *)(Heap + 92) = 0;
      v10 = RtlpTpInitializeData(Heap + 16, a7, v22);
      v20 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      *(_QWORD *)(v12 + 32) = a3;
      *(_QWORD *)(v12 + 40) = a4;
      *(_DWORD *)(v12 + 48) = 0;
      *(_BYTE *)(v12 + 88) = a6 != 0;
      *(_QWORD *)(v12 + 56) = a1;
      *(_QWORD *)(v12 + 72) = 0LL;
      *(_QWORD *)(v12 + 80) = 0LL;
      v24[0] = 3;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0;
      v31 = 1;
      v32 = 72;
      v14 = 0;
      if ( (a7 & 0xE0) != 0 )
      {
        v14 = 2;
        v30 = 2;
      }
      if ( (a7 & 0x10) != 0 )
        v30 = v14 | 1;
      v29 = RtlpTpTimerFinalizationCallback;
      v10 = TpAllocTimer(v13, (__int64)RtlpTpTimerCallback, v12, (__int64)v24);
      v20 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v23 = -10000LL * a5;
      _InterlockedIncrement((volatile signed __int32 *)a1);
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 8), v15, v16);
      v17 = (_QWORD *)(a1 + 24);
      v18 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v18 + 8) != a1 + 24 )
        __fastfail(3u);
      *v21 = v18;
      v21[1] = v17;
      *(_QWORD *)(v18 + 8) = v21;
      *v17 = v21;
      *a2 = v21;
      TpSetTimerEx((_PEB_LDR_DATA *)*v13, (unsigned __int64)&v23, a6, 0LL);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      v12 = 0LL;
      v21 = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    v20 = v10;
  }
LABEL_16:
  if ( v12 )
  {
    RtlpTpDeleteData(v12 + 16);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v21);
    v10 = v20;
  }
  RtlpTpResumeImpersonation(v22);
  return (unsigned int)v10;
}
