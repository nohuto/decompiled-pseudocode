/*
 * XREFs of MiInitializeMirroring @ 0x140C55B40
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiLockDynamicMemoryExclusive @ 0x14066EFB8 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14066FB1C (MiUnlockDynamicMemoryExclusive.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 *     MiUpdateMirrorBitmaps @ 0x140ABBD20 (MiUpdateMirrorBitmaps.c)
 */

__int64 MiInitializeMirroring()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rbp
  unsigned __int64 v2; // rbx
  unsigned int i; // edi
  __int64 v4; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  stru_140E301A8.Parameter = (void *)-1LL;
  stru_140E301A8.List.Flink = 0LL;
  stru_140E30190.Header.WaitListHead.Blink = &stru_140E30190.Header.WaitListHead;
  stru_140E30190.Header.WaitListHead.Flink = &stru_140E30190.Header.WaitListHead;
  stru_140E301A8.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  LOWORD(stru_140E30190.Header.Lock) = 1;
  stru_140E30190.Header.Size = 6;
  stru_140E30190.Header.SignalState = 1;
  CurrentThread = KeGetCurrentThread();
  v1 = qword_140E2DD20;
  v2 = (((unsigned __int64)(qword_140E2DD20 + 8) >> 3) + 4095) >> 12;
  for ( i = 0; i < 2; ++i )
  {
    v4 = MiReservePtes((__int64)&qword_140E376A8, v2);
    if ( !v4 || !(unsigned int)MiInitializeDynamicBitmap((__int64)&v6[i], v4 << 25 >> 16, v1 + 1, 6) )
      return 0LL;
    *(_QWORD *)&v6[i] = 0LL;
  }
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  xmmword_140E301D0[0] = v6[0];
  xmmword_140E301E0 = v6[1];
  if ( (dword_140FC5204 & 1) != 0 && !(unsigned int)MiUpdateMirrorBitmaps(0LL, 0LL) )
    return 0LL;
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  return 1LL;
}
