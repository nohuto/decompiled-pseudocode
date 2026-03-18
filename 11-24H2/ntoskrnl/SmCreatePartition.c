/*
 * XREFs of SmCreatePartition @ 0x140A3ECF4
 * Callers:
 *     MiMakePartitionActive @ 0x14048A21C (MiMakePartitionActive.c)
 *     PspSetJobMemoryPartition @ 0x140777E54 (PspSetJobMemoryPartition.c)
 *     SmProcessConfigRequest @ 0x140797C64 (SmProcessConfigRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     SmAllocEx @ 0x14044AB68 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SmPartitionCleanup @ 0x140797594 (SmPartitionCleanup.c)
 *     SmPartitionInitialize @ 0x140797684 (SmPartitionInitialize.c)
 *     MmManagePartitionMemoryInformation @ 0x1409344F4 (MmManagePartitionMemoryInformation.c)
 */

__int64 __fastcall SmCreatePartition(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int64 v4; // r14
  int v5; // esi
  unsigned int i; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rax
  signed __int8 v12; // cf
  _QWORD *v13; // r14
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _BYTE v16[4]; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v17; // [rsp+24h] [rbp-114h]
  int v18; // [rsp+28h] [rbp-110h]
  unsigned __int64 v19; // [rsp+50h] [rbp-E8h]

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v4 = 0LL;
    v5 = -1;
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      memset_0(v16, 0, 0xF0uLL);
      v17 = i;
      v18 = -1;
      MmManagePartitionMemoryInformation((ULONG **)a1, (__int64)v16);
      if ( v19 > v4 )
      {
        v4 = v19;
        v5 = i;
      }
    }
    v7 = v5 | 0x80000000;
    if ( v5 == -1 )
      v7 = -1;
    v8 = SmAllocEx(3392LL, 1632660819LL, v7);
    v9 = v8;
    if ( v8 )
    {
      SmPartitionInitialize(v8);
      *(_QWORD *)(v9 + 2096) = a1;
      *(_QWORD *)(v9 + 2224) = SmGlobals;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v11 = KeAbPreAcquire((__int64)&qword_140E287C8, 0LL);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E287C8, 0LL);
      v13 = v11;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&qword_140E287C8, (__int64)v11, (__int64)&qword_140E287C8);
      if ( v13 )
        *((_BYTE *)v13 + 10) = 1;
      if ( !*(_QWORD *)(a1 + 24) )
      {
        if ( dword_140E287F0 )
        {
          v14 = (_QWORD *)qword_140E287C0;
          v15 = (_QWORD *)(v9 + 2120);
          if ( *(__int64 **)qword_140E287C0 != &qword_140E287B8 )
            __fastfail(3u);
          *v15 = &qword_140E287B8;
          *(_QWORD *)(v9 + 2128) = v14;
          *v14 = v15;
          qword_140E287C0 = v9 + 2120;
        }
        *(_QWORD *)(a1 + 24) = v9;
        v9 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E287C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E287C8);
      KeAbPostRelease((ULONG_PTR)&qword_140E287C8);
      KeLeaveCriticalRegion();
      if ( v9 )
      {
        SmPartitionCleanup(v9);
        CmSiFreeMemory((PPRIVILEGE_SET)v9);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
