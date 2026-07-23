/*
 * XREFs of NtAllocateUuids @ 0x140A7C950
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExpAllocateUuids @ 0x140A7CB64 (ExpAllocateUuids.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140A7CC9C (ExpUuidSaveSequenceNumberIf.c)
 */

NTSTATUS __cdecl NtAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PCHAR Seed)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rsi
  __int64 *v13; // rax
  __int64 *v14; // rdi
  NTSTATUS v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char v20; // di
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  ULONG v24; // [rsp+24h] [rbp-44h] BYREF
  ULONG v25; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v26[3]; // [rsp+30h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-20h]

  v26[0] = 0LL;
  v24 = 0;
  v25 = 0;
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
  v13 = KeAbPreAcquire((__int64)&ExpUuidLock, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v13, (__int64)&ExpUuidLock);
  if ( v14 )
    *((_BYTE *)v14 + 10) = 1;
  v15 = ExpAllocateUuids(v26, &v24, &v25);
  if ( v15 >= 0 )
  {
    ExpUuidSaveSequenceNumberIf();
    v20 = HIBYTE(NlsMbOemCodePageTag);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)v12, v21, v22, v23);
    *Time = (ULARGE_INTEGER)v26[0];
    *Range = v24;
    *Sequence = v25;
    *(_DWORD *)Seed = *(int *)((char *)&dword_140FD722C + 2);
    *((_WORD *)Seed + 2) = word_140FD7232;
    return v20 == 0 ? 0x40020056 : 0;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)v12, v16, v17, v18);
    return v15;
  }
}
