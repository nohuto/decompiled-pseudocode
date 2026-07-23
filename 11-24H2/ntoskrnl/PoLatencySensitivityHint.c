/*
 * XREFs of PoLatencySensitivityHint @ 0x14044BDE0
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140A91980 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PpmEventTraceLatencySensitivityHint @ 0x14044BF2C (PpmEventTraceLatencySensitivityHint.c)
 *     PpmTryAcquireLock @ 0x14044BFCC (PpmTryAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14044C05C (PpmCheckCustomRun.c)
 */

void __fastcall PoLatencySensitivityHint(unsigned int a1)
{
  __int64 i; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a1 != 4 || !PpmPerfMultimediaQosSupported )
  {
    for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
    {
      if ( *((_BYTE *)&PpmCurrentProfile[0][61 * dword_140F0B38C + 16] + i + 5) )
      {
        PpmEventTraceLatencySensitivityHint(a1);
        v3 = 0LL;
        v4 = PpmCheckPeriod + MEMORY[0xFFFFF78000000008];
        v5 = PpmPerfLatencyBoostExpiration;
        LOBYTE(v6) = 0;
        while ( v5 < v4 )
        {
          v7 = v5;
          v5 = _InterlockedCompareExchange64(&PpmPerfLatencyBoostExpiration, v4, v5);
          if ( v7 == v5 )
          {
            LOBYTE(v6) = 1;
            break;
          }
          _mm_pause();
        }
        if ( a1 == 4 )
        {
          v3 = PpmPerfDeadlineBoostExpiration;
          while ( v3 < v4 )
          {
            v8 = v3;
            v3 = _InterlockedCompareExchange64(&PpmPerfDeadlineBoostExpiration, v4, v3);
            if ( v8 == v3 )
              goto LABEL_17;
            _mm_pause();
          }
        }
        if ( (_BYTE)v6 )
        {
LABEL_17:
          _InterlockedOr(v9, 0);
          if ( a1 == 4 && v3 <= PpmCheckLastEffectiveExecutionTime || v5 <= PpmCheckLastEffectiveExecutionTime )
          {
            if ( (unsigned __int8)PpmTryAcquireLock(PpmCheckLastEffectiveExecutionTime, v3, v4, v6) )
            {
              PpmCheckCustomRun(3LL);
            }
            else if ( !_InterlockedExchange(&PpmPerfLatencyBoostQueued, 1) )
            {
              ExQueueWorkItem(&PpmPerfLatencyBoostWorkItem, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
            }
          }
        }
        return;
      }
    }
  }
}
