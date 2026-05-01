/*
 * XREFs of ?AddRef@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180002740
 * Callers:
 *     ?AddRef@CAppMemoryReport@System@Windows@@W7EAAKXZ @ 0x1800185F0 (-AddRef@CAppMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CAppMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x180018600 (-AddRef@CAppMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@CAppMemoryReport@System@Windows@@WBI@EAAKXZ @ 0x180018610 (-AddRef@CAppMemoryReport@System@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180002790 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

unsigned int __fastcall Windows::System::CAppMemoryReport::AddRef(Windows::System::CAppMemoryReport *this)
{
  signed __int64 v1; // rax
  int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 5);
  while ( 1 )
  {
    if ( v1 < 0 )
      return Microsoft::WRL::Details::SafeUnknownIncrementReference(
               (Microsoft::WRL::Details *)(2 * v1 + 16),
               (volatile int *)((unsigned __int64)v1 >> 63));
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      break;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
