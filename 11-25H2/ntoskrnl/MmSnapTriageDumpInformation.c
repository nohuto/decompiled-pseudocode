/*
 * XREFs of MmSnapTriageDumpInformation @ 0x14066C5B8
 * Callers:
 *     IoWriteCrashDump @ 0x14058EFA4 (IoWriteCrashDump.c)
 *     IopCollectTriageDumpData @ 0x14059000C (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14059204C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     HvlQueryVsmConnection @ 0x140456060 (HvlQueryVsmConnection.c)
 *     MiAddTriageDumpPtes @ 0x14066BAA8 (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  IoAddTriageDumpDataBlock((ULONG)&MiState, (PVOID)0xC1C0);
  IoAddTriageDumpDataBlock((ULONG)&MiSystemPartition, (PVOID)0x5D40);
  qword_140EF4A48 = 0LL;
  dword_140EF4A3C = 0;
  qword_140EF4A58 = 0LL;
  *(_QWORD *)&MiTriageDumpData = qword_140E3A540;
  dword_140EF4A28 = dword_140E2FF30;
  dword_140EF4A2C = dword_140E2FF2C;
  dword_140EF4A30 = dword_140E2FF58;
  dword_140EF4A34 = dword_140E2FF5C;
  qword_140EF4A40 = KeFeatureBits;
  dword_140EF4A38 = dword_140E2FF10 + dword_140E2FF14 + dword_140E2FF18;
  LODWORD(qword_140EF4A48) = MEMORY[0xFFFFF78000000240];
  qword_140EF4A50 = MiFlags;
  HvlQueryVsmConnection(&qword_140EF4A58);
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
