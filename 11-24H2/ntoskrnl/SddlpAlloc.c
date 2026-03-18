/*
 * XREFs of SddlpAlloc @ 0x1408638C4
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140496FD0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1404BB0F0 (SeConvertStringSidToSid.c)
 *     EncodeAttributeName @ 0x140796E50 (EncodeAttributeName.c)
 *     DecodeAttributeName @ 0x14085F828 (DecodeAttributeName.c)
 *     GetStringOperandValue @ 0x14085FA1C (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x14085FAE0 (LocalGetConditionForString.c)
 *     GetOperandValue @ 0x14086038C (GetOperandValue.c)
 *     AppendCondition @ 0x140860580 (AppendCondition.c)
 *     GetAttributeName @ 0x140860634 (GetAttributeName.c)
 *     EncloseSubCondition @ 0x1408608AC (EncloseSubCondition.c)
 *     LocalConvertAclToString @ 0x140860920 (LocalConvertAclToString.c)
 *     LocalpGetStringForCondition @ 0x140861744 (LocalpGetStringForCondition.c)
 *     GetPrintableOperandValue @ 0x140861C7C (GetPrintableOperandValue.c)
 *     LocalConvertSidToStringSidW @ 0x140861E34 (LocalConvertSidToStringSidW.c)
 *     GetPrintableAttributeName @ 0x140861F30 (GetPrintableAttributeName.c)
 *     LocalpConvertStringSidToSid @ 0x140862418 (LocalpConvertStringSidToSid.c)
 *     GetOperatorIndexByName @ 0x140862938 (GetOperatorIndexByName.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140862DB8 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140863ECC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x140866BD0 (LookupSidInTable.c)
 *     LocalGetStringForControl @ 0x140A44BB4 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140A6C7F0 (LocalGetStringForSid.c)
 *     LocalGetStringForRelativeAttribute @ 0x140AAA0A0 (LocalGetStringForRelativeAttribute.c)
 *     LocalGetRelativeAttributeForString @ 0x140AAF494 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
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
