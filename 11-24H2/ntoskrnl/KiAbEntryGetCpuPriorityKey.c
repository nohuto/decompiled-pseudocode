/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x140282090
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbForceProcessLockEntry @ 0x140408194 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAbEntryGetCpuPriorityKey(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // eax
  char v3; // r8
  char v4; // cl
  unsigned int v5; // ecx
  unsigned int v6; // r8d

  if ( (*(_BYTE *)(a1 + 11) & 1) == 0 )
    return *(unsigned __int8 *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 9) )
  {
    v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 195LL);
    result = v5;
    if ( (char)v5 > 30 )
      return 30LL;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 80) & 0x3FFFFFFF;
    if ( v2 )
    {
      _BitScanReverse(&v6, v2);
      v3 = v6 + 1;
    }
    else
    {
      v3 = 0;
    }
    v4 = *(_BYTE *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 563LL);
    if ( v4 > v3 )
    {
      v3 = v4;
      if ( v4 > 30 )
        return 30;
    }
    return (unsigned __int8)v3;
  }
  return result;
}
