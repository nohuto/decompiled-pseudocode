/*
 * XREFs of MiConvertFaultStatus @ 0x1402163C0
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 * Callees:
 *     EtwTracePageFault @ 0x140216580 (EtwTracePageFault.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1402CC0B0 (FsRtlIsTotalDeviceFailure.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiCheckAvailablePagesForFaultDelay @ 0x1403FC0A0 (MiCheckAvailablePagesForFaultDelay.c)
 *     MiPageAvailable @ 0x140442ECC (MiPageAvailable.c)
 *     MiDelayFaultingThread @ 0x14048F028 (MiDelayFaultingThread.c)
 */

__int64 __fastcall MiConvertFaultStatus(__int64 a1, unsigned int a2, NTSTATUS a3)
{
  __int64 v6; // r9
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v9; // rax
  __int16 v10; // bx
  __int64 v11; // rbp
  int v12; // eax
  unsigned __int64 v13; // rax

  if ( a3 == -1073740748 )
    return 873LL;
  if ( a3 < 0
    && (a3 == -1073741670 || a3 == -1073741801 || a3 == -1073741663 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a3)) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 4) == 0 && (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) == 0 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      if ( (v9 & 1) != 0 )
      {
        v13 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( *(_BYTE *)v13 == 5 && (*(_DWORD *)(v13 + 56) & 0xC) != 0 )
          return 3221225688LL;
      }
      v10 = 0;
      v11 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 56) + 174LL));
      v12 = MiCheckAvailablePagesForFaultDelay(v11, (_DWORD)CurrentThread, a3, (*(_DWORD *)(a1 + 80) & 0x10) == 0, 0LL);
      if ( v12 )
      {
        v10 = 10;
        if ( (v12 & 2) != 0 )
          v10 = 10;
      }
      if ( *(_QWORD *)(v11 + 18752) < 0x400uLL )
        v10 = 10;
      if ( (*(_DWORD *)(a1 + 80) & 4) != 0 || v10 )
        MiDelayFaultingThread();
      if ( !(unsigned int)MiPageAvailable(v11, 0LL) )
        MiWaitForFreePage(v11, (*(_DWORD *)(a1 + 80) >> 3) & 2);
      return 873LL;
    }
    return 3221225495LL;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 104) && (PerfGlobalGroupMask & 0x1000) != 0 )
    {
      v6 = 0LL;
      if ( (*(_QWORD *)(a1 + 16) & 1) == 0 )
        v6 = *(_QWORD *)(a1 + 16);
      v7 = *(_DWORD *)(a1 + 80) >> 8;
      LOBYTE(v7) = BYTE1(*(_DWORD *)(a1 + 80)) & 1;
      EtwTracePageFault((unsigned int)a3, *(_QWORD *)a1, v7, v6);
    }
    return (unsigned int)a3;
  }
}
