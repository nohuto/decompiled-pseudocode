/*
 * XREFs of CmpCheckKeyNodeStackAccess @ 0x140909618
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1409090E8 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14090A158 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14090ADCC (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 CmpCheckKeyNodeStackAccess()
{
  __int64 v0; // r10
  ULONG_PTR v1; // rbx
  __int64 CellFlat; // rax
  __int64 v3; // rdi
  unsigned int v4; // esi
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v7 = 0LL;
  BugCheckParameter3[0] = 0LL;
  HvpGetCellContextInitialize(&v7);
  CmpGetSecurityCellForKeyNodeStack(v0, BugCheckParameter3, &BugCheckParameter4);
  v1 = BugCheckParameter3[0];
  if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3[0], (unsigned int)BugCheckParameter4, &v7);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3[0], BugCheckParameter4, &v7);
  v3 = CellFlat;
  v4 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(CellFlat + 20));
  if ( v3 )
  {
    if ( (*(_BYTE *)(v1 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v1, (__int64)&v7);
    else
      HvpReleaseCellPaged(v1, (unsigned int *)&v7);
  }
  return v4;
}
