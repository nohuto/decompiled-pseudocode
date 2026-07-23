/*
 * XREFs of MiConvertFaultStatus @ 0x140260910
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x140260640 (FsRtlIsTotalDeviceFailure.c)
 *     EtwTracePageFault @ 0x140260AD0 (EtwTracePageFault.c)
 *     MiDelayFaultingThread @ 0x140260C98 (MiDelayFaultingThread.c)
 *     MiPageAvailable @ 0x140260D7C (MiPageAvailable.c)
 *     MiCheckAvailablePagesForFaultDelay @ 0x140260E00 (MiCheckAvailablePagesForFaultDelay.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiConvertFaultStatus(__int64 a1, unsigned int a2, NTSTATUS a3)
{
  __int64 v6; // r9
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax

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
        v16 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( *(_BYTE *)v16 == 5 && (*(_DWORD *)(v16 + 56) & 0xC) != 0 )
          return 3221225688LL;
      }
      v10 = 0;
      v11 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 56) + 174LL));
      v12 = MiCheckAvailablePagesForFaultDelay(v11, (_DWORD)CurrentThread, a3, (*(_DWORD *)(a1 + 80) & 0x10) == 0, 0LL);
      if ( v12 )
      {
        v10 = 65546;
        if ( (v12 & 2) != 0 )
          v10 = 196618;
      }
      v13 = 10LL;
      if ( *(_QWORD *)(v11 + 18752) < 0x400uLL )
        v10 = 10;
      if ( (*(_DWORD *)(a1 + 80) & 4) != 0 || (v13 = v10, (_WORD)v10) )
        MiDelayFaultingThread(v13);
      if ( !(unsigned int)MiPageAvailable(v11, 0LL) )
        MiWaitForFreePage(v11, (*(_DWORD *)(a1 + 80) >> 3) & 2, v14, v15);
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
