/*
 * XREFs of PpmPerfCheckForIllegalProcessorThrottle @ 0x140351630
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x140351020 (PpmPerfSnapDeliveredPerformance.c)
 * Callees:
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1405D5268 (PopDiagTraceIllegalProcessorThrottle.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfCheckForIllegalProcessorThrottle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( PopProcessorThrottleLogInterval )
  {
    v5 = *(_QWORD *)(a1 + 35248);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 35256);
      if ( v6 )
      {
        result = *(_QWORD *)(v5 + 320);
        if ( result )
        {
          if ( *(_BYTE *)(a1 + 35128) )
          {
            guard_dispatch_icall_no_overrides(&v9, a2, a3, a4);
            if ( *(_DWORD *)(v6 + 80) < *(_DWORD *)(v5 + 456) )
            {
              *(_BYTE *)(a1 + 35136) = 0;
            }
            else if ( *(_BYTE *)(a1 + 35136) )
            {
              if ( *(_QWORD *)(a1 + 35144) != v9 )
              {
                v8 = (unsigned int)(*(_DWORD *)(a1 + 35132) + 1);
                *(_DWORD *)(a1 + 35132) = v8;
                if ( !((unsigned int)v8 % PopProcessorThrottleLogInterval) || (_DWORD)v8 == 1 )
                {
                  LODWORD(v8) = KeGetPcr()->Prcb.Number;
                  PopDiagTraceIllegalProcessorThrottle(v8, v9, a1 + 35152);
                }
              }
            }
            else
            {
              *(_BYTE *)(a1 + 35136) = 1;
            }
            result = v9;
            *(_QWORD *)(a1 + 35144) = v9;
          }
        }
      }
    }
  }
  return result;
}
