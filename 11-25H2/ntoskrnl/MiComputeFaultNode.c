/*
 * XREFs of MiComputeFaultNode @ 0x14037C200
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 */

__int64 __fastcall MiComputeFaultNode(__int64 a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY **a3)
{
  __int64 v3; // rax
  char *v6; // rcx
  unsigned int v8; // ebx
  struct _LIST_ENTRY *Address; // rsi
  char v10; // cl
  unsigned __int64 v11; // rax
  volatile _KAFFINITY_EX *ActiveProcessors; // rcx
  unsigned __int64 v13; // rdx
  unsigned int Flink; // eax
  char v16; // dl

  v3 = *(_QWORD *)(a1 + 16);
  v6 = (char *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v3 & 1) != 0 && (*v6 == 2 || (v16 = *v6, *v6 == 7) || v16 == 8 || v16 == 4) )
  {
    v8 = *(_DWORD *)((v3 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    if ( v8 )
    {
      *(_DWORD *)(a1 + 80) |= 0x20000u;
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
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 184LL) & 0xF) == 0 )
  {
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( Address
      || ((v13 = *(_QWORD *)a1, *(_QWORD *)a1 < 0xFFFFF68000000000uLL) || v13 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v11
       || ActiveProcessors[4].StaticBitmap[13]
       || ActiveProcessors[4].StaticBitmap[14]
       || LOBYTE(ActiveProcessors[4].Reserved))
      && (MiLockVadTree(1, v13),
          Address = MiLocateAddress(*(_QWORD *)a1),
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1),
          (*a3 = Address) != 0LL) )
    {
      Flink = (unsigned int)Address[3].Flink;
      v8 = (Flink >> 12) & 0x7F;
      if ( v8 )
      {
LABEL_16:
        *(_DWORD *)(a1 + 80) |= 0x20000u;
        return v8;
      }
      if ( (Flink & 0x200000) == 0 )
        a2 = Address[4].Blink->Flink;
    }
    if ( a2 )
    {
      v8 = (LODWORD(a2[3].Blink) >> 20) & 0x7F;
      if ( v8 )
        goto LABEL_16;
    }
  }
  return v8;
}
