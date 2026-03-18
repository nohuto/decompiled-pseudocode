/*
 * XREFs of ?RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x180225DF8
 * Callers:
 *     ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180225DB0 (-RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVIRenderTarget@@V?$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18013EE28 (-clear_region@-$vector_facade@PEAVIRenderTarget@@V-$buffer_impl@PEAVIRenderTarget@@$03$00Vlibera.c)
 *     ??$_Emplace_reallocate@AEAPEAVIRenderTarget@@@?$vector@V?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVIRenderTarget@@@Z @ 0x1801E028C (--$_Emplace_reallocate@AEAPEAVIRenderTarget@@@-$vector@V-$com_ptr_t@VIRenderTarget@@Uerr_returnc.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18023484C (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vlibe.c)
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::RemoveRenderTarget(CRenderTargetManager *this, struct IRenderTarget *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rcx
  struct IRenderTarget **j; // rbx
  _QWORD *i; // rdx
  __int64 trivial_8; // rax
  __int64 v11; // r8
  struct IRenderTarget *v12; // rcx
  CGlobalComposition *v13; // rcx
  int v14; // r8d
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  struct IRenderTarget *v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v16 = a2;
  v4 = *((_QWORD *)this + 17);
  if ( v4 == *((_QWORD *)this + 18)
    || (trivial_8 = _std_find_trivial_8(v4, *((_QWORD *)this + 18), a2), v11 = *((_QWORD *)this + 18), trivial_8 == v11) )
  {
    if ( *((_BYTE *)this + 744) )
    {
      if ( *((_QWORD *)this + 21) == *((_QWORD *)this + 22) )
      {
        std::vector<wil::com_ptr_t<IRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<IRenderTarget * &>(
          (__int64 **)this + 20,
          *((__int64 **)this + 21),
          (__int64 *)&v16);
      }
      else
      {
        wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
          *((_QWORD **)this + 21),
          (__int64)a2);
        *((_QWORD *)this + 21) += 8LL;
      }
    }
    else
    {
      v15 = 0LL;
      v5 = (**(__int64 (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))a2)(
             a2,
             &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
             &v15);
      v7 = v15;
      if ( v5 >= 0 )
      {
        for ( i = (_QWORD *)*((_QWORD *)this + 3); i != *((_QWORD **)this + 4); ++i )
        {
          if ( *i == v15 )
          {
            v13 = g_pComposition;
            v14 = CCommonRegistryData::m_compositorClockPolicy;
            if ( *i == *(_QWORD *)this )
            {
              *(_QWORD *)this = 0LL;
              if ( !v14 )
                *((_BYTE *)v13 + 6492) = 1;
            }
            if ( *i == *((_QWORD *)this + 1) )
            {
              *((_QWORD *)this + 1) = 0LL;
              if ( v14 == 1 )
                *((_BYTE *)v13 + 6492) = 1;
            }
            *((_BYTE *)this + 745) = 1;
            *((_BYTE *)this + 750) = 1;
            detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
              (char *)this + 24,
              ((__int64)i - *((_QWORD *)this + 3)) >> 3,
              1LL,
              v6);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
            return;
          }
        }
      }
      else
      {
        for ( j = (struct IRenderTarget **)*((_QWORD *)this + 10); j != *((struct IRenderTarget ***)this + 11); ++j )
        {
          if ( *j == a2 )
          {
            v12 = *j;
            v17 = 0LL;
            if ( (**(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))v12)(
                   v12,
                   &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e,
                   &v17) >= 0 )
              *((_BYTE *)this + 750) = 1;
            detail::vector_facade<IRenderTarget *,detail::buffer_impl<IRenderTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
              (__int64 *)this + 10,
              ((__int64)j - *((_QWORD *)this + 10)) >> 3,
              1LL);
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            v7 = v15;
            break;
          }
        }
      }
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else
  {
    memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v11 - (trivial_8 + 8));
    *((_QWORD *)this + 18) -= 8LL;
  }
}
