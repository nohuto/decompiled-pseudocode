/*
 * XREFs of ?clear@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800DD11C
 * Callers:
 *     ??1?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800DD0C0 (--1-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCC.c)
 * Callees:
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x1800DD334 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 */

__int64 __fastcall detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp

  v1 = *a1;
  result = (a1[1] - *a1) >> 3;
  if ( result )
  {
    v4 = 8 * result;
    v5 = 8 * result + v1;
    while ( v1 != v5 )
    {
      result = std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(v1);
      v1 += 8LL;
    }
    a1[1] -= v4;
  }
  return result;
}
