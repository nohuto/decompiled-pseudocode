/*
 * XREFs of MiIsPageInIoHugeRangeTransition @ 0x14038ED50
 * Callers:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiDereferenceIoHugeRange @ 0x140670D38 (MiDereferenceIoHugeRange.c)
 *     MiDeleteStaleCacheMaps @ 0x140676A50 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     MiIsPageInHugePfn @ 0x14038ED20 (MiIsPageInHugePfn.c)
 */

__int64 __fastcall MiIsPageInIoHugeRangeTransition(unsigned __int64 a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // rdx
  unsigned int v3; // r8d

  v1 = (unsigned int)MiIsPageInHugePfn(a1);
  v3 = 0;
  if ( !v1 )
    return 0LL;
  LOBYTE(v3) = (*(_QWORD *)(qword_140E30100 + 8 * ((v2 >> 18) & 0x3FFFFF)) & 7) == 5;
  return v3;
}
