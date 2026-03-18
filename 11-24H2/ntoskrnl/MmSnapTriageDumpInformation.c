/*
 * XREFs of MmSnapTriageDumpInformation @ 0x140677F08
 * Callers:
 *     IoWriteCrashDump @ 0x1405927D4 (IoWriteCrashDump.c)
 *     IopCollectTriageDumpData @ 0x140593804 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14059584C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     HvlQueryVsmConnection @ 0x140456290 (HvlQueryVsmConnection.c)
 *     MiAddTriageDumpPtes @ 0x1406773F8 (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  IoAddTriageDumpDataBlock((ULONG)&MiState, (PVOID)0xC1C0);
  IoAddTriageDumpDataBlock((ULONG)&MiSystemPartition, (PVOID)0x5D40);
  qword_140EF4D28 = 0LL;
  dword_140EF4D1C = 0;
  qword_140EF4D38 = 0LL;
  *(_QWORD *)&MiTriageDumpData = qword_140E3A780;
  dword_140EF4D08 = dword_140E30178;
  dword_140EF4D0C = dword_140E30174;
  dword_140EF4D10 = dword_140E301A0;
  dword_140EF4D14 = dword_140E301A4;
  qword_140EF4D20 = KeFeatureBits;
  dword_140EF4D18 = dword_140E30158 + dword_140E3015C + dword_140E30160;
  LODWORD(qword_140EF4D28) = MEMORY[0xFFFFF78000000240];
  qword_140EF4D30 = MiFlags;
  HvlQueryVsmConnection(&qword_140EF4D38);
  v4 = 4LL;
  do
  {
    MiAddTriageDumpPtes(*a2++);
    --v4;
  }
  while ( v4 );
  v5 = &IopRunTimeContextOffsets;
  v6 = 15LL;
  do
  {
    MiAddTriageDumpPtes(*(_QWORD *)(*(unsigned __int16 *)v5 + a1));
    v5 += 2;
    --v6;
  }
  while ( v6 );
  return IoAddTriageDumpDataBlock((ULONG)&MiTriageDumpData, (PVOID)0x40);
}
