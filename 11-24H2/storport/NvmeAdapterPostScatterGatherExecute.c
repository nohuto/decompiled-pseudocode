/*
 * XREFs of NvmeAdapterPostScatterGatherExecute @ 0x1400D4F00
 * Callers:
 *     NvmeAdapterExecuteXrb @ 0x1400CFAA4 (NvmeAdapterExecuteXrb.c)
 * Callees:
 *     RaCallMiniportBuildIo @ 0x140028560 (RaCallMiniportBuildIo.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeAdapterPostScatterGatherExecute(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v4; // si
  LARGE_INTEGER PerformanceCounter; // rax
  char v7; // si
  __int64 v8; // rax
  char v9; // bp
  LARGE_INTEGER v10; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // al
  char v15; // di
  LARGE_INTEGER v16; // rax

  v2 = StorEtwLoggingEnabled == 0;
  v4 = *(_BYTE *)(a1 + 416);
  *(_QWORD *)(a2 + 216) = a1;
  if ( !v2 && (byte_140171461 & 1) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  }
  v7 = v4 & 0x40;
  if ( !v7 && (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 160);
    if ( v8 )
      *(_BYTE *)(v8 + 141) = -82;
    v9 = RaCallMiniportBuildIo(*(_QWORD *)(a2 + 216) + 168LL);
    if ( StorEtwLoggingEnabled && ((byte_140171461 & 1) != 0 || (byte_140171463 & 2) != 0) )
    {
      if ( UseQPCTime )
        v10 = KeQueryPerformanceCounter(0LL);
      else
        v10.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 704) = v10;
    }
    if ( !v9 )
      return 0LL;
  }
  v12 = *(_QWORD *)(a2 + 160);
  if ( v12 )
    *(_BYTE *)(v12 + 141) = -86;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
  if ( v7 )
  {
    v13 = *(_QWORD *)(a2 + 784);
    if ( v13 )
      v13 = *(_QWORD *)(v13 + 1648) + 64LL;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 536))(
            *(_QWORD *)(a1 + 408) + 16LL,
            v13,
            *(_QWORD *)(a2 + 168));
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 400) + 16LL))(
            *(_QWORD *)(a1 + 408) + 16LL,
            *(_QWORD *)(a2 + 168));
  }
  v15 = v14;
  if ( StorEtwLoggingEnabled && (byte_140171461 & 1) != 0 )
  {
    if ( UseQPCTime )
      v16 = KeQueryPerformanceCounter(0LL);
    else
      v16.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 712) = v16;
  }
  return v15 == 0 ? 0xC0000001 : 0;
}
