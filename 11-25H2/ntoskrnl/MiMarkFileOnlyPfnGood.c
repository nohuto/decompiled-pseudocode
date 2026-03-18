/*
 * XREFs of MiMarkFileOnlyPfnGood @ 0x14066FE7C
 * Callers:
 *     MiUnlinkBadPages @ 0x140668D9C (MiUnlinkBadPages.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkPageFromBadList @ 0x1403BA1C4 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiMarkFileOnlyPfnGood(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h]

  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
  {
    result = *(unsigned int *)(a1 + 32);
    if ( !(_WORD)result
      && ((*(_BYTE *)(a1 + 34) & 7) != 5
       || *(__int64 *)(a1 + 40) < 0
       || (result = *(_QWORD *)(a1 + 8)) != 0
       || *(_QWORD *)(a1 + 16)) )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A560);
      MiUnlinkPageFromBadList(a1, 128);
      ExReleaseSpinLockExclusiveFromDpcLevel(dword_140E3A560);
      v3 = *(_DWORD *)(a1 + 32);
      HIBYTE(v3) &= ~0x10u;
      *(_DWORD *)(a1 + 32) = v3;
      return MiPfnReferenceCountIsZero(a1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
    }
  }
  return result;
}
