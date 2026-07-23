/*
 * XREFs of EtwpReserveTraceBuffer @ 0x18001D870
 * Callers:
 *     EtwpTraceUmEvent @ 0x18001D120 (EtwpTraceUmEvent.c)
 *     EtwpTraceUmMessage @ 0x1800D25AC (EtwpTraceUmMessage.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18001A8A0 (RtlQueryPerformanceCounter.c)
 *     EtwpSwitchBuffer @ 0x18001D9B0 (EtwpSwitchBuffer.c)
 *     RtlGetSystemTimePrecise @ 0x18001DB80 (RtlGetSystemTimePrecise.c)
 */

__int64 __fastcall EtwpReserveTraceBuffer(__int64 a1, unsigned int a2, unsigned int a3, LARGE_INTEGER *a4, _QWORD *a5)
{
  unsigned int v6; // edi
  unsigned int v8; // ebp
  unsigned int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // rax
  unsigned __int32 v12; // edx
  __int64 v13; // rdi

  v6 = a3;
  if ( a2 <= *(_DWORD *)(a1 + 196) )
  {
    v8 = *(_DWORD *)(a1 + 192);
    v9 = *(_DWORD *)(a1 + 188);
    v10 = (a2 + 7) & 0xFFFFFFF8;
    if ( a3 >= v9 )
      v6 = a3 % v9;
    do
    {
      v11 = *(_QWORD *)(a1 + 8LL * v6 + 560);
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
        if ( *(_DWORD *)(v11 + 44) == 1 && *(_DWORD *)(v11 + 8) <= v8 )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), v10);
          if ( v12 + v10 <= v8 )
          {
            v13 = v11 + v12;
            *a5 = v11;
            if ( a4 )
            {
              if ( *(_DWORD *)(a1 + 16) == 2 )
              {
                *a4 = RtlGetSystemTimePrecise();
              }
              else if ( *(_DWORD *)(a1 + 16) == 3 )
              {
                a4->QuadPart = __rdtsc();
              }
              else
              {
                RtlQueryPerformanceCounter(a4);
              }
            }
            return v13;
          }
          if ( v12 <= v8 )
            *(_DWORD *)(v11 + 4) = v12;
        }
      }
    }
    while ( (unsigned __int8)EtwpSwitchBuffer(a1, v11, v6) == 1 );
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 368));
  if ( (*(_DWORD *)(a1 + 308) & 0x10000) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 496)
                                                    + 12LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 4LL * v6)
                                                    + 4));
  return 0LL;
}
