/*
 * XREFs of KiAbDetermineMinOwnerCpuPriority @ 0x140408340
 * Callers:
 *     KiAbForceProcessLockEntry @ 0x140408194 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAbDetermineMinOwnerCpuPriority(__int64 a1, char *a2)
{
  __int64 result; // rax
  char v3; // r9
  unsigned int v4; // eax
  char v5; // r10
  char v6; // cl
  unsigned int v7; // r10d

  result = *(_QWORD *)(a1 + 48);
  if ( result )
    v3 = *(_BYTE *)(result + 24);
  else
    v3 = 30;
  *a2 = v3;
  if ( !*(_BYTE *)(a1 + 9) )
  {
    v4 = *(_DWORD *)(a1 + 80) & 0x3FFFFFFF;
    if ( v4 )
    {
      v3 = *a2;
      _BitScanReverse(&v7, v4);
      v5 = v7 + 1;
    }
    else
    {
      v5 = 0;
    }
    result = *(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16);
    v6 = *(_BYTE *)(result + 563);
    if ( v6 > v5 )
    {
      v5 = *(_BYTE *)(result + 563);
      if ( v6 > 30 )
        v5 = 30;
    }
    if ( v5 < v3 )
      *a2 = v5;
  }
  return result;
}
