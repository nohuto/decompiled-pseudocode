/*
 * XREFs of MiMarkFileOnlyPfnGood @ 0x14067B63C
 * Callers:
 *     MiUnlinkBadPages @ 0x1406747FC (MiUnlinkBadPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiUnlinkPageFromBadList @ 0x14039398C (MiUnlinkPageFromBadList.c)
 */

int __fastcall MiMarkFileOnlyPfnGood(ULONG_PTR a1)
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
      ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A7A0);
      MiUnlinkPageFromBadList(a1, 128);
      ExReleaseSpinLockExclusiveFromDpcLevel(dword_140E3A7A0);
      v4 = *(_DWORD *)(a1 + 32);
      HIBYTE(v4) &= ~0x10u;
      *(_DWORD *)(a1 + 32) = v4;
      LODWORD(v2) = MiPfnReferenceCountIsZero(a1, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
    }
  }
  return v2;
}
