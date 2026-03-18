/*
 * XREFs of ?clear_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800B3090
 * Callers:
 *     ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B22A0 (-RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x1801DB664 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 *     ?RemoveStaleRealization@CWindowBackgroundBitmapProducer@@QEAAXAEBVRenderTargetInfo@@@Z @ 0x1801DBA10 (-RemoveStaleRealization@CWindowBackgroundBitmapProducer@@QEAAXAEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x1800DD334 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ??$move@V?$move_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@0@0V12@@Z @ 0x180255B44 (--$move@V-$move_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_d.c)
 */

__int64 __fastcall detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 i; // rbx
  __int64 result; // rax
  _QWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v7 = a1[1] - *a1;
  v8 = a2 + a3;
  v9 = v7 >> 3;
  v10 = a2;
  if ( a2 + a3 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = v4 + 8 * v9;
    if ( a2 + a3 == v9 )
      goto LABEL_3;
  }
  if ( v10 && (!v4 || v10 < 0 || v9 < v10) )
    _invalid_parameter_noinfo_noreturn();
  v14[2] = v10;
  v14[0] = v4;
  v14[1] = v9;
  result = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *>,stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *>>)(
             v15,
             v4 + 8 * v8,
             v3,
             v14);
LABEL_3:
  v11 = 8 * a3;
  for ( i = v3 - v11; i != v3; i += 8LL )
    result = std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(i);
  a1[1] -= v11;
  return result;
}
