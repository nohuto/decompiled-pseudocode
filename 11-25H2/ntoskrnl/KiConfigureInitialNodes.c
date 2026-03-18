/*
 * XREFs of KiConfigureInitialNodes @ 0x1405B74F8
 * Callers:
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     KiAllocateProcessorNumber @ 0x1405B70BC (KiAllocateProcessorNumber.c)
 *     KiAssignProcessorNumberToPrcb @ 0x1405B72D0 (KiAssignProcessorNumberToPrcb.c)
 *     KiInitializeSchedulerSubNode @ 0x1405B7920 (KiInitializeSchedulerSubNode.c)
 */

__int64 __fastcall KiConfigureInitialNodes(__int64 a1)
{
  _QWORD *v2; // rdx
  _WORD *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  dword_140FCFBC4 = -1;
  byte_140FCFBCA |= 2u;
  byte_140E156C5 |= 5u;
  KeNodeBlock[0] = (__int64)&ExNode0;
  v5 = 0;
  ExNode0 = 0;
  KiInitialNodeStructures = 0;
  qword_140E156D0 = 0LL;
  word_140E156C6 = 0;
  KiSubNodeCount = 1;
  word_140FCFBC8 = KiMaximumGroupSize;
  xmmword_140FCFCE0 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  KiSubNodeConfigBlock = (__int64)&KiInitialNodeStructures;
  dword_140FCFCF0 = _mm_cvtsi128_si32((__m128i)xmmword_140FCFCE0);
  KiSubNodes = (__int64)&qword_140E16480;
  byte_140E156C4 = KiMaximumGroupSize;
  KiInitializeSchedulerSubNode(&unk_140E15700, &KiInitialNodeStructures);
  byte_140E157B9 = 8;
  qword_140E157C0 = (__int64)&unk_140E15A00;
  qword_140E16480 = (__int64)&unk_140E15700;
  qword_140E157C8 = (__int64)&unk_140E168B8;
  qword_140FCFBE0 = (__int64)&unk_140E15700;
  qword_140E157D0 = (__int64)&unk_140E16AB8;
  KiAllocateProcessorNumber(0, (__int64)&v5);
  KiAssignProcessorNumberToPrcb(a1, (char *)&v5, 0);
  qword_140E157A0 |= 1uLL;
  v2 = &unk_140FCE6C8;
  qword_140E15750 |= 1uLL;
  v3 = &unk_140FDA1E8;
  *(_BYTE *)(a1 + 35) = 1;
  LODWORD(result) = 1;
  qword_140FC7830[0] |= 1uLL;
  do
  {
    *v2++ = v3;
    *v3 = result;
    result = (unsigned int)(result + 1);
    v3 += 412;
  }
  while ( (unsigned int)result < 0x40 );
  return result;
}
