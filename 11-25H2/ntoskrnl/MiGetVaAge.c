/*
 * XREFs of MiGetVaAge @ 0x140381820
 * Callers:
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiResetAccessBitPteWorker @ 0x14037CC0C (MiResetAccessBitPteWorker.c)
 *     MiEmptyWorkingSetHelper @ 0x1403808F0 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140380E70 (MiEmptyPte.c)
 *     MiCountWslesInPageTableRange @ 0x140385CD0 (MiCountWslesInPageTableRange.c)
 *     MiProcessWsInSwapFault @ 0x140388C2C (MiProcessWsInSwapFault.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     MiSimpleAgePte @ 0x1404A3CC0 (MiSimpleAgePte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiGetVaAge(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v8; // rdx

  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    return (*(_QWORD *)(48
                      * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                      - 0x220000000000LL) >> 42) & 7;
  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v5 = *(_QWORD *)v2;
    if ( (v3 & 1) != 0 && ((v3 & 0x42) == 0 || (v3 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v8 = *(_QWORD *)(KernelWaitTime + 8 * ((v2 >> 3) & 0x1FF));
          if ( (v8 & 0x20) != 0 )
            HIBYTE(v5) = HIBYTE(v3);
          HIBYTE(v3) = HIBYTE(v5);
          if ( (v8 & 0x42) == 0 )
            HIBYTE(v3) = HIBYTE(v5);
        }
      }
    }
  }
  return HIBYTE(v3) & 0xF;
}
