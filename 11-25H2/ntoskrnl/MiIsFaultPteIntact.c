/*
 * XREFs of MiIsFaultPteIntact @ 0x140246470
 * Callers:
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckVirtualAddress @ 0x140243540 (MiCheckVirtualAddress.c)
 *     MiFindActualFaultingPte @ 0x140246570 (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 ActualFaultingPte; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rbx
  int v16; // [rsp+20h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v17; // [rsp+28h] [rbp-20h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  v8 = ActualFaultingPte;
  if ( ActualFaultingPte )
  {
    v9 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    v12 = 0;
    v13 = v9;
    if ( v8 == a3 )
    {
LABEL_11:
      LOBYTE(v12) = v13 == *a4;
      return v12;
    }
    if ( (v9 & 0x400) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(v9, v10, v11) )
      {
        v17 = 0LL;
        v16 = 0;
        v14 = MiCheckVirtualAddress(a2, &v16, &v17);
        if ( v17 )
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
      }
      else
      {
        if ( qword_140E2D940 )
        {
          if ( (v13 & 0x10) != 0 )
            v13 &= ~0x10uLL;
          else
            v13 &= ~qword_140E2D940;
        }
        v14 = v13 >> 16;
      }
      if ( v14 == a3 )
      {
        v13 = *(_QWORD *)v14;
        goto LABEL_11;
      }
    }
  }
  return 0LL;
}
