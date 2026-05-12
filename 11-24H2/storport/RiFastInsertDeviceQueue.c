/*
 * XREFs of RiFastInsertDeviceQueue @ 0x140014290
 * Callers:
 *     RaidInsertDeviceQueue @ 0x140013CA0 (RaidInsertDeviceQueue.c)
 * Callees:
 *     RiFlushDeviceLists @ 0x140028E90 (RiFlushDeviceLists.c)
 */

char __fastcall RiFastInsertDeviceQueue(
        __int64 a1,
        __int64 a2,
        char a3,
        _BYTE *a4,
        LARGE_INTEGER *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  signed __int64 v11; // rbx
  char v12; // bp
  char v13; // r15
  __int64 v14; // rsi
  signed __int64 v15; // rcx
  signed __int64 v16; // rax
  char v17; // al
  bool v18; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v20; // r15
  USHORT DepthSList; // bx
  volatile LONG *v22; // rcx
  char v23; // cl
  volatile LONG *v24; // rbx

  if ( (*(_BYTE *)(a2 + 22) & 0x51) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 88);
    v12 = 0;
    v13 = 0;
    if ( (v11 & 1) != 0 )
      return v13;
    while ( 1 )
    {
      v14 = (v11 >> 2) & 0x3FFFFFFF;
      if ( (int)v14 >= *(_DWORD *)(a1 + 4) )
      {
        if ( *(_BYTE *)(a2 + 22) )
          goto LABEL_46;
        if ( !v12 && !a3 )
        {
          if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 80)) )
            return v13;
          v12 = 1;
        }
        v15 = v11 + 0x100000000LL;
      }
      else
      {
        v15 = v11 + 4;
      }
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v15, v11);
      if ( v11 == v16 )
        break;
      v11 = v16;
      if ( (v16 & 1) != 0 )
        goto LABEL_46;
    }
    v17 = *(_BYTE *)(a2 + 20);
    if ( (int)v14 < *(_DWORD *)(a1 + 4) )
    {
      *a4 = 0;
      *(_BYTE *)(a2 + 20) = v17 & 0xFE;
      goto LABEL_45;
    }
    *a4 = 1;
    v18 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 20) = v17 | 3;
    if ( v18 )
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        PerformanceCounter.QuadPart = 0LL;
LABEL_24:
        *a5 = PerformanceCounter;
        *a6 = 1;
        v20 = v11 / 0x100000000LL;
        *a7 = v11 / 0x100000000LL;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), (PSLIST_ENTRY)((a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL));
        DepthSList = ExQueryDepthSList((PSLIST_HEADER)(a1 + 96));
        if ( DepthSList <= 0x40u )
          goto LABEL_34;
        if ( v12 )
        {
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
          v12 = 0;
        }
        if ( a3 )
        {
          RiFlushDeviceLists(a1);
        }
        else
        {
          v22 = (volatile LONG *)(a1 + 72);
          if ( DepthSList > 0x80u )
          {
            ExAcquireSpinLockExclusiveAtDpcLevel(v22);
          }
          else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v22) )
          {
            goto LABEL_34;
          }
          RiFlushDeviceLists(a1);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        }
LABEL_34:
        if ( (int)v20 + 1 > *(_DWORD *)(a1 + 180) )
        {
          v23 = 0;
          if ( a3 )
          {
            v24 = (volatile LONG *)(a1 + 72);
          }
          else
          {
            if ( v12 )
            {
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
              v12 = 0;
            }
            v24 = (volatile LONG *)(a1 + 72);
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
            v23 = 1;
          }
          if ( (int)v20 + 1 > *(_DWORD *)(a1 + 180) )
            *(_DWORD *)(a1 + 180) = v20 + 1;
          if ( v23 )
            ExReleaseSpinLockExclusiveFromDpcLevel(v24);
        }
LABEL_45:
        v13 = 1;
LABEL_46:
        if ( v12 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
        return v13;
      }
      if ( !UseQPCTime )
      {
LABEL_22:
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        goto LABEL_24;
      }
      v18 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    else
    {
      v18 = UseQPCTime == 0;
    }
    if ( !v18 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      goto LABEL_24;
    }
    goto LABEL_22;
  }
  return 0;
}
