/*
 * XREFs of _dynamic_initializer_for__idle__ @ 0x180124BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x180048800 (--0-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allocato.c)
 *     ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x180124B3C (-_Buy_raw@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D4CD0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
int dynamic_initializer_for__idle__()
{
  char *v0; // rbx
  void *v2[2]; // [rsp+20h] [rbp-19h] BYREF
  __int64 v3; // [rsp+30h] [rbp-9h]
  char v4; // [rsp+38h] [rbp-1h] BYREF
  __int64 v5[2]; // [rsp+40h] [rbp+7h] BYREF
  _DWORD Src[12]; // [rsp+50h] [rbp+17h] BYREF

  Src[0] = 255;
  Src[1] = 255;
  Src[2] = 255;
  Src[3] = 255;
  Src[4] = 255;
  Src[5] = 255;
  Src[6] = 255;
  Src[7] = 255;
  Src[8] = 255;
  Src[9] = 255;
  Src[10] = 255;
  Src[11] = 255;
  *(_OWORD *)v2 = 0LL;
  v3 = 0LL;
  std::vector<int>::_Buy_raw(v2, 0xCuLL);
  v0 = (char *)v2[0];
  memmove_0(v2[0], Src, 0x30uLL);
  v2[1] = v0 + 48;
  v5[0] = (__int64)v2;
  v5[1] = (__int64)&v4;
  std::vector<std::vector<Windows::UI::Color>>::vector<std::vector<Windows::UI::Color>>(idle, v5);
  `eh vector destructor iterator'(
    v2,
    0x18uLL,
    1uLL,
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::~vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>);
  return atexit(dynamic_atexit_destructor_for__idle__);
}
