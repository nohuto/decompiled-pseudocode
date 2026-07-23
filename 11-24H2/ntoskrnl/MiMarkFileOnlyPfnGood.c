/*
 * XREFs of MiMarkFileOnlyPfnGood @ 0x14067C81C
 * Callers:
 *     MiUnlinkBadPages @ 0x1406759CC (MiUnlinkBadPages.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromBadList @ 0x1403F6AAC (MiUnlinkPageFromBadList.c)
 */

int __fastcall MiMarkFileOnlyPfnGood(__int64 a1)
{
  __int64 v2; // rax
  int v4; // [rsp+30h] [rbp+8h]

  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
  {
    LODWORD(v2) = *(_DWORD *)(a1 + 32);
    if ( !(_WORD)v2
      && ((*(_BYTE *)(a1 + 34) & 7) != 5
       || *(__int64 *)(a1 + 40) < 0
       || (v2 = *(_QWORD *)(a1 + 8)) != 0
       || *(_QWORD *)(a1 + 16)) )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A8E0);
      MiUnlinkPageFromBadList(a1, 128);
      ExReleaseSpinLockExclusiveFromDpcLevel(dword_140E3A8E0);
      v4 = *(_DWORD *)(a1 + 32);
      HIBYTE(v4) &= ~0x10u;
      *(_DWORD *)(a1 + 32) = v4;
      LODWORD(v2) = MiPfnReferenceCountIsZero(a1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
    }
  }
  return v2;
}
