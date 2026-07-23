/*
 * XREFs of SepSetTokenTrust @ 0x1409D96A0
 * Callers:
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     SepSetTrustLevelForProcessToken @ 0x1403EB1F4 (SepSetTrustLevelForProcessToken.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, unsigned __int8 *a2)
{
  void *v2; // rdi
  void *v5; // rcx
  unsigned int v7; // ebp
  void *Pool2; // rax
  unsigned int v9; // ecx

  v2 = 0LL;
  if ( a2 )
  {
    v7 = 4 * a2[1] + 8;
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v7, 0x69536553u);
    v2 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v9 = 4 * a2[1] + 8;
    if ( v9 <= v7 )
      memmove(Pool2, a2, v9);
  }
  v5 = *(void **)(a1 + 1104);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  *(_QWORD *)(a1 + 1104) = v2;
  return 0LL;
}
