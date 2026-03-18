/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x140863F7C
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407BCF4C (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x140862E0C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     RtlUnicodeStringCopy @ 0x1403DF480 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x1403E2DD0 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x14041FCBC (RtlUnicodeStringCatString.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpLogTransactionAbortedByName @ 0x1407D0878 (CmpLogTransactionAbortedByName.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x14087E5E4 (CmpConstructNameFromKcbNameBlocks.c)
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
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp+28h] BYREF

  SourceString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5 || (unsigned int)dword_140E09E08 <= 4 || !tlgKeywordOn((__int64)&dword_140E09E08, 1LL) )
    goto LABEL_13;
  v8 = CmpConstructNameFromKcbNameBlocks(a1, &SourceString);
  v10 = (UNICODE_STRING *)SourceString;
  if ( v8 >= 0 )
  {
    if ( !a2 )
    {
      p_DestinationString = (UNICODE_STRING *)SourceString;
      goto LABEL_10;
    }
    if ( SourceString->Length + 2LL + (unsigned __int64)a2->Length <= 0xFFFF )
    {
      DestinationString.MaximumLength = SourceString->Length + 2 + a2->Length;
      DestinationString.Buffer = (wchar_t *)CmpAllocatePool(0x100uLL);
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
