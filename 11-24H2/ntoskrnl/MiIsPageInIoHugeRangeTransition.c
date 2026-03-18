/*
 * XREFs of MiIsPageInIoHugeRangeTransition @ 0x1403CEED0
 * Callers:
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     MiDereferenceIoHugeRange @ 0x14066FB68 (MiDereferenceIoHugeRange.c)
 *     MiDeleteStaleCacheMaps @ 0x140675880 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     MiIsPageInHugePfn @ 0x1403CEEA0 (MiIsPageInHugePfn.c)
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
  LOBYTE(v3) = (*(_QWORD *)(qword_140E2FFC0 + 8 * ((v2 >> 18) & 0x3FFFFF)) & 7) == 5;
  return v3;
}
