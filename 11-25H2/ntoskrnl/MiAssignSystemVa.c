/*
 * XREFs of MiAssignSystemVa @ 0x140C434C0
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140C435B0 (MiAssignTopLevelRanges.c)
 * Callees:
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     RtlFindClearBitsAndSet @ 0x140338AF0 (RtlFindClearBitsAndSet.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 */

__int64 __fastcall MiAssignSystemVa(ULONG NumberToClear, unsigned int a2)
{
  ULONG v4; // esi
  int v5; // ebx
  unsigned __int8 v6; // al
  ULONG ClearBitsAndSet; // eax
  __int64 v8; // rdi
  ULONG v9; // ebx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140E2EE28;
  if ( NumberToClear <= 2 )
  {
    v6 = ExGenRandom(1);
    v5 = 8;
    goto LABEL_4;
  }
  v4 = dword_140E2EE48;
  v5 = a2 >= 4 ? 0x10 : 0;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, NumberToClear, v4);
    v8 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
      return 0LL;
    if ( ClearBitsAndSet == v4 || !v5 )
      break;
    --v5;
    RtlClearBits(&BitMapHeader, ClearBitsAndSet, NumberToClear);
    v6 = ExGenRandom(1);
LABEL_4:
    v4 = v6;
  }
  v9 = ClearBitsAndSet + NumberToClear;
  if ( a2 != 1 )
    v9 = (unsigned __int8)(v9 + (unsigned int)ExGenRandom(1) % a2);
  dword_140E2EE48 = v9;
  return (v8 - 256) << 39;
}
