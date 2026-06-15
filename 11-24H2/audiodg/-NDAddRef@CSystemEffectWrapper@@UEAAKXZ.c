/*
 * XREFs of ?NDAddRef@CSystemEffectWrapper@@UEAAKXZ @ 0x140019C60
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140019CC0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::NDAddRef(CSystemEffectWrapper *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

  v1 = *((_QWORD *)this - 1);
  while ( 1 )
  {
    if ( v1 < 0 )
      return Microsoft::WRL::Details::SafeUnknownIncrementReference(
               (Microsoft::WRL::Details *)(2 * v1 + 16),
               (volatile int *)((unsigned __int64)v1 >> 63));
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      break;
    v3 = v1 + 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this - 1, v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
