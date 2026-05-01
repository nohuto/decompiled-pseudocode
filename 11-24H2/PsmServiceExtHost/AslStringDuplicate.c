/*
 * XREFs of AslStringDuplicate @ 0x18009E508
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x18009321C (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpApphelpExeInfo @ 0x180095564 (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x1800958B0 (SdbpConvertResourcesToStrings.c)
 *     SdbpEscapeQuoteInMsg @ 0x1800959C0 (SdbpEscapeQuoteInMsg.c)
 *     SdbpExpandSummaryMsg @ 0x180095AB8 (SdbpExpandSummaryMsg.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180095C0C (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180099FE0 (SdbpCheckMatchingRegistryValue.c)
 *     AslRegistryGetString @ 0x18009DCFC (AslRegistryGetString.c)
 *     AslStringReplace @ 0x18009E7AC (AslStringReplace.c)
 *     AslStringReplaceArray @ 0x18009EA00 (AslStringReplaceArray.c)
 *     AslFileMappingCreate @ 0x18009EE08 (AslFileMappingCreate.c)
 *     AslpFileVerQueryBlock @ 0x1800A3670 (AslpFileVerQueryBlock.c)
 *     AslPathToSystemPath @ 0x1800A434C (AslPathToSystemPath.c)
 *     AslRegWildcardFindFirst @ 0x1800A5784 (AslRegWildcardFindFirst.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1800636A8 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     RtlStringCchLengthW @ 0x180092224 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x18009933C (RtlULongLongMult.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 */

__int64 __fastcall AslStringDuplicate(_QWORD *a1, __int64 a2)
{
  void *v2; // rdi
  int v5; // ebx
  __int64 v6; // rbp
  _WORD *Heap; // rax
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = 0LL;
  *a1 = 0LL;
  Size = 0LL;
  if ( !a2 )
    goto LABEL_2;
  v5 = RtlStringCchLengthW(a2, 0x7FFFFFFFLL, &v9);
  if ( v5 < 0 )
    goto LABEL_11;
  v6 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    v5 = -1073741675;
    goto LABEL_11;
  }
  v5 = RtlULongLongMult(v9 + 1, 2uLL, &Size);
  if ( v5 < 0 )
    goto LABEL_11;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size);
  v2 = Heap;
  if ( !Heap )
  {
    v5 = -1073741801;
    AslLogCallPrintf(1LL);
    goto LABEL_12;
  }
  v5 = RtlStringCchCopyW(Heap, v6, a2);
  if ( v5 < 0 )
  {
LABEL_11:
    AslLogCallPrintf(1LL);
    goto LABEL_12;
  }
  *a1 = v2;
  v2 = 0LL;
LABEL_2:
  v5 = 0;
LABEL_12:
  AslFree(NtCurrentPeb()->ProcessHeap, v2);
  return (unsigned int)v5;
}
