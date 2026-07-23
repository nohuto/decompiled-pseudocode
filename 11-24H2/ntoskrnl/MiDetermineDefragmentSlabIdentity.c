/*
 * XREFs of MiDetermineDefragmentSlabIdentity @ 0x14068888C
 * Callers:
 *     MiEstablishDefragSlabEntries @ 0x14068894C (MiEstablishDefragSlabEntries.c)
 * Callees:
 *     MiEnumerateSlabAllocatorsEx @ 0x14046321C (MiEnumerateSlabAllocatorsEx.c)
 */

__int64 __fastcall MiDetermineDefragmentSlabIdentity(__int64 a1)
{
  unsigned __int8 *v1; // rdi
  unsigned __int8 i; // si
  unsigned int v4; // r9d
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  unsigned __int64 *v7; // rdx
  unsigned __int8 j; // cl
  __int64 v9; // rax
  __int64 result; // rax
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v1 = (unsigned __int8 *)(a1 + 88);
  if ( (*(_DWORD *)(a1 + 84) & 4) == 0 )
  {
    for ( i = 0; i <= 0x40u; ++i )
    {
      v4 = *(_DWORD *)(a1 + 68);
      v5 = *(_QWORD *)a1;
      v11 = *(_DWORD *)(a1 + 72);
      *v1 = i;
      MiEnumerateSlabAllocatorsEx(v5, (__int64)MiCountSlabContextFreePagesByIdentity, a1, v4, v11);
    }
    *(_DWORD *)(a1 + 84) |= 4u;
  }
  v6 = *(unsigned int *)(a1 + 76);
  v7 = (unsigned __int64 *)(a1 + 96);
  *v1 = -1;
  for ( j = 0; j <= 0x40u; ++j )
  {
    if ( *v7 >= v6 )
    {
      v9 = *v1;
      if ( (_BYTE)v9 == 0xFF || *(_QWORD *)(a1 + 8 * v9 + 96) < *v7 )
        *v1 = j;
    }
    ++v7;
  }
  result = *(unsigned __int8 *)(a1 + 88);
  if ( (_BYTE)result == 0xFF )
  {
    if ( *(_QWORD *)(a1 + 608) )
    {
      *(_QWORD *)(a1 + 608) = 0LL;
      *(_DWORD *)(a1 + 84) |= 8u;
      *(_BYTE *)(a1 + 88) = 64;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8 * result + 96) = 0LL;
  }
  return result;
}
