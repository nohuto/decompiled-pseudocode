/*
 * XREFs of PopPowerRequestDebounceTimerWorker @ 0x140749BF0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x140A4EFCC (PopPowerRequestHandleRequestUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A50600 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestDebounceTimerWorker(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned int v3; // ebx
  _DWORD *v4; // rdi
  __int64 i; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  v3 = 0;
  v4 = &unk_140E019AC;
  do
  {
    if ( (*v4 & 8) != 0 )
    {
      *v4 &= ~8u;
      PopPowerRequestHandleRequestUpdate(0LL, v3, 0LL);
    }
    ++v3;
    v4 += 12;
  }
  while ( v3 < 6 );
  for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
  {
    if ( (*((_DWORD *)&unk_140E019AC + 12 * i) & 8) != 0 )
    {
      KeCancelTimer2((__int64)&PopPowerRequestDebounceTimer, 0LL, v1, v2);
      v7[0] = 0LL;
      v7[1] = -1LL;
      KeSetTimer2((__int64)&PopPowerRequestDebounceTimer, -50000000LL, 0LL, (__int64)v7);
      return PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
    }
  }
  return PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
}
