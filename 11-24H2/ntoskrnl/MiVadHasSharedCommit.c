/*
 * XREFs of MiVadHasSharedCommit @ 0x140A47B8C
 * Callers:
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x1404152F0 (MiIncludeSharedCommit.c)
 */

__int64 __fastcall MiVadHasSharedCommit(__int64 a1)
{
  int v1; // edx
  __int64 *v2; // rcx
  unsigned int v3; // r9d

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x70) == 0x20 )
    return 1LL;
  if ( (v1 & 0x200000) != 0 )
    return 0LL;
  if ( *(__int64 *)(a1 + 120) < 0 )
    return 0LL;
  v2 = *(__int64 **)(a1 + 72);
  if ( !v2 )
    return 0LL;
  LOBYTE(v3) = (unsigned int)MiIncludeSharedCommit(*v2) != 0;
  return v3;
}
