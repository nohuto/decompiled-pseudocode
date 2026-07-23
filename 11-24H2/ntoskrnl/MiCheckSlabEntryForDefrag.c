/*
 * XREFs of MiCheckSlabEntryForDefrag @ 0x1406879D4
 * Callers:
 *     MiFindDefragmentSlabEntriesHelper @ 0x140688D90 (MiFindDefragmentSlabEntriesHelper.c)
 *     MiFindDefragmentSlabEntriesHelperByIdentity @ 0x140688E30 (MiFindDefragmentSlabEntriesHelperByIdentity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckSlabEntryForDefrag(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // r9d
  unsigned int v5; // r11d
  int v6; // eax
  int v7; // edi
  int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  char v11; // cl
  __int64 v12; // rdi

  v4 = a2[21] + a2[22];
  if ( !v4 )
    return 0LL;
  v5 = *(_DWORD *)(a1 + 76);
  if ( v4 >= v5 )
    return 0LL;
  v6 = a2[23];
  if ( (v6 & 0x200) != 0 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 84);
  v8 = v7;
  v9 = 0;
  if ( (v7 & 0x10) != 0 && (v6 & 1) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( !v10 || *(_DWORD *)(v10 + 84) + *(_DWORD *)(v10 + 88) < v4 )
    {
      *(_QWORD *)(a1 + 40) = a2;
      v8 = v7;
      if ( v4 >= v5 >> 1 )
      {
        v8 = v7 | 0x20;
        *(_DWORD *)(a1 + 84) = v7 | 0x20;
      }
    }
  }
  v11 = v8;
  if ( !*(_QWORD *)(a1 + 56) )
  {
    v12 = *(_QWORD *)(a1 + 48);
    if ( !v12 || v12 == *(_QWORD *)(a1 + 40) || *(_DWORD *)(v12 + 84) + *(_DWORD *)(v12 + 88) > v4 )
    {
      v11 = v8;
      *(_QWORD *)(a1 + 48) = a2;
      if ( v4 <= v5 >> 2 && a2 != *(_DWORD **)(a1 + 40) )
      {
        v11 = v8 | 0x40;
        *(_DWORD *)(a1 + 84) = v8 | 0x40;
      }
    }
  }
  LOBYTE(v9) = (v11 & 0x60) == 96;
  return v9;
}
