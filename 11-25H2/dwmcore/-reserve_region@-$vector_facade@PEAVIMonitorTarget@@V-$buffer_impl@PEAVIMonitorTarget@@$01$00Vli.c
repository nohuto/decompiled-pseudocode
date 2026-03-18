/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1800C2FDC
 * Callers:
 *     ?EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ @ 0x1800C1D18 (-EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x1800C1E9C (-AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 *     ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x1800C2D54 (-CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C3598 (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C3124 (-ensure_extra_capacity@-$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansio.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x1800C33AC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbp
  _QWORD *v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  _QWORD *v8; // r11
  __int64 v9; // rax
  _QWORD *v10; // r10
  __int64 v11; // rsi
  signed __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v15; // rdx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v4 = *a1;
  v5 = (_QWORD *)a1[1];
  v6 = ((__int64)v5 - *a1) >> 3;
  v7 = v6 - a2;
  v8 = (_QWORD *)(8 * v6 + *a1);
  if ( !v8 )
    goto LABEL_2;
  v9 = ((a1[1] - *a1) >> 3) - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = &v5[-v9];
  if ( v5 != v10 )
  {
    v15 = v5 - 1;
    *v8 = *v15;
    if ( v15 != v10 )
LABEL_2:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v7 <= 1 )
  {
    v11 = 8 * a2;
  }
  else
  {
    if ( v6 && (!v4 || v6 < 0) )
      goto LABEL_2;
    v11 = 8 * a2;
    v16[0] = v4;
    v16[1] = v6;
    v16[2] = v6;
    v12 = 8 * v6 - v11 - 8;
    v13 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
            v16,
            -(v12 >> 3));
    memmove_0((void *)(v13 - v12), (const void *)(v11 + v4), v12);
  }
  a1[1] += 8LL;
  return v11 + v4;
}
