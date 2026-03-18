/*
 * XREFs of Bulk_Stage_ProcessSegment @ 0x140004034
 * Callers:
 *     Bulk_Stage_CalculateBytesTransferred @ 0x140003FB8 (Bulk_Stage_CalculateBytesTransferred.c)
 * Callees:
 *     <none>
 */

char __fastcall Bulk_Stage_ProcessSegment(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v5; // rcx
  char v7; // r10
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 i; // r9

  v5 = *(_QWORD *)(a3 + 16);
  v7 = 0;
  v8 = v5 + 16LL * a4;
  v9 = (*(_DWORD *)(a3 + 44) & 0xFFFFFFF0) + v5 - 16;
  for ( i = 16LL * a4 + *(_QWORD *)(a3 + 24); ; i += 16LL )
  {
    if ( v8 > v9 )
      return v7;
    if ( i == *(_QWORD *)a2 )
      v7 = 1;
    if ( (unsigned __int8)HIBYTE(*(_WORD *)(v8 + 12)) >> 2 == 1 )
      break;
    if ( (unsigned __int8)HIBYTE(*(_WORD *)(v8 + 12)) >> 2 == 6 )
      return v7;
    if ( (unsigned __int8)HIBYTE(*(_WORD *)(v8 + 12)) >> 2 == 7 )
    {
      if ( v7 )
        return v7;
      *a5 = 0;
    }
    else if ( v7 )
    {
      return v7;
    }
LABEL_21:
    v8 += 16LL;
  }
  if ( !v7 )
  {
    *a5 += *(_DWORD *)(v8 + 8) & 0x1FFFF;
    goto LABEL_21;
  }
  if ( *(_BYTE *)(a2 + 11) == 2
    || *(_BYTE *)(a2 + 11) == 3
    || *(_BYTE *)(a2 + 11) == 4
    || *(_BYTE *)(a2 + 11) == 6
    || *(_BYTE *)(a2 + 11) == 26 )
  {
LABEL_14:
    *a5 += (*(_DWORD *)(v8 + 8) & 0x1FFFF) - (*(_DWORD *)(a2 + 8) & 0xFFFFFF);
    return v7;
  }
  if ( *(_BYTE *)(a2 + 11) != 28 )
  {
    if ( *(_BYTE *)(a2 + 11) != 36 )
      return v7;
    goto LABEL_14;
  }
  *a5 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  return v7;
}
