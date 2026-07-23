/*
 * XREFs of AslpFileLargeGetChecksumAttributes @ 0x140810890
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x140810600 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslpFileLargeGetChecksum @ 0x1408107B0 (AslpFileLargeGetChecksum.c)
 *     AslpFileLargeGetCrcChecksum @ 0x140810984 (AslpFileLargeGetCrcChecksum.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileLargeGetChecksumAttributes(__int64 a1, _QWORD *a2)
{
  int Checksum; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  Checksum = AslpFileLargeGetChecksum(&v8, a2);
  if ( Checksum >= 0 )
  {
    v5 = v8;
    *(_DWORD *)(a1 + 88) |= 1u;
    v8 = 0;
    *(_QWORD *)(a1 + 80) = v5;
    *(_DWORD *)(a1 + 64) = 2;
    *(_QWORD *)(a1 + 72) = 4LL;
    Checksum = AslpFileLargeGetCrcChecksum(&v8, a2);
    if ( Checksum >= 0 )
    {
      v6 = v8;
      *(_DWORD *)(a1 + 856) |= 1u;
      *(_QWORD *)(a1 + 848) = v6;
      Checksum = 0;
      *(_DWORD *)(a1 + 832) = 2;
      *(_QWORD *)(a1 + 840) = 4LL;
      return (unsigned int)Checksum;
    }
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileLargeGetChecksumAttributes",
      695,
      (unsigned int)"AslpFileGetCrcChecksum failed [%x]");
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileLargeGetChecksumAttributes",
      674,
      (unsigned int)"AslpFileLargeGetChecksum failed [%x]");
    *(_DWORD *)(a1 + 88) |= 2u;
  }
  *(_DWORD *)(a1 + 856) |= 2u;
  return (unsigned int)Checksum;
}
