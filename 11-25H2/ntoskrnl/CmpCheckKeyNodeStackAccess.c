/*
 * XREFs of CmpCheckKeyNodeStackAccess @ 0x1409748B0
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140974380 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1408F4150 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x1409753F0 (CmpGetSecurityCellForKeyNodeStack.c)
 */

__int64 __fastcall CmpCheckKeyNodeStackAccess(__int64 a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, char a4)
{
  __int64 v7; // r10
  ULONG_PTR v8; // rbx
  __int64 CellFlat; // rax
  __int64 v10; // rdi
  unsigned int v11; // esi
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v14 = 0LL;
  BugCheckParameter3[0] = 0LL;
  HvpGetCellContextInitialize(&v14);
  CmpGetSecurityCellForKeyNodeStack(v7, BugCheckParameter3, &BugCheckParameter4);
  v8 = BugCheckParameter3[0];
  if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3[0], (unsigned int)BugCheckParameter4, &v14);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3[0], BugCheckParameter4, &v14);
  v10 = CellFlat;
  v11 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(CellFlat + 20), a2, a3, a4);
  if ( v10 )
  {
    if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v8, &v14);
    else
      HvpReleaseCellPaged(v8, (unsigned int *)&v14);
  }
  return v11;
}
