/*
 * XREFs of ?_Tidy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180048A64
 * Callers:
 *     ??1?$_Tidy_guard@V?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x1802CE8DC (--1-$_Tidy_guard@V-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@s.c)
 *     _dynamic_atexit_destructor_for__error__ @ 0x180707180 (_dynamic_atexit_destructor_for__error__.c)
 *     _dynamic_atexit_destructor_for__responding__ @ 0x180707260 (_dynamic_atexit_destructor_for__responding__.c)
 *     _dynamic_atexit_destructor_for__idle__ @ 0x1807072E0 (_dynamic_atexit_destructor_for__idle__.c)
 *     _dynamic_atexit_destructor_for__thinking__ @ 0x180707300 (_dynamic_atexit_destructor_for__thinking__.c)
 *     _dynamic_atexit_destructor_for__listening__ @ 0x1807073E0 (_dynamic_atexit_destructor_for__listening__.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180048B14 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802DF760 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::vector<std::vector<Windows::UI::Color>>::_Tidy(void **a1)
{
  char *v1; // rbx
  char *v3; // rsi
  char *v4; // rcx
  __int64 v5; // rax
  const struct std::nothrow_t *v6; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    while ( v1 != v3 )
    {
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v1);
      v1 += 24;
    }
    v4 = (char *)*a1;
    v5 = (_BYTE *)a1[2] - (_BYTE *)*a1;
    v7 = *a1;
    v6 = (const struct std::nothrow_t *)(8 * (v5 >> 3));
    v8 = (unsigned __int64)v6;
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v8);
      v4 = (char *)v7;
      v6 = (const struct std::nothrow_t *)v8;
    }
    operator delete(v4, v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
