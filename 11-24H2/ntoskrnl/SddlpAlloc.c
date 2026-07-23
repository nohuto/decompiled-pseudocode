/*
 * XREFs of SddlpAlloc @ 0x140867ED4
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140491960 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1404B5F90 (SeConvertStringSidToSid.c)
 *     EncodeAttributeName @ 0x140796F60 (EncodeAttributeName.c)
 *     DecodeAttributeName @ 0x140863E34 (DecodeAttributeName.c)
 *     GetStringOperandValue @ 0x140864028 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1408640EC (LocalGetConditionForString.c)
 *     GetOperandValue @ 0x140864998 (GetOperandValue.c)
 *     AppendCondition @ 0x140864B8C (AppendCondition.c)
 *     GetAttributeName @ 0x140864C40 (GetAttributeName.c)
 *     EncloseSubCondition @ 0x140864EB8 (EncloseSubCondition.c)
 *     LocalConvertAclToString @ 0x140864F2C (LocalConvertAclToString.c)
 *     LocalpGetStringForCondition @ 0x140865D50 (LocalpGetStringForCondition.c)
 *     GetPrintableOperandValue @ 0x140866288 (GetPrintableOperandValue.c)
 *     LocalConvertSidToStringSidW @ 0x140866440 (LocalConvertSidToStringSidW.c)
 *     GetPrintableAttributeName @ 0x140866540 (GetPrintableAttributeName.c)
 *     LocalpConvertStringSidToSid @ 0x140866A28 (LocalpConvertStringSidToSid.c)
 *     GetOperatorIndexByName @ 0x140866F48 (GetOperatorIndexByName.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408673C8 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1408684DC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x14086B1E0 (LookupSidInTable.c)
 *     LocalGetStringForControl @ 0x140A3A444 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140A66038 (LocalGetStringForSid.c)
 *     LocalGetStringForRelativeAttribute @ 0x140AA5150 (LocalGetStringForRelativeAttribute.c)
 *     LocalGetRelativeAttributeForString @ 0x140AAA374 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
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
