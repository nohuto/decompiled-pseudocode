/*
 * XREFs of KiAbTryIncrementIoWaiterCounts @ 0x1404083C0
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbForceProcessLockEntry @ 0x140408194 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAbTryIncrementIoWaiterCounts(_BYTE *a1, __int64 a2)
{
  char v3; // r11
  _BYTE *v4; // r9
  unsigned int v6; // r8d
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ecx

  if ( !a1[9] )
    return 0LL;
  v3 = a1[11];
  v4 = a1 + 11;
  if ( (v3 & 6) == 6 )
    return 0LL;
  v7 = *(_QWORD *)&a1[-88 * (a1[8] & 0x3F) - 16];
  v6 = 0;
  if ( (v3 & 2) == 0 )
  {
    v8 = (*(_DWORD *)(v7 + 1440) >> 9) & 7;
    v9 = *(_QWORD *)(*(_QWORD *)(v7 + 544) + 672LL);
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 1084);
      if ( v8 >= v10 )
        v8 = v10;
    }
    if ( v8 >= 2 )
      goto LABEL_12;
    if ( (struct _KTHREAD *)v7 == KeGetCurrentThread() )
    {
      if ( *(_DWORD *)(v7 + 1504) )
        goto LABEL_12;
    }
    else if ( *(_DWORD *)(v7 + 1504) )
    {
LABEL_12:
      ++*(_BYTE *)(a2 + 84);
      *v4 |= 2u;
      if ( *(_BYTE *)(a2 + 84) == 1 )
        v6 = 1;
    }
  }
  if ( (*v4 & 4) == 0 && (!*(_DWORD *)(v7 + 1512) || *(_DWORD *)(v7 + 1508)) )
  {
    *(_DWORD *)(a2 + 84) ^= ((unsigned __int16)*(_DWORD *)(a2 + 84) ^ (unsigned __int16)(*(_DWORD *)(a2 + 84) + 256)) & 0x7F00;
    *v4 |= 4u;
    if ( (*(_DWORD *)(a2 + 84) & 0x7F00) == 0x100 )
      v6 |= 2u;
  }
  return v6;
}
