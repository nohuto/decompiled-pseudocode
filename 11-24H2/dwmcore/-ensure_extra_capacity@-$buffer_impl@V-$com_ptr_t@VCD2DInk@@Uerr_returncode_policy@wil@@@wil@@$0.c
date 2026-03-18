/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801EA2FC
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801EA17C (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V-$buff.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x180069194 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  LPVOID v8; // rax
  __int64 *v9; // rbp
  __int64 *v10; // rbx
  LPVOID v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rcx
  bool v16; // zf
  __int64 *v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-58h]
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  result = (v3 - v4) >> 3;
  if ( result < a2 )
  {
    v6 = (v4 - *(_QWORD *)a1) >> 3;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801EA440LL);
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - *(_QWORD *)a1) >> 3),
           (v3 - *(_QWORD *)a1) >> 3,
           v6 + a2);
    v8 = operator new[](saturated_mul(v7, 8uLL));
    v9 = *(__int64 **)(a1 + 8);
    v10 = *(__int64 **)a1;
    *(_QWORD *)&v18 = v8;
    *((_QWORD *)&v18 + 1) = v6;
    v11 = v8;
    v12 = ((__int64)v9 - *(_QWORD *)a1) >> 3;
    v19 = v18;
    v20 = 0LL;
    v13 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
            &v19,
            v12)
        - (_QWORD)v10;
    while ( v10 != v9 )
    {
      v14 = *v10;
      *v10 = 0LL;
      *(__int64 *)((char *)v10++ + v13) = v14;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    v15 = *(__int64 **)a1;
    v16 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v11;
    if ( v16 )
      v15 = 0LL;
    operator delete(v15);
    v17 = *(__int64 **)a1;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 8 * v6;
    result = (unsigned __int64)&v17[v7];
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
