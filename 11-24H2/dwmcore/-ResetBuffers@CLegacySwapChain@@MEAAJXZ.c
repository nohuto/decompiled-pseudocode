/*
 * XREFs of ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x1801B6390
 * Callers:
 *     ?ResetBuffers@CLegacyStereoSwapChain@@MEAAJXZ @ 0x1802CAC30 (-ResetBuffers@CLegacyStereoSwapChain@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCBufferResource@CLegacySwapChain@@_K0@Z @ 0x1801B65F8 (-reserve_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResour.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801B6730 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil.c)
 *     ?Create@CLegacySwapChainBuffer@@SAJPEAVCLegacySwapChain@@AEBUD2D_SIZE_U@@IPEAPEAV1@@Z @ 0x1801B6850 (-Create@CLegacySwapChainBuffer@@SAJPEAVCLegacySwapChain@@AEBUD2D_SIZE_U@@IPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B691C (--1-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateBackBuffer@CLegacySwapChain@@IEAAJPEAUID3D11Texture2D@@@Z @ 0x1801B6D80 (-CreateBackBuffer@CLegacySwapChain@@IEAAJPEAUID3D11Texture2D@@@Z.c)
 *     ?ReleaseBackBuffer@CLegacySwapChain@@IEAAXXZ @ 0x1801B6FC0 (-ReleaseBackBuffer@CLegacySwapChain@@IEAAXXZ.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B7030 (-clear@-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V.c)
 *     ?clear@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B7058 (-clear@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResource@CLegac.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::ResetBuffers(__int64 **this)
{
  unsigned int v2; // esi
  unsigned int i; // r15d
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int BackBuffer; // eax
  __int64 *v8; // rcx
  const struct D2D_SIZE_U *v9; // rax
  int v10; // eax
  struct ID3D11Texture2D *v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  struct CLegacySwapChainBuffer **v14; // rax
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF
  struct ID3D11Texture2D *v17; // [rsp+90h] [rbp+48h] BYREF
  struct CLegacySwapChainBuffer *v18; // [rsp+98h] [rbp+50h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+60h] BYREF

  v2 = 0;
  CLegacySwapChain::ReleaseBackBuffer((CLegacySwapChain *)this);
  detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::clear(this + 38);
  detail::vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>::clear(this + 47);
  *((_BYTE *)this + 277) = 0;
  if ( !this[36] )
  {
    v2 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, -2003304307, 0x38Au, 0LL);
    return v2;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 124) )
      return v2;
    v4 = this[36];
    v5 = *v4;
    v17 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, struct ID3D11Texture2D **))(v5 + 72))(
           v4,
           i,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v17);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v6, 0x376u, 0LL);
      goto LABEL_15;
    }
    if ( !i )
    {
      BackBuffer = CLegacySwapChain::CreateBackBuffer((CLegacySwapChain *)this, v17);
      v2 = BackBuffer;
      if ( BackBuffer < 0 )
        break;
    }
    v8 = this[37];
    v18 = 0LL;
    v9 = (const struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v8 + 88))(v8, v16);
    v10 = CLegacySwapChainBuffer::Create((struct CLegacySwapChain *)this, v9, i, &v18);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v10, 0x382u, 0LL);
      wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(&v18);
LABEL_15:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
      return v2;
    }
    v11 = v17;
    v12 = (_QWORD *)detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::reserve_region(
                      this + 38,
                      ((char *)this[39] - (char *)this[38]) >> 4);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      v12,
      (__int64)v11);
    v12[1] = 0LL;
    (**(void (__fastcall ***)(_QWORD, GUID *))*v12)(*v12, &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b);
    v13 = this[48] - this[47];
    v20 = 0LL;
    v19 = 0LL;
    v14 = (struct CLegacySwapChainBuffer **)detail::vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>::reserve_region(
                                              this + 47,
                                              v13);
    *v14 = v18;
    wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(&v20);
    if ( v17 )
      ((void (__fastcall *)(struct ID3D11Texture2D *))v17->lpVtbl->Release)(v17);
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, BackBuffer, 0x37Bu, 0LL);
  if ( v17 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v17->lpVtbl->Release)(v17);
  return v2;
}
