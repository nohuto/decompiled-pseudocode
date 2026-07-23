/*
 * XREFs of MiGetWsleProtection @ 0x140202860
 * Callers:
 *     MiPteForTrimmedProto @ 0x140202660 (MiPteForTrimmedProto.c)
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetWsleProtection(unsigned __int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ecx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v9; // r8

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v4 = *(_QWORD *)v2;
    if ( (v3 & 1) != 0 && ((v3 & 0x42) == 0 || (v3 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v9 = *(_QWORD *)(KernelWaitTime + 8 * ((v2 >> 3) & 0x1FF));
          if ( (v9 & 0x20) != 0 )
            LOBYTE(v4) = v3 | 0x20;
          LOBYTE(v3) = v4 | 0x42;
          if ( (v9 & 0x42) == 0 )
            LOBYTE(v3) = v4;
        }
      }
    }
  }
  v5 = (a2 >> 4) & 7;
  if ( !v5 )
    return v5;
  if ( (v3 & 0x18) != 8 )
  {
    if ( (v3 & 0x10) != 0 )
      v5 |= 8u;
    return v5;
  }
  return v5 | 0x18;
}
