/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x1409634D8
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x140AB32B8 (CmpLogTransactionAbortedForRollbackPacket.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x1403DA240 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x1404105C0 (RtlUnicodeStringCatString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpLogTransactionAbortedByName @ 0x1407E06A0 (CmpLogTransactionAbortedByName.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x14088067C (CmpConstructNameFromKcbNameBlocks.c)
 */

void __fastcall CmpLogTransactionAbortedWithChildName(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int v8; // eax
  __int64 v9; // r8
  UNICODE_STRING *v10; // rbx
  unsigned __int64 v11; // rdx
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp+28h] BYREF

  SourceString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5 || (unsigned int)dword_140E09F58 <= 4 || !tlgKeywordOn((__int64)&dword_140E09F58, 1LL) )
    goto LABEL_13;
  v8 = CmpConstructNameFromKcbNameBlocks(a1, (__int64 *)&SourceString);
  v10 = (UNICODE_STRING *)SourceString;
  if ( v8 >= 0 )
  {
    if ( !a2 )
    {
      p_DestinationString = (UNICODE_STRING *)SourceString;
      goto LABEL_10;
    }
    v11 = SourceString->Length + 2LL + a2->Length;
    if ( v11 <= 0xFFFF )
    {
      DestinationString.MaximumLength = SourceString->Length + 2 + a2->Length;
      DestinationString.Buffer = (wchar_t *)CmpAllocatePool(0x100uLL, (unsigned __int16)v11, 0x624E4D43u);
      if ( DestinationString.Buffer )
      {
        RtlUnicodeStringCopy(&DestinationString, v10);
        RtlUnicodeStringCatString(&DestinationString, L"\\");
        RtlUnicodeStringCat(&DestinationString, a2);
        p_DestinationString = &DestinationString;
LABEL_10:
        CmpLogTransactionAbortedByName(&p_DestinationString->Length, a3, v9, a5);
      }
    }
  }
  if ( v10 )
    CmpFreeTransientPoolWithTag(v10, 0x624E4D43u);
LABEL_13:
  if ( DestinationString.Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
}
