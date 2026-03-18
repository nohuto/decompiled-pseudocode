/*
 * XREFs of BcdSetBootBcdAsSystemStore @ 0x140C5C8E8
 * Callers:
 *     CmpSetSystemValues @ 0x140C480A0 (CmpSetSystemValues.c)
 * Callees:
 *     BcdSetSystemStore @ 0x140811E00 (BcdSetSystemStore.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     BiSetRegistryValue @ 0x14085DF2C (BiSetRegistryValue.c)
 *     BiOpenKeyNonBcd @ 0x1409C12C4 (BiOpenKeyNonBcd.c)
 */

__int64 BcdSetBootBcdAsSystemStore()
{
  int v0; // ebx
  HANDLE v2; // [rsp+40h] [rbp+8h] BYREF
  void *v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v0 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine\\BCD00000000", 0xF003Fu, &v2);
  if ( v0 >= 0 )
  {
    v0 = BiOpenKey((__int64)v2, L"Description", 0x2001Fu, &v3);
    if ( v0 >= 0 )
    {
      v0 = BiSetRegistryValue((__int64)v3, L"KeyName", 0LL, 1u, L"BCD00000000", 0x18u);
      if ( v0 >= 0 )
        v0 = BcdSetSystemStore((__int64)v2);
    }
    if ( v3 )
      BiCloseKey(v3);
  }
  if ( v2 )
    BiCloseKey(v2);
  return (unsigned int)v0;
}
