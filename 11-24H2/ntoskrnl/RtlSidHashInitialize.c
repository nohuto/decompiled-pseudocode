/*
 * XREFs of RtlSidHashInitialize @ 0x140365780
 * Callers:
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     SepSetTokenCapabilities @ 0x140936380 (SepSetTokenCapabilities.c)
 *     CmpBuildAdminInformation @ 0x1409A773C (CmpBuildAdminInformation.c)
 *     SepCopyTokenAccessInformation @ 0x1409E2D6C (SepCopyTokenAccessInformation.c)
 *     SepCreateClaimAttributes @ 0x140A56BE0 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140A5E1D0 (SepDuplicateClaimAttributes.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall RtlSidHashInitialize(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx

  if ( !a3 )
    return 3221225485LL;
  memset_0(a3, 0, 0x110uLL);
  if ( a1 && a2 )
  {
    v7 = 64;
    a3[1] = a1;
    *(_DWORD *)a3 = a2;
    if ( a2 <= 0x40 )
      v7 = a2;
    v8 = 1LL;
    v9 = v7;
    do
    {
      v10 = *a1;
      a1 += 2;
      v11 = *(unsigned __int8 *)(v10 + 4LL * *(unsigned __int8 *)(v10 + 1) + 4);
      v12 = *(_BYTE *)(v10 + 4LL * *(unsigned __int8 *)(v10 + 1) + 4) & 0xF;
      a3[v12 + 2] |= v8;
      a3[((unsigned __int64)v11 >> 4) + 18] |= v8;
      v8 = __ROL8__(v8, 1);
      --v9;
    }
    while ( v9 );
  }
  return 0LL;
}
