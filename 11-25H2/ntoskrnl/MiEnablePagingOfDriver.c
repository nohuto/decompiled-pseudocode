/*
 * XREFs of MiEnablePagingOfDriver @ 0x140C3D810
 * Callers:
 *     <none>
 * Callees:
 *     MiSetPagingOfDriver @ 0x14049D9E4 (MiSetPagingOfDriver.c)
 *     MiImagePagable @ 0x1407D7EB0 (MiImagePagable.c)
 *     MiSnapDriverRange @ 0x140A39B68 (MiSnapDriverRange.c)
 *     MiLockPagableSections @ 0x140C4A60C (MiLockPagableSections.c)
 */

__int64 __fastcall MiEnablePagingOfDriver(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v3; // edi
  unsigned __int64 *v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  v5 = 0LL;
  *(_DWORD *)(a1 + 104) |= 0x400000u;
  if ( MiImagePagable(a1, v1) )
  {
    v3 = 0;
    do
    {
      v3 = MiSnapDriverRange(a1, v3, 1, 0LL, (unsigned __int64 *)&v5, &v6);
      if ( v5 )
        MiSetPagingOfDriver(a1, v5, v6);
    }
    while ( v3 );
    MiLockPagableSections(a1, 1LL);
  }
  return 0LL;
}
