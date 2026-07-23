/*
 * XREFs of KeDispatchSecondaryInterrupt @ 0x14046F5A0
 * Callers:
 *     HalpInvokeIsrForGsiv @ 0x14046F550 (HalpInvokeIsrForGsiv.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiInterruptDispatchCommon @ 0x1403AE3B8 (KiInterruptDispatchCommon.c)
 *     KiAcquireSecondarySignalListLock @ 0x1405B9C38 (KiAcquireSecondarySignalListLock.c)
 *     KiReleaseSecondarySignalListLock @ 0x1405B9D68 (KiReleaseSecondarySignalListLock.c)
 */

char __fastcall KeDispatchSecondaryInterrupt(unsigned int a1, int a2, int *a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int128 *v4; // rdi
  char v5; // si
  __int64 v7; // rcx
  __int64 v8; // rdx
  bool v9; // zf
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v10[1] = v10;
  v10[0] = v10;
  CurrentIrql = KeGetCurrentIrql();
  v4 = (__int128 *)v10;
  if ( !CurrentIrql )
    v4 = 0LL;
  v5 = KiInterruptDispatchCommon(1u, a1, (a2 & 0x100000) != 0, v4, a3);
  if ( CurrentIrql )
  {
    v11 = 0;
    if ( *(__int128 **)v4 != v4 )
    {
      KiAcquireSecondarySignalListLock(&v11);
      v7 = KiSecondarySignalList;
      v8 = qword_140F10518;
      if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
        || *(__int64 **)qword_140F10518 != &KiSecondarySignalList
        || *(__int128 **)(*(_QWORD *)v4 + 8LL) != v4
        || **((__int128 ***)v4 + 1) != v4 )
      {
        __fastfail(3u);
      }
      v9 = KiSecondarySignalDpcRunning == 0;
      *(_QWORD *)qword_140F10518 = v4;
      qword_140F10518 = *((_QWORD *)v4 + 1);
      *(_QWORD *)qword_140F10518 = &KiSecondarySignalList;
      *((_QWORD *)v4 + 1) = v8;
      if ( v9 )
      {
        KiSecondarySignalDpcRunning = 1;
        KeInsertQueueDpc(&KiSecondarySignalDpc, 0LL, 0LL);
      }
      LOBYTE(v7) = v11;
      KiReleaseSecondarySignalListLock(v7);
    }
  }
  return v5;
}
