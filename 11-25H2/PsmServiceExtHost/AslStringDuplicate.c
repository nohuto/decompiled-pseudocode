/*
 * XREFs of AslStringDuplicate @ 0x18009E218
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x180092DBC (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpApphelpExeInfo @ 0x180095104 (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180095450 (SdbpConvertResourcesToStrings.c)
 *     SdbpEscapeQuoteInMsg @ 0x180095560 (SdbpEscapeQuoteInMsg.c)
 *     SdbpExpandSummaryMsg @ 0x180095658 (SdbpExpandSummaryMsg.c)
 *     SdbpReadApphelpDisplayCustom @ 0x1800957AC (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180099C90 (SdbpCheckMatchingRegistryValue.c)
 *     AslRegistryGetString @ 0x18009DA0C (AslRegistryGetString.c)
 *     AslStringReplace @ 0x18009E4BC (AslStringReplace.c)
 *     AslStringReplaceArray @ 0x18009E710 (AslStringReplaceArray.c)
 *     AslFileMappingCreate @ 0x18009EB18 (AslFileMappingCreate.c)
 *     AslpFileVerQueryBlock @ 0x1800A3380 (AslpFileVerQueryBlock.c)
 *     AslPathToSystemPath @ 0x1800A405C (AslPathToSystemPath.c)
 *     AslRegWildcardFindFirst @ 0x1800A5494 (AslRegWildcardFindFirst.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180063728 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     RtlStringCchLengthW @ 0x180091DC4 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x180098FEC (RtlULongLongMult.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
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
