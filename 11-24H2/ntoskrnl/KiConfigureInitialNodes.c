/*
 * XREFs of KiConfigureInitialNodes @ 0x1405BB388
 * Callers:
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B5004 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     KiAllocateProcessorNumber @ 0x1405BAF4C (KiAllocateProcessorNumber.c)
 *     KiAssignProcessorNumberToPrcb @ 0x1405BB160 (KiAssignProcessorNumberToPrcb.c)
 *     KiInitializeSchedulerSubNode @ 0x1405BB7C4 (KiInitializeSchedulerSubNode.c)
 */

__int64 __fastcall KiConfigureInitialNodes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int IsEnabledNoReportingNoInline; // eax
  unsigned __int64 v6; // rcx
  _DWORD *v7; // rdi
  _QWORD *v8; // rdx
  _WORD *v9; // rcx
  __int64 result; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  dword_140FCFB44 = -1;
  byte_140FCFB4A |= 2u;
  v11 = 0;
  KeNodeBlock[0] = (__int64)&ExNode0;
  word_140FCFB48 = KiMaximumGroupSize;
  ExNode0 = 0;
  IsEnabledNoReportingNoInline = Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(a1, a2, a3, a4);
  KiInitialNodeStructures = 0;
  qword_140E15910 = 0LL;
  KiSubNodeCount = 1;
  byte_140E15905 |= 5u;
  KiSubNodeConfigBlock = (__int64)&KiInitialNodeStructures;
  word_140E15906 = 0;
  v6 = ((unsigned __int64)(IsEnabledNoReportingNoInline != 0 ? 4 : 0) + 20) >> 2;
  v7 = &unk_140FCFC60;
  while ( v6 )
  {
    *v7++ = 1;
    --v6;
  }
  KiSubNodes = (__int64)&qword_140E166C0;
  byte_140E15904 = KiMaximumGroupSize;
  KiInitializeSchedulerSubNode(&unk_140E15940, &KiInitialNodeStructures);
  byte_140E159F9 = 8;
  qword_140E15A00 = (__int64)&unk_140E15C40;
  qword_140E166C0 = (__int64)&unk_140E15940;
  qword_140E15A08 = (__int64)&unk_140E16AF8;
  qword_140FCFB60 = (__int64)&unk_140E15940;
  qword_140E15A10 = (__int64)&unk_140E16CF8;
  KiAllocateProcessorNumber(0, (__int64)&v11);
  KiAssignProcessorNumberToPrcb(a1, (char *)&v11, 0);
  qword_140E159E0 |= 1uLL;
  v8 = &unk_140FCE6C8;
  qword_140E15990 |= 1uLL;
  v9 = &unk_140FDA1B8;
  *(_BYTE *)(a1 + 35) = 1;
  LODWORD(result) = 1;
  qword_140FC7810[0] |= 1uLL;
  do
  {
    *v8++ = v9;
    *v9 = result;
    result = (unsigned int)(result + 1);
    v9 += 412;
  }
  while ( (unsigned int)result < 0x40 );
  return result;
}
