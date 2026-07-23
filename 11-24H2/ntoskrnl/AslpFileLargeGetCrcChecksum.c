/*
 * XREFs of AslpFileLargeGetCrcChecksum @ 0x140810984
 * Callers:
 *     AslpFileLargeGetChecksumAttributes @ 0x140810890 (AslpFileLargeGetChecksumAttributes.c)
 * Callees:
 *     AslComputeCrc32 @ 0x140808DAC (AslComputeCrc32.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileLargeGetCrcChecksum(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  int v7; // eax
  unsigned int v8; // r8d
  _BYTE *v9; // r11

  *a1 = 0;
  v4 = *(_QWORD *)(*a2 + 16LL);
  if ( v4 < 0x100000 )
    return 3221225485LL;
  if ( !a2[6] )
    return 3221225485LL;
  v5 = a2[7];
  if ( v5 < 0x1000 || !a2[2] || a2[3] < 0x1000uLL || a2[4] )
    return 3221225485LL;
  if ( v4 - a2[8] <= v5 )
  {
    v7 = AslComputeCrc32(0, (_BYTE *)a2[2], 0x1000u);
    *a1 = AslComputeCrc32(v7, v9, v8);
    return 0LL;
  }
  else
  {
    AslLogCallPrintf(0, (unsigned int)"AslpFileLargeGetCrcChecksum", 887, (unsigned int)"FileSize      : %I64u");
    AslLogCallPrintf(0, (unsigned int)"AslpFileLargeGetCrcChecksum", 888, (unsigned int)"CrcFileStart  : %I64u");
    AslLogCallPrintf(0, (unsigned int)"AslpFileLargeGetCrcChecksum", 889, (unsigned int)"ViewFileOffset: %I64u");
    AslLogCallPrintf(0, (unsigned int)"AslpFileLargeGetCrcChecksum", 890, (unsigned int)"ViewFileSize  : %u");
    AslLogCallPrintf(0, (unsigned int)"AslpFileLargeGetCrcChecksum", 891, (unsigned int)"CrcViewOffset : %I64u");
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileLargeGetCrcChecksum",
      895,
      (unsigned int)"Alignment error in the end of file view for CRC checksum");
    return 3221226016LL;
  }
}
