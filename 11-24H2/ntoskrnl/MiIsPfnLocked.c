/*
 * XREFs of MiIsPfnLocked @ 0x140443768
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404EF800 (MiDecommitFreePagesTail.c)
 *     MmIsMdlPageLocked @ 0x140BA66F8 (MmIsMdlPageLocked.c)
 * Callees:
 *     MiPfnIsNonPagedPool @ 0x1404437EC (MiPfnIsNonPagedPool.c)
 */

_BOOL8 __fastcall MiIsPfnLocked(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 32);
  return (unsigned __int16)v1 > (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL)
      || (unsigned __int16)v1 > 1u
      || (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL
      || ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 1
      || (*(_QWORD *)a1 & 1) == 0
      || (unsigned int)MiPfnIsNonPagedPool(a1, 0x3FFFFFFFFELL, (unsigned __int16)v1, 1LL) != 0;
}
