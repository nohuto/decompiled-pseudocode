/*
 * XREFs of ??_G?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x180084690
 * Callers:
 *     ??_E?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x1800845F0 (--_E-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@$4PPPPPPPM@A@EAAPEAXI.c)
 * Callees:
 *     ??_D?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAXXZ @ 0x1800845B0 (--_D-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAXXZ.c)
 */

void *__fastcall std::wostringstream::`scalar deleting destructor'(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 136);
  std::wostringstream::`vbase destructor'(a1 - 136);
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}
