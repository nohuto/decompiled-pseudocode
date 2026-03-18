/*
 * XREFs of CmpFreeSecurityDescriptor @ 0x14088820C
 * Callers:
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x1407D31A4 (CmpSyncKeyValues.c)
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1404A3C08 (CmpDereferenceSecurityNode.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpFreeSecurityDescriptor(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  bool v3; // zf
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned int v6; // edx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v7 = -1;
  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v8 = 0;
  if ( v3 )
    result = HvpGetCellPaged(BugCheckParameter3, a2, &v7);
  else
    result = HvpGetCellFlat(BugCheckParameter3, a2, &v7);
  v5 = result;
  if ( result )
  {
    v6 = *(_DWORD *)(result + 44);
    if ( v6 != -1 )
    {
      CmpDereferenceSecurityNode(BugCheckParameter3, v6);
      *(_DWORD *)(v5 + 44) = -1;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter3, &v7);
    else
      return HvpReleaseCellPaged(BugCheckParameter3, &v7);
  }
  return result;
}
