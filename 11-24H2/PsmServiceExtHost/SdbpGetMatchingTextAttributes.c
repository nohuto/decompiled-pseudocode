/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x18009B0A8
 * Callers:
 *     SdbpCheckMatchingText @ 0x18009A390 (SdbpCheckMatchingText.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x180097EEC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800981D4 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180098284 (SdbGetTagDataSize.c)
 *     SdbReadBinaryTag @ 0x1800984CC (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180098588 (SdbReadDWORDTag.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 */

__int64 __fastcall SdbpGetMatchingTextAttributes(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v7; // ebx
  int DWORDTag; // r13d
  PVOID v11; // rsi
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // rax
  _WORD *v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int TagDataSize; // eax
  unsigned int v18; // ebp
  PVOID Heap; // rax
  unsigned int v20; // eax
  int v21; // r14d
  unsigned int v22; // eax

  v7 = 0;
  *a3 = 0LL;
  DWORDTag = 0x2000;
  *a4 = 0LL;
  *a5 = 0;
  v11 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
    goto LABEL_2;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v14 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
    goto LABEL_14;
  v15 = SdbFindFirstTag(a1, a2, 36883);
  v16 = v15;
  if ( !v15
    || (TagDataSize = SdbGetTagDataSize(a1, v15), (v18 = TagDataSize) == 0)
    || (Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, TagDataSize + 2LL), (v11 = Heap) == 0LL) )
  {
LABEL_2:
    AslLogCallPrintf(1LL);
    return v7;
  }
  if ( (unsigned int)SdbReadBinaryTag(a1, v16, (__int64)Heap, v18)
    && (v20 = SdbFindFirstTag(a1, a2, 16467)) != 0
    && (v21 = SdbReadDWORDTag(a1, v20, 0)) != 0 )
  {
    v22 = SdbFindFirstTag(a1, a2, 16385);
    if ( v22 )
      DWORDTag = SdbReadDWORDTag(a1, v22, 0x2000u);
    v7 = 1;
    *a3 = v14;
    *a4 = v11;
    *a5 = v18;
    *a6 = v21;
    *a7 = DWORDTag;
  }
  else
  {
LABEL_14:
    AslLogCallPrintf(1LL);
    if ( v11 )
      AslFree(NtCurrentPeb()->ProcessHeap, v11);
  }
  return v7;
}
