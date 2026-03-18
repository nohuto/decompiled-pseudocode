/*
 * XREFs of ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18022939C
 * Callers:
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180103700 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180103FC0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x18021A138 (-RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 *     ??1?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180259D78 (--1-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansi.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x180069194 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r8
  bool v8; // zf
  const void *v9; // rbx
  signed __int64 v10; // rbp
  void *v11; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *a1;
  v6 = a2 + a3;
  v7 = (a1[1] - v5) >> 3;
  v8 = v6 == v7;
  if ( v6 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  if ( !v8 )
  {
    if ( a2 && (!v5 || a2 < 0 || v7 < a2) )
      _invalid_parameter_noinfo_noreturn();
    v9 = (const void *)(v5 + 8 * v6);
    v12[2] = a2;
    v12[0] = v5;
    v10 = 8 * v7 - 8 * v6;
    v12[1] = v7;
    v11 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
                    v12,
                    v10 >> 3);
    memmove_0(v11, v9, v10);
  }
  a1[1] += -8 * a3;
}
