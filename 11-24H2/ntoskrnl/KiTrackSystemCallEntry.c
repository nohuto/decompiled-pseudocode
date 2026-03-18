/*
 * XREFs of KiTrackSystemCallEntry @ 0x14073D460
 * Callers:
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 * Callees:
 *     KeIsTraceCallbackAllowed @ 0x1403282EC (KeIsTraceCallbackAllowed.c)
 *     PerfInfoLogSysCallEntry @ 0x140349900 (PerfInfoLogSysCallEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     KiSystemServiceTraceTableCompareFunction @ 0x14073D444 (KiSystemServiceTraceTableCompareFunction.c)
 */

__int64 __fastcall KiTrackSystemCallEntry(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // edi
  int v6; // eax
  __int64 v7; // rax

  if ( (unsigned int)KeIsTraceCallbackAllowed(KeGetCurrentThread()->PreviousMode) )
  {
    v4 = *(_QWORD *)KiSystemServiceTraceCallbackTable;
    if ( (*(_BYTE *)(KiSystemServiceTraceCallbackTable + 8) & 1) != 0 && v4 )
      v4 ^= KiSystemServiceTraceCallbackTable;
    v5 = *(_BYTE *)(KiSystemServiceTraceCallbackTable + 8) & 1;
    while ( v4 )
    {
      v6 = KiSystemServiceTraceTableCompareFunction(a1, v4);
      if ( v6 >= 0 )
      {
        if ( v6 <= 0 )
          break;
        v7 = *(_QWORD *)(v4 + 8);
      }
      else
      {
        v7 = *(_QWORD *)v4;
      }
      if ( v5 && v7 )
        v4 ^= v7;
      else
        v4 = v7;
    }
    if ( v4 && *(_BYTE *)(v4 + 40) && KiDynamicTraceEnabled )
    {
      _InterlockedIncrement(&KiSystemServiceTraceCallbacksActive);
      if ( *(_BYTE *)(v4 + 40) )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 48), *(unsigned int *)(v4 + 32), a2);
      _InterlockedDecrement(&KiSystemServiceTraceCallbacksActive);
    }
  }
  else
  {
    v4 = 0LL;
  }
  if ( (BYTE8(PerfGlobalGroupMask) & 0x40) != 0 )
    PerfInfoLogSysCallEntry(a1);
  return v4;
}
