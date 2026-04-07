/*
 * XREFs of ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x1800DEE30
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18004CC78 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??1marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAA@XZ @ 0x1800DE67C (--1marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::Release(void *a1)
{
  unsigned int v2; // edi
  const struct std::nothrow_t *v3; // rdx

  v2 = winrt::impl::atomic_ref_count::operator--((__int64)a1 + 24);
  if ( !v2 && a1 )
  {
    `winrt::impl::make_marshaler'::`2'::marshaler::~marshaler((__int64)a1);
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, v3);
  }
  return v2;
}
