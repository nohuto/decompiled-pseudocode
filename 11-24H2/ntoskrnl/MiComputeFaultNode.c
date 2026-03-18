/*
 * XREFs of MiComputeFaultNode @ 0x1402FA290
 * Callers:
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 */

__int64 __fastcall MiComputeFaultNode(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  char *v6; // rcx
  unsigned int v8; // ebx
  __int64 Address; // rsi
  char v10; // cl
  unsigned __int64 v11; // rax
  volatile _KAFFINITY_EX *ActiveProcessors; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v16; // eax
  char v17; // dl

  v3 = a1[2];
  v6 = (char *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v3 & 1) != 0 && (*v6 == 2 || (v17 = *v6, *v6 == 8) || v17 == 7 || v17 == 4) )
  {
    v8 = *(_DWORD *)((v3 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    if ( v8 )
    {
LABEL_18:
      *((_DWORD *)a1 + 20) |= 0x20000u;
      return v8;
    }
  }
  else
  {
    v8 = 0;
  }
  Address = *a3;
  v10 = v3;
  v11 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) == 0 )
    v11 = 0LL;
  if ( (*(_DWORD *)(a1[7] + 184LL) & 0xF) == 0 )
  {
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( Address
      || ((v13 = *a1, v14 = 0xFFFFF68000000000uLL, *a1 < 0xFFFFF68000000000uLL)
       || (v14 = 0xFFFFF6FFFFFFFFFFuLL, v13 > 0xFFFFF6FFFFFFFFFFuLL))
      && (v11
       || ActiveProcessors[4].StaticBitmap[13]
       || ActiveProcessors[4].StaticBitmap[14]
       || LOBYTE(ActiveProcessors[4].Reserved))
      && (MiLockVadTree(1, v13, v14),
          Address = MiLocateAddress(*a1),
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1),
          (*a3 = Address) != 0) )
    {
      v16 = *(_DWORD *)(Address + 48);
      v8 = (v16 >> 12) & 0x7F;
      if ( v8 )
        goto LABEL_18;
      if ( (v16 & 0x200000) == 0 )
        a2 = **(_QWORD **)(Address + 72);
    }
    if ( a2 )
    {
      v8 = (*(_DWORD *)(a2 + 56) >> 20) & 0x7F;
      if ( v8 )
        goto LABEL_18;
    }
  }
  return v8;
}
