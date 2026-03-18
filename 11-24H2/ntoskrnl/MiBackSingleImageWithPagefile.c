/*
 * XREFs of MiBackSingleImageWithPagefile @ 0x1407E7B30
 * Callers:
 *     MiBackSystemImageWithPagefile @ 0x1407E7BB4 (MiBackSystemImageWithPagefile.c)
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0508 (MiGetBaseLoaderPortion.c)
 *     MiSnapDriverRange @ 0x140A3DE88 (MiSnapDriverRange.c)
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
