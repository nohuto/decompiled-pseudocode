/*
 * XREFs of ??_G?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x18004D8A4
 * Callers:
 *     ??_E?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x18004CF10 (--_E-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004CEB8 (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

void *__fastcall std::wistringstream::`scalar deleting destructor'(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 144);
  std::basic_istringstream<unsigned short>::`vbase destructor'(a1 - 144);
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}
