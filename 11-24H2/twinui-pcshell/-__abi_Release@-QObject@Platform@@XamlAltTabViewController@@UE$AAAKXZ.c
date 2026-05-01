/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x180187960
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@W7E$AAAKXZ @ 0x1806AF3D0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAKXZ @ 0x1806AF3E0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAKXZ @ 0x1806AF3F0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAKXZ @ 0x1806AF400 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAKXZ @ 0x1806AF410 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAKXZ @ 0x1806AF420 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAKXZ @ 0x1806AF430 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WKA@E$AAAKXZ @ 0x1806AF450 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WKA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1801879B4 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x180187A98 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x1801DD4A8 (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlAltTabViewController__UE_AAAKXZ(__int64 a1)
{
  __abi_FTMWeakRefData *v1; // rsi
  unsigned int v3; // ebx

  v1 = (__abi_FTMWeakRefData *)(a1 + 128);
  v3 = __abi_FTMWeakRefData::Decrement(a1 + 128);
  if ( !v3 )
  {
    XamlAltTabViewController::~XamlAltTabViewController(a1);
    __abi_FTMWeakRefData::ReleaseControlBlock(v1);
  }
  return v3;
}
