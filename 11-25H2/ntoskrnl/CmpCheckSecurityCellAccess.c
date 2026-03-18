/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x140A48654
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x14091C778 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKeyAccess @ 0x140A485A0 (CmpCheckKeyAccess.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1408F4150 (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        KPROCESSOR_MODE a3,
        ACCESS_MASK a4,
        char a5)
{
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  unsigned int v10; // edi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  HvpGetCellContextInitialize(&v12);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, &v12);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v8, &v12);
  if ( CellFlat )
  {
    v10 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(CellFlat + 20), a3, a4, a5);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v12);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v12);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
