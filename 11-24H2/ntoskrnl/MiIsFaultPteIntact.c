/*
 * XREFs of MiIsFaultPteIntact @ 0x140302E80
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckVirtualAddress @ 0x1402FF5B0 (MiCheckVirtualAddress.c)
 *     MiFindActualFaultingPte @ 0x140302F80 (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 ActualFaultingPte; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rbx
  int v14; // [rsp+20h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v15; // [rsp+28h] [rbp-20h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  v8 = ActualFaultingPte;
  if ( ActualFaultingPte )
  {
    v9 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    v10 = 0;
    v11 = v9;
    if ( v8 == a3 )
    {
LABEL_11:
      LOBYTE(v10) = v11 == *a4;
      return v10;
    }
    if ( (v9 & 0x400) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(v9) )
      {
        v15 = 0LL;
        v14 = 0;
        v12 = MiCheckVirtualAddress(a2, &v14, &v15);
        if ( v15 )
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
      }
      else
      {
        if ( qword_140E2DB80 )
        {
          if ( (v11 & 0x10) != 0 )
            v11 &= ~0x10uLL;
          else
            v11 &= ~qword_140E2DB80;
        }
        v12 = v11 >> 16;
      }
      if ( v12 == a3 )
      {
        v11 = *(_QWORD *)v12;
        goto LABEL_11;
      }
    }
  }
  return 0LL;
}
