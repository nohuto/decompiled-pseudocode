/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x14097ACC8
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x140AB8DF4 (CmpLogTransactionAbortedForRollbackPacket.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     RtlUnicodeStringCopy @ 0x1403E4550 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x1403EA5B0 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x14041C568 (RtlUnicodeStringCatString.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpLogTransactionAbortedByName @ 0x1407E0150 (CmpLogTransactionAbortedByName.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x14087C7CC (CmpConstructNameFromKcbNameBlocks.c)
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
  if ( !a5 || (unsigned int)dword_140E09EE8 <= 4 || !tlgKeywordOn((__int64)&dword_140E09EE8, 1LL) )
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
