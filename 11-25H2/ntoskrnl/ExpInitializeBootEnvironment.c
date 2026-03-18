/*
 * XREFs of ExpInitializeBootEnvironment @ 0x140BF99AC
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall ExpInitializeBootEnvironment(__int64 a1)
{
  dword_140EFE810 = ((*(_BYTE *)(a1 + 264) & 1) != 0) + 1;
  *(_OWORD *)&ExpBootEnvironmentInformation = *(_OWORD *)(*(_QWORD *)(a1 + 240) + 256LL);
  qword_140EFE818 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2648LL);
  return IoAddTriageDumpDataBlock((ULONG)&ExpBootEnvironmentInformation, (PVOID)0x20);
}
