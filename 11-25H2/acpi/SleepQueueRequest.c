/*
 * XREFs of SleepQueueRequest @ 0x14003B5B0
 * Callers:
 *     SleepStall @ 0x14003B4C0 (SleepStall.c)
 * Callees:
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 */

__int64 __fastcall SleepQueueRequest(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 v6; // r10
  _QWORD *v7; // r8
  __int64 v8; // rdx
  __int64 **v9; // r9
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v13; // rdx
  __int64 *v14; // rax
  _QWORD *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0LL;
  v2 = a2;
  v4 = PushFrame(a1, 1346718803, 0x40u, (__int64)ProcessSleep, &v15);
  if ( v4 >= 0 )
  {
    byte_140088F20 = KeAcquireSpinLockRaiseToDpc(&gmutSleep);
    v5 = &SleepQueue;
    v6 = MEMORY[0xFFFFF78000000008];
    v7 = v15;
    v8 = MEMORY[0xFFFFF78000000008] + 10000 * v2;
    v15[6] = v8;
    v7[7] = a1;
    do
    {
      v9 = (__int64 **)(v5 + 1);
      v5 = (__int64 *)v5[1];
      if ( v5 == &SleepQueue )
        goto LABEL_4;
    }
    while ( v8 < v5[2] );
    v13 = *v5;
    v14 = v7 + 4;
    if ( *(__int64 **)(*v5 + 8) == v5 )
    {
      *v14 = v13;
      v7[5] = v5;
      *(_QWORD *)(v13 + 8) = v14;
      *v5 = (__int64)v14;
LABEL_4:
      if ( *v9 != &SleepQueue )
        goto LABEL_7;
      v10 = SleepQueue;
      v11 = v7 + 4;
      if ( *(__int64 **)(SleepQueue + 8) == &SleepQueue )
      {
        *v11 = SleepQueue;
        v7[5] = &SleepQueue;
        *(_QWORD *)(v10 + 8) = v11;
        SleepQueue = (__int64)(v7 + 4);
        ExSetTimer(SleepTimer, v6 - v7[6], 0LL, 0LL);
LABEL_7:
        KeReleaseSpinLock(&gmutSleep, byte_140088F20);
        return (unsigned int)v4;
      }
    }
    __fastfail(3u);
  }
  return (unsigned int)v4;
}
