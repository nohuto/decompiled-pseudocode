/*
 * XREFs of ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXI@Z @ 0x1802131D4
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z @ 0x1802130F0 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??$reset@PEAE$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z @ 0x18018BB14 (--$reset@PEAE$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CCompressedSourceBitmap::HrInitFromCompressedBytes(void **this, const void *a2, unsigned int a3)
{
  void *v6; // rax
  void *v7; // rcx

  v6 = MIDL_user_allocate(a3);
  std::unique_ptr<unsigned char [0]>::reset<unsigned char *,0>(this + 19, v6);
  v7 = this[19];
  if ( !v7 )
    return 2147942414LL;
  *((_DWORD *)this + 40) = a3;
  memcpy_0(v7, a2, a3);
  return 0LL;
}
