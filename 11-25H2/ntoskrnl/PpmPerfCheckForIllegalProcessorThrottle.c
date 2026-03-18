/*
 * XREFs of PpmPerfCheckForIllegalProcessorThrottle @ 0x1403B0830
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1403B0220 (PpmPerfSnapDeliveredPerformance.c)
 * Callees:
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1405D0908 (PopDiagTraceIllegalProcessorThrottle.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfCheckForIllegalProcessorThrottle(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( PopProcessorThrottleLogInterval )
  {
    v3 = *(_QWORD *)(a1 + 35248);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 35256);
      if ( v4 )
      {
        result = *(_QWORD *)(v3 + 320);
        if ( result )
        {
          if ( *(_BYTE *)(a1 + 35128) )
          {
            guard_dispatch_icall_no_overrides(&v7, a2);
            if ( *(_DWORD *)(v4 + 80) < *(_DWORD *)(v3 + 456) )
            {
              *(_BYTE *)(a1 + 35136) = 0;
            }
            else if ( *(_BYTE *)(a1 + 35136) )
            {
              if ( *(_QWORD *)(a1 + 35144) != v7 )
              {
                v6 = (unsigned int)(*(_DWORD *)(a1 + 35132) + 1);
                *(_DWORD *)(a1 + 35132) = v6;
                if ( !((unsigned int)v6 % PopProcessorThrottleLogInterval) || (_DWORD)v6 == 1 )
                {
                  LODWORD(v6) = KeGetPcr()->Prcb.Number;
                  PopDiagTraceIllegalProcessorThrottle(v6, v7, a1 + 35152);
                }
              }
            }
            else
            {
              *(_BYTE *)(a1 + 35136) = 1;
            }
            result = v7;
            *(_QWORD *)(a1 + 35144) = v7;
          }
        }
      }
    }
  }
  return result;
}
