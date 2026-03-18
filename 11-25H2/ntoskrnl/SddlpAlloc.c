/*
 * XREFs of SddlpAlloc @ 0x1409E93A4
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140497A40 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1404BBDB0 (SeConvertStringSidToSid.c)
 *     EncodeAttributeName @ 0x140787A80 (EncodeAttributeName.c)
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x140918AA0 (LookupSidInTable.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409E5FCC (LocalGetStringForRelativeAttribute.c)
 *     EncloseSubCondition @ 0x1409E67F4 (EncloseSubCondition.c)
 *     LocalConvertAclToString @ 0x1409E6840 (LocalConvertAclToString.c)
 *     LocalpGetStringForCondition @ 0x1409E765C (LocalpGetStringForCondition.c)
 *     GetPrintableOperandValue @ 0x1409E7B94 (GetPrintableOperandValue.c)
 *     LocalConvertSidToStringSidW @ 0x1409E7D4C (LocalConvertSidToStringSidW.c)
 *     GetPrintableAttributeName @ 0x1409E7E00 (GetPrintableAttributeName.c)
 *     LocalpConvertStringSidToSid @ 0x1409E7FDC (LocalpConvertStringSidToSid.c)
 *     GetOperatorIndexByName @ 0x1409E84FC (GetOperatorIndexByName.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1409E8690 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1409E8CD0 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1409E9658 (LocalGetStringForControl.c)
 *     LocalGetConditionForString @ 0x1409E97F8 (LocalGetConditionForString.c)
 *     GetOperandValue @ 0x1409EA0A4 (GetOperandValue.c)
 *     AppendCondition @ 0x1409EA260 (AppendCondition.c)
 *     GetAttributeName @ 0x1409EA314 (GetAttributeName.c)
 *     LocalGetStringForSid @ 0x1409EA58C (LocalGetStringForSid.c)
 *     GetStringOperandValue @ 0x1409EA66C (GetStringOperandValue.c)
 *     DecodeAttributeName @ 0x1409EA92C (DecodeAttributeName.c)
 *     LocalGetRelativeAttributeForString @ 0x140AAA33C (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SddlpAlloc(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x64536553u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset_0(PoolWithTag, 0, Size);
  return v3;
}
