/*
 * XREFs of KiConfigureInitialNodes @ 0x1405B89B8
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B2278 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     KiAllocateProcessorNumber @ 0x1405B857C (KiAllocateProcessorNumber.c)
 *     KiAssignProcessorNumberToPrcb @ 0x1405B8790 (KiAssignProcessorNumberToPrcb.c)
 *     KiInitializeSchedulerSubNode @ 0x1405B8DF4 (KiInitializeSchedulerSubNode.c)
 */

__int64 __fastcall KiConfigureInitialNodes(__int64 a1)
{
  int IsEnabledNoReportingNoInline; // eax
  unsigned __int64 v3; // rcx
  _DWORD *v4; // rdi
  _QWORD *v5; // rdx
  _WORD *v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  dword_140FD0B44 = -1;
  byte_140FD0B4A |= 2u;
  v8 = 0;
  KeNodeBlock[0] = (__int64)&ExNode0;
  word_140FD0B48 = KiMaximumGroupSize;
  ExNode0 = 0;
  IsEnabledNoReportingNoInline = Feature_PpmParkEx__private_IsEnabledNoReportingNoInline();
  KiInitialNodeStructures = 0;
  qword_140E15A50 = 0LL;
  KiSubNodeCount = 1;
  byte_140E15A45 |= 5u;
  KiSubNodeConfigBlock = (__int64)&KiInitialNodeStructures;
  word_140E15A46 = 0;
  v3 = ((unsigned __int64)(IsEnabledNoReportingNoInline != 0 ? 4 : 0) + 20) >> 2;
  v4 = &unk_140FD0C60;
  while ( v3 )
  {
    *v4++ = 1;
    --v3;
  }
  KiSubNodes = (__int64)&qword_140E16800;
  byte_140E15A44 = KiMaximumGroupSize;
  KiInitializeSchedulerSubNode(&unk_140E15A80, &KiInitialNodeStructures);
  byte_140E15B39 = 8;
  qword_140E15B40 = (__int64)&unk_140E15D80;
  qword_140E16800 = (__int64)&unk_140E15A80;
  qword_140E15B48 = (__int64)&unk_140E16C38;
  qword_140FD0B60 = (__int64)&unk_140E15A80;
  qword_140E15B50 = (__int64)&unk_140E16E38;
  KiAllocateProcessorNumber(0, (__int64)&v8);
  KiAssignProcessorNumberToPrcb(a1, (char *)&v8, 0);
  qword_140E15B20 |= 1uLL;
  v5 = &unk_140FCF6C8;
  qword_140E15AD0 |= 1uLL;
  v6 = &unk_140FDB1C8;
  *(_BYTE *)(a1 + 35) = 1;
  LODWORD(result) = 1;
  qword_140FC8870[0] |= 1uLL;
  do
  {
    *v5++ = v6;
    *v6 = result;
    result = (unsigned int)(result + 1);
    v6 += 412;
  }
  while ( (unsigned int)result < 0x40 );
  return result;
}
