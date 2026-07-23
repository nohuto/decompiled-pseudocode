/*
 * XREFs of MiAssignSystemVa @ 0x140C568C8
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140C569B8 (MiAssignTopLevelRanges.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 */

__int64 __fastcall MiAssignSystemVa(ULONG NumberToClear, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  ULONG v6; // esi
  int v7; // ebx
  unsigned __int8 v8; // al
  ULONG ClearBitsAndSet; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG v17; // ebx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  v4 = a2;
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140E2F1A8;
  if ( NumberToClear <= 2 )
  {
    v8 = ExGenRandom(1, a2, a3, a4);
    v7 = 8;
    goto LABEL_4;
  }
  v6 = dword_140E2F1C8;
  v7 = (unsigned int)a2 >= 4 ? 0x10 : 0;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, NumberToClear, v6);
    v13 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
      return 0LL;
    if ( ClearBitsAndSet == v6 || !v7 )
      break;
    --v7;
    RtlClearBits(&BitMapHeader, ClearBitsAndSet, NumberToClear);
    v8 = ExGenRandom(1, v14, v15, v16);
LABEL_4:
    v6 = v8;
  }
  v17 = ClearBitsAndSet + NumberToClear;
  if ( v4 != 1 )
    v17 = (unsigned __int8)(v17 + (unsigned int)ExGenRandom(1, v10, v11, v12) % v4);
  dword_140E2F1C8 = v17;
  return (v13 - 256) << 39;
}
