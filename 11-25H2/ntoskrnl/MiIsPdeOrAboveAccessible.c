/*
 * XREFs of MiIsPdeOrAboveAccessible @ 0x14040AE10
 * Callers:
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     MiReplacePageTablePage @ 0x14040B438 (MiReplacePageTablePage.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiIsLazyStampedPte @ 0x14040AF1C (MiIsLazyStampedPte.c)
 */

_BOOL8 __fastcall MiIsPdeOrAboveAccessible(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v6; // rcx
  __int64 DemandZeroPte; // rax

  v1 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v3 = *(_QWORD *)a1;
    if ( (v1 & 1) == 0 )
      goto LABEL_3;
    if ( ((v1 & 0x42) == 0 || (v1 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v6 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
          if ( (v6 & 0x20) != 0 )
            v3 = v1 | 0x20;
          v1 = v3 | 0x42;
          if ( (v6 & 0x42) == 0 )
            v1 = v3;
        }
      }
    }
  }
  if ( (v1 & 1) != 0 )
    return 1LL;
LABEL_3:
  if ( !v1 || (v1 & 0x400) != 0 )
    return 1LL;
  if ( (v1 & 0x800) != 0 )
  {
    if ( ((v1 >> 5) & 0x1F) != 0x18 )
      return (unsigned int)MiIsLazyStampedPte(v1) == 0;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(16);
    if ( v1 != DemandZeroPte )
      return (unsigned int)MiIsLazyStampedPte(v1) == 0;
  }
  return 0LL;
}
