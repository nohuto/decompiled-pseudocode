/*
 * XREFs of AslpFileLargeGetCrcChecksum @ 0x1800A7490
 * Callers:
 *     AslpFileLargeGetChecksumAttributes @ 0x1800A739C (AslpFileLargeGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslComputeCrc32 @ 0x18009D590 (AslComputeCrc32.c)
 */

__int64 __fastcall AslpFileLargeGetCrcChecksum(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // r8d
  _BYTE *v8; // r11

  *a1 = 0;
  v4 = *(_QWORD *)(*a2 + 16LL);
  if ( v4 < 0x100000 || !a2[5] || a2[6] < 0x1000uLL || !a2[2] || a2[3] < 0x1000uLL || a2[4] )
    return 3221225485LL;
  if ( v4 - a2[7] <= a2[6] )
  {
    v6 = AslComputeCrc32(0, (_BYTE *)a2[2], 0x1000u);
    *a1 = AslComputeCrc32(v6, v8, v7);
    return 0LL;
  }
  else
  {
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(1LL);
    return 3221226016LL;
  }
}
