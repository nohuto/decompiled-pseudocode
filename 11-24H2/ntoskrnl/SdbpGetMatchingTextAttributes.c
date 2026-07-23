/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x140804F78
 * Callers:
 *     SdbpCheckMatchingText @ 0x140803D90 (SdbpCheckMatchingText.c)
 * Callees:
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     SdbReadDWORDTag @ 0x140946BB8 (SdbReadDWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1409479E0 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x140A60C50 (SdbReadBinaryTag.c)
 */

__int64 __fastcall SdbpGetMatchingTextAttributes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v7; // ebx
  int v8; // r13d
  unsigned int v9; // r12d
  __int64 v11; // rsi
  unsigned int FirstTag; // eax
  const char *v13; // r9
  int v14; // r8d
  _WORD *StringTagPtr; // rax
  _WORD *v16; // r15
  unsigned int v17; // eax
  unsigned int v18; // r14d
  unsigned int TagDataSize; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebp
  __int64 v22; // rax
  int v23; // r8d
  const char *v24; // r9
  unsigned int v25; // eax
  int DWORDTag; // r14d
  unsigned int v27; // eax
  __int64 v28; // rcx

  v7 = 0;
  *a3 = 0LL;
  v8 = 0x2000;
  *a4 = 0LL;
  v9 = a2;
  *a5 = 0;
  v11 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  FirstTag = SdbFindFirstTag(a1, a2, 24577LL);
  if ( !FirstTag )
  {
    v13 = "Failed to get MATCHING_TEXT file path";
    v14 = 1799;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMatchingTextAttributes", v14, (_DWORD)v13);
    return v7;
  }
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v16 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
  {
    v23 = 1805;
    v24 = "Failed to read MATCHING_TEXT file path";
LABEL_22:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMatchingTextAttributes", v23, (_DWORD)v24);
    if ( v11 )
      AslFree(v28);
    return v7;
  }
  v17 = SdbFindFirstTag(a1, v9, 36883LL);
  v18 = v17;
  if ( !v17 )
  {
    v13 = "Failed to read text to match";
    v14 = 1814;
    goto LABEL_3;
  }
  TagDataSize = SdbGetTagDataSize(a1, v17);
  v21 = TagDataSize;
  if ( !TagDataSize )
  {
    v13 = "Failed to get text to match blob";
    v14 = 1820;
    goto LABEL_3;
  }
  v22 = AslAlloc(v20, TagDataSize + 2LL);
  v11 = v22;
  if ( !v22 )
  {
    v13 = "Failed to allocate memory for text blob";
    v14 = 1826;
    goto LABEL_3;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, v18, v22, v21) )
  {
    v23 = 1831;
    v24 = "Failed to read matching text blob";
    goto LABEL_22;
  }
  v25 = SdbFindFirstTag(a1, v9, 16467LL);
  if ( !v25 )
  {
    v23 = 1840;
    v24 = "Failed to read text encoding";
    goto LABEL_22;
  }
  DWORDTag = SdbReadDWORDTag(a1, v25, 0LL);
  if ( !DWORDTag )
  {
    v23 = 1846;
    v24 = "Failed to read encoding type";
    goto LABEL_22;
  }
  v27 = SdbFindFirstTag(a1, v9, 16385LL);
  if ( v27 )
    v8 = SdbReadDWORDTag(a1, v27, 0x2000LL);
  v7 = 1;
  *a3 = v16;
  *a4 = v11;
  *a5 = v21;
  *a6 = DWORDTag;
  *a7 = v8;
  return v7;
}
