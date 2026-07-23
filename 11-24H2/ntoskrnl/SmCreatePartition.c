/*
 * XREFs of SmCreatePartition @ 0x140A34664
 * Callers:
 *     MiMakePartitionActive @ 0x140485044 (MiMakePartitionActive.c)
 *     PspSetJobMemoryPartition @ 0x140778014 (PspSetJobMemoryPartition.c)
 *     SmProcessConfigRequest @ 0x140797D74 (SmProcessConfigRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmPartitionCleanup @ 0x1407976A4 (SmPartitionCleanup.c)
 *     SmPartitionInitialize @ 0x140797794 (SmPartitionInitialize.c)
 *     MmManagePartitionMemoryInformation @ 0x1408F7014 (MmManagePartitionMemoryInformation.c)
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
  char *v11; // rax
  signed __int8 v12; // cf
  char *v13; // r14
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
    v8 = SmAllocEx(0xD40uLL, 0x61506D53u, v7);
    v9 = v8;
    if ( v8 )
    {
      SmPartitionInitialize(v8);
      *(_QWORD *)(v9 + 2096) = a1;
      *(_QWORD *)(v9 + 2224) = SmGlobals;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v11 = (char *)KeAbPreAcquire((__int64)&qword_140E28908, 0LL);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E28908, 0LL);
      v13 = v11;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&qword_140E28908, v11, (__int64)&qword_140E28908);
      if ( v13 )
        v13[10] = 1;
      if ( !*(_QWORD *)(a1 + 24) )
      {
        if ( dword_140E28930 )
        {
          v14 = (_QWORD *)qword_140E28900;
          v15 = (_QWORD *)(v9 + 2120);
          if ( *(__int64 **)qword_140E28900 != &qword_140E288F8 )
            __fastfail(3u);
          *v15 = &qword_140E288F8;
          *(_QWORD *)(v9 + 2128) = v14;
          *v14 = v15;
          qword_140E28900 = v9 + 2120;
        }
        *(_QWORD *)(a1 + 24) = v9;
        v9 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E28908, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E28908);
      KeAbPostRelease((ULONG_PTR)&qword_140E28908);
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
