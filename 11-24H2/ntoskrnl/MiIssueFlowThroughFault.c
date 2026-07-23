/*
 * XREFs of MiIssueFlowThroughFault @ 0x140426F68
 * Callers:
 *     MiHandleCollidedFault @ 0x140426D4C (MiHandleCollidedFault.c)
 * Callees:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 */

__int64 __fastcall MiIssueFlowThroughFault(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        _DWORD *a7)
{
  char v7; // bl
  struct _KTHREAD *CurrentThread; // r11
  int v11; // r10d

  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v11 = *(_DWORD *)(a4 + 192);
  *a6 = 0LL;
  *a7 = 2;
  if ( (v11 & 0x200) != 0 && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2
    || CurrentThread == *(struct _KTHREAD **)(a4 + 152)
    || (CurrentThread->SameThreadTransientFlags & 2) != 0
    || CurrentThread->Process[3].StackCount.Value && (*(_QWORD *)(a4 + 256) || (v11 & 0x20) != 0) )
  {
    v7 = 1;
  }
  if ( *(__int64 *)(a5 + 40) < 0 && (*(_DWORD *)(a5 + 16) & 0x400LL) != 0 )
  {
    if ( (CurrentThread->WaitBlock[3].SpareLong
       || _bittest((const signed __int32 *)&CurrentThread->116, 0xAu)
       || *(_BYTE *)(a1 + 68)
       || v7)
      && (v11 & 0x80u) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *a7 = 1;
      return MiResolveMappedFileFault(a1, a2, a3, a6);
    }
    return 0LL;
  }
  if ( !BYTE6(CurrentThread[1].Queue) && (v11 & 0x20) == 0 && !v7 || (v11 & 0x80u) != 0 )
    return 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *a7 = 1;
  return MiResolvePageFileFault(a1, (__int64 *)a2, a3, a6);
}
