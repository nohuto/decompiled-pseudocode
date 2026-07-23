/*
 * XREFs of SepBuildDefaultCape @ 0x140607DFC
 * Callers:
 *     SepBuildDefaultCap @ 0x140795348 (SepBuildDefaultCap.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepBuildDefaultCape(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 Pool2; // rax
  __int128 v4; // xmm0
  __int64 v5; // rcx

  v2 = 0;
  Pool2 = ExAllocatePool2(0x100uLL, 0x38uLL, 0x70536553u);
  if ( Pool2 )
  {
    v4 = DefaultCapeName;
    v5 = SeDefaultCapeSd;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_OWORD *)Pool2 = v4;
    *(_QWORD *)(Pool2 + 48) = 1LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 32) = v5;
    *a1 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
