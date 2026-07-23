/*
 * XREFs of PoEnergyContextCleanup @ 0x1408FFAB0
 * Callers:
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     RtlStateDurationCapture @ 0x140406C40 (RtlStateDurationCapture.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     RtlTimelineBitmapUpdateRange @ 0x140423580 (RtlTimelineBitmapUpdateRange.c)
 *     KeQueryTimelineBitmapTime @ 0x14044B2E4 (KeQueryTimelineBitmapTime.c)
 *     PopEtEnergyContextCleanup @ 0x14099B510 (PopEtEnergyContextCleanup.c)
 *     PopEtEnumEnergyTrackers @ 0x14099BCAC (PopEtEnumEnergyTrackers.c)
 */

_UNKNOWN **__fastcall PoEnergyContextCleanup(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned int TimelineBitmapTime; // r15d
  __int64 v7; // r14
  unsigned int v8; // r8d
  __int64 v9; // r11
  __int64 *v10; // rcx
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *(_QWORD *)(a1 + 1640);
  v12 = 0LL;
  v13 = 0LL;
  if ( v2 )
  {
    v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v5 = 0LL;
    TimelineBitmapTime = KeQueryTimelineBitmapTime();
    v7 = 3LL;
    while ( 1 )
    {
      v8 = RtlStateDurationCapture(v5 + v2 + 104, (unsigned __int64 *)(v5 + v2 + 104), v4);
      if ( v9 == v2 + 104 )
        break;
      if ( v9 == v2 + 112 )
      {
        v10 = (__int64 *)(v2 + 312);
        goto LABEL_6;
      }
LABEL_9:
      v5 += 8LL;
      if ( !--v7 )
      {
        RtlStateDurationCapture(v2 + 416, (unsigned __int64 *)(v2 + 416), v4);
        *(_QWORD *)&v13 = 0LL;
        *(_QWORD *)&v12 = 4LL;
        *((_QWORD *)&v13 + 1) = v2;
        *((_QWORD *)&v12 + 1) = a1;
        PopAcquireRwLockExclusive((unsigned __int64 *)(v2 + 440));
        PopEtEnumEnergyTrackers(v11, &v12);
        PopReleaseRwLock((signed __int64 *)(v2 + 440));
        return (_UNKNOWN **)PopEtEnergyContextCleanup(v2);
      }
    }
    v10 = (__int64 *)(v2 + 304);
LABEL_6:
    if ( v10 )
    {
      if ( v8 )
        RtlTimelineBitmapUpdateRange(v10, TimelineBitmapTime - (v8 >> 12), TimelineBitmapTime);
    }
    goto LABEL_9;
  }
  return result;
}
