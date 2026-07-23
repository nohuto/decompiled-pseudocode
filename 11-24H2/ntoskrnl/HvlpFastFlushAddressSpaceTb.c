/*
 * XREFs of HvlpFastFlushAddressSpaceTb @ 0x14039F2D4
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x14039E4BC (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14039F4A0 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     EtwTraceTimedEvent @ 0x14039F830 (EtwTraceTimedEvent.c)
 *     HvlpAffinityToVirtualAffinity @ 0x14039FD50 (HvlpAffinityToVirtualAffinity.c)
 *     EtwpGetHostPerfCounter @ 0x1403F98CC (EtwpGetHostPerfCounter.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1406B6100 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r10
  int v4; // r9d
  unsigned int v5; // r9d
  char v6; // di
  __int64 result; // rax
  int v8; // ebx
  unsigned int v9; // r8d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-9h] BYREF
  __int64 v14; // [rsp+38h] [rbp-1h]
  __int128 v15; // [rsp+40h] [rbp+7h] BYREF
  __int128 v16; // [rsp+50h] [rbp+17h]
  _QWORD v17[2]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v18; // [rsp+70h] [rbp+37h]

  v14 = 2LL;
  v3 = a1;
  v4 = (a3 == 0 ? 4 : 0) | 2;
  if ( a1 )
    v4 = a3 == 0 ? 4 : 0;
  if ( a2 )
  {
    v18 = HvlpAffinityToVirtualAffinity(*(_QWORD *)(a2 + 8));
  }
  else
  {
    v5 = v4 | 1;
    v18 = 0LL;
  }
  v17[1] = v5;
  v17[0] = v3;
  LODWORD(v14) = 65538;
  v15 = 0LL;
  v16 = 0LL;
  if ( (BYTE4(xmmword_140FC6B50) & 0x10) == 0 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  LODWORD(v13) = 0;
  v8 = 0;
  v6 = 1;
  if ( qword_140FCFC80 )
  {
    v9 = *(_DWORD *)(qword_140FCFC80 + 4520);
    while ( _BitScanForward((unsigned int *)&v11, v9) )
    {
      v9 &= v9 - 1;
      v12 = qword_140FCFC80 + 32LL * (unsigned int)v11 + 4556;
      if ( v12 && (*(_DWORD *)(v12 + 20) & 0x10) != 0 )
        v8 |= 1 << *(_BYTE *)(qword_140FCFC80 + 2 * v11 + 4505);
    }
    if ( (v8 & 2) == 0 )
      goto LABEL_18;
  }
  else
  {
    LOBYTE(v8) = 30;
  }
  *(LARGE_INTEGER *)&v15 = KeQueryPerformanceCounter(0LL);
LABEL_18:
  if ( (v8 & 4) != 0 )
    *((LARGE_INTEGER *)&v15 + 1) = RtlGetSystemTimePrecise();
  else
    *((_QWORD *)&v15 + 1) = 0LL;
  if ( (v8 & 8) != 0 )
    *(_QWORD *)&v16 = __rdtsc();
  else
    *(_QWORD *)&v16 = 0LL;
  if ( (v8 & 0x10) != 0 )
    *((_QWORD *)&v16 + 1) = EtwpGetHostPerfCounter(v11);
  else
    *((_QWORD *)&v16 + 1) = 0LL;
LABEL_7:
  result = HvcallpExtendedFastHypercall(v14, v17, 24LL);
  if ( v6 )
  {
    v13 = 0x100000002LL;
    return EtwTraceTimedEvent(3954, -1610612720, (unsigned int)&v13, 8, 5246466, (__int64)&v15);
  }
  return result;
}
