/*
 * XREFs of NtAllocateUuids @ 0x140A87A30
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpAllocateUuids @ 0x14085A6EC (ExpAllocateUuids.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140A87C44 (ExpUuidSaveSequenceNumberIf.c)
 */

NTSTATUS __cdecl NtAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PCHAR Seed)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rsi
  char *v13; // rax
  char *v14; // rdi
  NTSTATUS v15; // edi
  char v17; // di
  ULONG v18; // [rsp+24h] [rbp-44h] BYREF
  ULONG v19; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v20[3]; // [rsp+30h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-20h]

  v20[0] = 0LL;
  v18 = 0;
  v19 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    if ( ((unsigned __int8)Time & 3) != 0 )
      goto LABEL_6;
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Time < 0x7FFFFFFF0000LL )
      v9 = (__int64)Time;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 7) = *(_BYTE *)(v9 + 7);
    if ( ((unsigned __int8)Range & 3) != 0 )
      goto LABEL_6;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Range < 0x7FFFFFFF0000LL )
      v10 = (__int64)Range;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( ((unsigned __int8)Sequence & 3) != 0 )
LABEL_6:
      ExRaiseDatatypeMisalignment();
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Sequence < 0x7FFFFFFF0000LL )
      v11 = (__int64)Sequence;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( (unsigned __int64)Seed < 0x7FFFFFFF0000LL )
      v8 = (__int64)Seed;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 5) = *(_BYTE *)(v8 + 5);
  }
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  v13 = (char *)KeAbPreAcquire((__int64)&ExpUuidLock, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v13, (__int64)&ExpUuidLock);
  if ( v14 )
    v14[10] = 1;
  v15 = ExpAllocateUuids((__int64)v20, &v18, &v19);
  if ( v15 >= 0 )
  {
    ExpUuidSaveSequenceNumberIf();
    v17 = HIBYTE(NlsMbOemCodePageTag);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)v12);
    *Time = (ULARGE_INTEGER)v20[0];
    *Range = v18;
    *Sequence = v19;
    *(_DWORD *)Seed = *(int *)((char *)&dword_140FD8254 + 2);
    *((_WORD *)Seed + 2) = word_140FD825A;
    return v17 == 0 ? 0x40020056 : 0;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)v12);
    return v15;
  }
}
