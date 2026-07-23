/*
 * XREFs of MiSlabEntryPageFreed @ 0x14044E870
 * Callers:
 *     MiInsertSlabEntry @ 0x14021E754 (MiInsertSlabEntry.c)
 *     MiFreePageToSlabAllocator @ 0x140250F18 (MiFreePageToSlabAllocator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSlabEntryPageFreed(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // dl
  __int64 *v4; // r10
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 result; // rax
  _QWORD *v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // r9d

  if ( *(_DWORD *)(a1 + 128) != 8 )
  {
    v3 = -1;
    v4 = (__int64 *)(a1 + 32);
    v5 = 255LL;
    goto LABEL_3;
  }
  v9 = *(_DWORD *)(a2 + 92);
  if ( (v9 & 4) != 0 )
  {
    v3 = (v9 >> 3) & 0x3F;
    v5 = v3;
  }
  else
  {
    v3 = -1;
    v5 = 255LL;
  }
  if ( v3 != 0xFF )
  {
    result = *(_QWORD *)(a1 + 32);
    v4 = (__int64 *)(result + 8 * v5);
LABEL_3:
    if ( v4 )
    {
      v6 = *v4;
      if ( v6 )
      {
        if ( v3 == 0xFF || v6 != 1 && (v10 = *(_DWORD *)(v6 + 92), (v10 & 4) != 0) && ((v10 >> 3) & 0x3F) == v3 )
        {
          result = *(unsigned int *)(v6 + 84);
          if ( *(_DWORD *)(a2 + 84) >= (unsigned int)result )
            return result;
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( v3 == 0xFF )
      return result;
    result = *(_QWORD *)(a1 + 32);
    v8 = (_QWORD *)(result + 8 * v5);
  }
  else
  {
    v8 = (_QWORD *)(a1 + 32);
  }
  if ( v8 )
    *v8 = a2;
  return result;
}
