/*
 * XREFs of MiGetLargeVadMappingIndex @ 0x1404F5CEC
 * Callers:
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiGetLargeVadMappingIndex(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 *v7; // rbp
  __int64 ProtoPteAddress; // rax
  unsigned __int64 *v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  v4 = 1;
  v5 = a2 >> 12;
  v6 = v5 & 0xFFFFFFFFC0000LL;
  if ( (v5 & 0xFFFFFFFFC0000LL) >= (*(unsigned int *)(a1 + 24) | (unsigned __int64)(v2 << 32))
    && v6 + 0x3FFFF <= (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    MiGetProtoPteAddress(a1, v5, 12, &v10);
    v7 = v10;
    if ( (v10[6] & 0xC0000000) == 0x80000000 )
    {
      ProtoPteAddress = MiGetProtoPteAddress(a1, v6, 4, &v11);
      if ( v11 == v7 && ProtoPteAddress == v11[1] )
        return 2;
    }
  }
  return v4;
}
