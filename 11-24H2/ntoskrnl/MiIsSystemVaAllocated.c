/*
 * XREFs of MiIsSystemVaAllocated @ 0x14067AA90
 * Callers:
 *     MmAllocateSecurePoolMemory @ 0x14067DD58 (MmAllocateSecurePoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x14067DEA0 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14026CB38 (MiSystemVaToDynamicBitmap.c)
 */

__int64 MiIsSystemVaAllocated()
{
  unsigned __int64 v0; // rdx
  __int64 v1; // r8
  __int64 *v2; // r11
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 *v7; // r8
  __int64 v8; // r11
  __int64 *v9; // rbx
  bool v10; // zf
  __int64 v11; // rax

  v2 = MiSystemVaToDynamicBitmap(14);
  v3 = (v0 - v2[4]) >> 21;
  v4 = ((__int64)((((v0 + v1 - 1) >> 18) & 0x3FFFFFF8) - ((v0 >> 18) & 0x3FFFFFF8)) >> 3) + 1;
  if ( v3 >= *v2 )
    goto LABEL_12;
  if ( v4 > 1 )
  {
    if ( *v2 - v3 >= v4 )
    {
      v6 = v2[1];
      v7 = (__int64 *)(v6 + 8 * (v3 >> 6));
      v8 = *v7;
      v9 = (__int64 *)(v6 + 8 * ((v4 + v3 - 1) >> 6));
      if ( v7 == v9 )
      {
        v10 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v3) & v8) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v3;
      }
      else
      {
        if ( ((-1LL << v3) & v8) != -1LL << v3 )
          goto LABEL_12;
        while ( 1 )
        {
          v11 = *++v7;
          if ( v7 == v9 )
            break;
          if ( v11 != -1 )
            goto LABEL_12;
        }
        v10 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v4 + (unsigned __int8)v3 - 1)) & v11) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v4 + (unsigned __int8)v3 - 1);
      }
      LOBYTE(result) = v10;
      return (unsigned __int8)result;
    }
LABEL_12:
    LOBYTE(result) = 0;
    return (unsigned __int8)result;
  }
  if ( (__int64)((((v0 + v1 - 1) >> 18) & 0x3FFFFFF8) - ((v0 >> 18) & 0x3FFFFFF8)) >> 3 )
    goto LABEL_12;
  LOBYTE(result) = _bittest64((const signed __int64 *)(v2[1] + 8 * ((v0 - v2[4]) >> 27)), ((v0 - v2[4]) >> 21) & 0x3F);
  return (unsigned __int8)result;
}
