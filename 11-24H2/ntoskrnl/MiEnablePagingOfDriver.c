/*
 * XREFs of MiEnablePagingOfDriver @ 0x140C50BD0
 * Callers:
 *     <none>
 * Callees:
 *     MiSetPagingOfDriver @ 0x140497850 (MiSetPagingOfDriver.c)
 *     MiImagePagable @ 0x1407E8340 (MiImagePagable.c)
 *     MiSnapDriverRange @ 0x140A33798 (MiSnapDriverRange.c)
 *     MiLockPagableSections @ 0x140C5DB28 (MiLockPagableSections.c)
 */

__int64 __fastcall MiEnablePagingOfDriver(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v3; // edi
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a1 + 104) |= 0x400000u;
  if ( MiImagePagable(a1, v1) )
  {
    v3 = 0;
    do
    {
      v3 = MiSnapDriverRange(a1, v3, 1, 0LL, (unsigned __int64 *)&v6, &v7);
      if ( v6 )
        MiSetPagingOfDriver(a1, v6, v7, v4);
    }
    while ( v3 );
    MiLockPagableSections(a1, 1LL);
  }
  return 0LL;
}
