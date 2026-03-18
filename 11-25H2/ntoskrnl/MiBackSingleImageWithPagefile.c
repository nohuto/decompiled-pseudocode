/*
 * XREFs of MiBackSingleImageWithPagefile @ 0x1407D7C78
 * Callers:
 *     MiBackSystemImageWithPagefile @ 0x1407D7CFC (MiBackSystemImageWithPagefile.c)
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 *     MiSnapDriverRange @ 0x140A39B68 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiBackSingleImageWithPagefile(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  volatile signed __int64 *v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  v2 = 0;
  do
  {
    v2 = MiSnapDriverRange(a1, v2, 8, 0, (__int64)&v4, (__int64)&v5);
    if ( v4 )
      MiMakeDriverPagesPrivate(a1, v4, v5, 4);
  }
  while ( v2 );
  result = MiGetBaseLoaderPortion(a1);
  *(_DWORD *)(result + 184) |= 0x10u;
  return result;
}
