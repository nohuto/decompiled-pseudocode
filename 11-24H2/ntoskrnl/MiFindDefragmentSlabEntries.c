/*
 * XREFs of MiFindDefragmentSlabEntries @ 0x140688CC4
 * Callers:
 *     MiEstablishDefragSlabEntries @ 0x14068894C (MiEstablishDefragSlabEntries.c)
 * Callees:
 *     MiEnumerateSlabAllocatorsEx @ 0x14046321C (MiEnumerateSlabAllocatorsEx.c)
 */

unsigned __int64 __fastcall MiFindDefragmentSlabEntries(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r9d
  unsigned __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 84);
  v9 = 0LL;
  v3 = v1 & 0xFFFFFF9F;
  *(_DWORD *)(a1 + 84) = v3;
  if ( (v3 & 0x10) == 0 )
  {
    v3 |= 0x20u;
    *(_DWORD *)(a1 + 84) = v3;
  }
  if ( *(_QWORD *)(a1 + 56) )
    *(_DWORD *)(a1 + 84) = v3 | 0x40;
  v4 = *(_DWORD *)(a1 + 72);
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 68);
  if ( v4 != 8 )
  {
    MiEnumerateSlabAllocatorsEx(v5, (__int64)MiCountSlabContextAvailablePagesForDefrag, (__int64)&v9, v6, v4);
    result = *(unsigned int *)(a1 + 76);
    if ( v9 < result )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
      return result;
    }
    return MiEnumerateSlabAllocatorsEx(
             *(_QWORD *)a1,
             (__int64)MiFindDefragmentSlabEntriesHelper,
             a1,
             *(_DWORD *)(a1 + 68),
             *(_DWORD *)(a1 + 72));
  }
  result = MiEnumerateSlabAllocatorsEx(v5, (__int64)MiFindDefragmentSlabEntriesHelperByIdentity, a1, v6, 8u);
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    result = *(_QWORD *)(a1 + 48);
    if ( !result || v8 == result )
    {
      result = *(unsigned int *)(a1 + 84);
      if ( (result & 8) != 0 )
      {
        *(_QWORD *)(a1 + 48) = 0LL;
        *(_DWORD *)(a1 + 84) = result & 0xFFFFFF8F | 0x20;
        return MiEnumerateSlabAllocatorsEx(
                 *(_QWORD *)a1,
                 (__int64)MiFindDefragmentSlabEntriesHelper,
                 a1,
                 *(_DWORD *)(a1 + 68),
                 *(_DWORD *)(a1 + 72));
      }
    }
  }
  return result;
}
