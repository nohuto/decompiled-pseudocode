/*
 * XREFs of MiIsPageInIoHugeRangeTransition @ 0x140392060
 * Callers:
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     MiDereferenceIoHugeRange @ 0x140664048 (MiDereferenceIoHugeRange.c)
 *     MiDeleteStaleCacheMaps @ 0x140669E20 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     MiIsPageInHugePfn @ 0x140392030 (MiIsPageInHugePfn.c)
 */

__int64 __fastcall MiIsPageInIoHugeRangeTransition(unsigned __int64 a1)
{
  int IsPageInHugePfn; // eax
  unsigned __int64 v2; // rdx
  unsigned int v3; // r8d

  IsPageInHugePfn = MiIsPageInHugePfn(a1);
  v3 = 0;
  if ( !IsPageInHugePfn )
    return 0LL;
  LOBYTE(v3) = (*(_QWORD *)(qword_140E2FD80 + 8 * ((v2 >> 18) & 0x3FFFFF)) & 7) == 5;
  return v3;
}
