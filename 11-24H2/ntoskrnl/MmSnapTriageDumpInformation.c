/*
 * XREFs of MmSnapTriageDumpInformation @ 0x1406790E8
 * Callers:
 *     IoWriteCrashDump @ 0x14058F7F8 (IoWriteCrashDump.c)
 *     IopCollectTriageDumpData @ 0x140590828 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14059287C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     HvlQueryVsmConnection @ 0x14044B190 (HvlQueryVsmConnection.c)
 *     MiAddTriageDumpPtes @ 0x1406785C8 (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  IoAddTriageDumpDataBlock((ULONG)&MiState, (PVOID)0xC1C0);
  IoAddTriageDumpDataBlock((ULONG)&MiSystemPartition, (PVOID)0x5D40);
  qword_140EF4F48 = 0LL;
  dword_140EF4F3C = 0;
  qword_140EF4F58 = 0LL;
  *(_QWORD *)&MiTriageDumpData = qword_140E3A8C0;
  dword_140EF4F28 = dword_140E302B8;
  dword_140EF4F2C = dword_140E302B4;
  dword_140EF4F30 = dword_140E302E0;
  dword_140EF4F34 = dword_140E302E4;
  qword_140EF4F40 = KeFeatureBits;
  dword_140EF4F38 = dword_140E30298 + dword_140E3029C + dword_140E302A0;
  LODWORD(qword_140EF4F48) = MEMORY[0xFFFFF78000000240];
  qword_140EF4F50 = MiFlags;
  HvlQueryVsmConnection(&qword_140EF4F58);
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
