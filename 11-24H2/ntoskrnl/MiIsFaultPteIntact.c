/*
 * XREFs of MiIsFaultPteIntact @ 0x14030CD60
 * Callers:
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckVirtualAddress @ 0x140309D30 (MiCheckVirtualAddress.c)
 *     MiFindActualFaultingPte @ 0x14030CE60 (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 ActualFaultingPte; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rbx
  int v15; // [rsp+20h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v16; // [rsp+28h] [rbp-20h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  v8 = ActualFaultingPte;
  if ( ActualFaultingPte )
  {
    v9 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    v11 = 0;
    v12 = v9;
    if ( v8 == a3 )
    {
LABEL_11:
      LOBYTE(v11) = v12 == *a4;
      return v11;
    }
    if ( (v9 & 0x400) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(v9, v10) )
      {
        v16 = 0LL;
        v15 = 0;
        v13 = MiCheckVirtualAddress(a2, &v15, &v16);
        if ( v16 )
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
      }
      else
      {
        if ( qword_140E2DCC0 )
        {
          if ( (v12 & 0x10) != 0 )
            v12 &= ~0x10uLL;
          else
            v12 &= ~qword_140E2DCC0;
        }
        v13 = v12 >> 16;
      }
      if ( v13 == a3 )
      {
        v12 = *(_QWORD *)v13;
        goto LABEL_11;
      }
    }
  }
  return 0LL;
}
