/*
 * XREFs of MiComputeFaultNode @ 0x140343670
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 */

__int64 __fastcall MiComputeFaultNode(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rax
  char *v7; // rcx
  unsigned int v9; // ebx
  __int64 Address; // rsi
  char v11; // cl
  unsigned __int64 v12; // rax
  volatile _KAFFINITY_EX *ActiveProcessors; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v17; // eax
  char v18; // dl

  v4 = a1[2];
  v7 = (char *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v4 & 1) != 0 && (*v7 == 2 || (v18 = *v7, *v7 == 8) || v18 == 7 || v18 == 4) )
  {
    v9 = *(_DWORD *)((v4 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    if ( v9 )
    {
LABEL_18:
      *((_DWORD *)a1 + 20) |= 0x20000u;
      return v9;
    }
  }
  else
  {
    v9 = 0;
  }
  Address = *a3;
  v11 = v4;
  v12 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v11 & 1) == 0 )
    v12 = 0LL;
  if ( (*(_DWORD *)(a1[7] + 184LL) & 0xF) == 0 )
  {
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( Address
      || ((v14 = *a1, v15 = 0xFFFFF68000000000uLL, *a1 < 0xFFFFF68000000000uLL)
       || (v15 = 0xFFFFF6FFFFFFFFFFuLL, v14 > 0xFFFFF6FFFFFFFFFFuLL))
      && (v12
       || ActiveProcessors[4].StaticBitmap[13]
       || ActiveProcessors[4].StaticBitmap[14]
       || LOBYTE(ActiveProcessors[4].Reserved))
      && (MiLockVadTree(1, v14, v15, a4),
          Address = MiLocateAddress(*a1),
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1),
          (*a3 = Address) != 0) )
    {
      v17 = *(_DWORD *)(Address + 48);
      v9 = (v17 >> 12) & 0x7F;
      if ( v9 )
        goto LABEL_18;
      if ( (v17 & 0x200000) == 0 )
        a2 = **(_QWORD **)(Address + 72);
    }
    if ( a2 )
    {
      v9 = (*(_DWORD *)(a2 + 56) >> 20) & 0x7F;
      if ( v9 )
        goto LABEL_18;
    }
  }
  return v9;
}
