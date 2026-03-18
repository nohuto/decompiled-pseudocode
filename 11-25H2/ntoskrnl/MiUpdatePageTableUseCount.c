/*
 * XREFs of MiUpdatePageTableUseCount @ 0x1403DEED0
 * Callers:
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiZeroFault @ 0x1402429D0 (MiZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiExpandSharedZeroCluster @ 0x14037C52C (MiExpandSharedZeroCluster.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

unsigned __int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1, int a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v13; // rdx

  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  result = 0xFFFFF6FB7DBEDF68uLL;
  if ( ((a1 >> 18) & 0x3FFFFFF8) != 0x3DBEDF68 )
  {
    v5 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v10 = *(_QWORD *)v3;
      if ( (v5 & 1) != 0 && ((v5 & 0x42) == 0 || (v5 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v13 = *(_QWORD *)(KernelWaitTime + 8 * ((v3 >> 3) & 0x1FF));
            if ( (v13 & 0x20) != 0 )
              v10 = v5 | 0x20;
            v5 = v10 | 0x42;
            if ( (v13 & 0x42) == 0 )
              v5 = v10;
          }
        }
      }
    }
    v6 = 48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    if ( (*(_DWORD *)(v6 + 36) & 0x4000000) != 0 )
      v8 = HIDWORD(*(_QWORD *)v6);
    else
      v8 = *(_QWORD *)(v6 + 16) >> 16;
    v9 = (unsigned int)(a2 + v8);
    if ( (*(_DWORD *)(v6 + 36) & 0x4000000) != 0 )
      *(_QWORD *)v6 = (v9 << 32) ^ (*(_QWORD *)v6 ^ (v9 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
    else
      *(_QWORD *)(v6 + 16) = (v9 << 16) ^ (*(_QWORD *)(v6 + 16) ^ (v9 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
