/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x1409172C0
 * Callers:
 *     CmpCheckKeyAccess @ 0x140918934 (CmpCheckKeyAccess.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409A0BDC (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14091735C (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rdx
  __int64 CellFlat; // rax
  unsigned int v4; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  HvpGetCellContextInitialize(&v6);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v2, &v6);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v2, &v6);
  if ( CellFlat )
  {
    v4 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(CellFlat + 20));
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v6);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
