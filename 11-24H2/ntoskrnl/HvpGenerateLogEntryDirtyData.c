/*
 * XREFs of HvpGenerateLogEntryDirtyData @ 0x1403773D0
 * Callers:
 *     HvpGenerateLogEntry @ 0x140967718 (HvpGenerateLogEntry.c)
 * Callees:
 *     HvpCopyDataToOffsetArray @ 0x1403774BC (HvpCopyDataToOffsetArray.c)
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     CmpLogDirtyVectorUse @ 0x140887384 (CmpLogDirtyVectorUse.c)
 *     HvpFindNextDirtyBlock @ 0x140967074 (HvpFindNextDirtyBlock.c)
 *     HvpCountSetRangesInVector @ 0x140967A9C (HvpCountSetRangesInVector.c)
 */

__int64 __fastcall HvpGenerateLogEntryDirtyData(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  _RTL_BITMAP *v6; // rdi
  int v10; // r9d
  __int64 v11; // rbx
  ULONG v12; // ebx
  unsigned int v13; // eax
  _QWORD v15[2]; // [rsp+40h] [rbp-10h] BYREF
  int v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+90h] [rbp+40h] BYREF

  v15[0] = 0LL;
  v17 = 0;
  v6 = (_RTL_BITMAP *)(a1 + 88);
  a6 = 0;
  v16 = 0;
  if ( (unsigned __int8)HvpFindNextDirtyBlock(
                          a1,
                          (int)a1 + 88,
                          (unsigned int)&v16,
                          (unsigned int)v15,
                          (__int64)&v17,
                          (__int64)&a6,
                          0) )
  {
    v11 = a5;
    do
      HvpCopyDataToOffsetArray(v15[0], v17, a2, v10, a4, v11);
    while ( (unsigned __int8)HvpFindNextDirtyBlock(
                               a1,
                               (_DWORD)v6,
                               (unsigned int)&v16,
                               (unsigned int)v15,
                               (__int64)&v17,
                               (__int64)&a6,
                               0) );
  }
  v12 = RtlNumberOfSetBits(v6);
  v13 = HvpCountSetRangesInVector(v6);
  return CmpLogDirtyVectorUse(a1, 2LL, v13, v12);
}
