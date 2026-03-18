/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18020DD64
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180064100 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x180069194 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 **v2; // rbx
  __int64 **v3; // rbp
  __int64 *v4; // r12
  unsigned __int64 v5; // r14
  LPVOID v6; // r15
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rcx
  bool v14; // zf
  __int64 *v15; // rcx
  __int64 *v16; // rcx
  LPVOID v17; // rax
  __int64 v18; // rdx
  __int128 v19; // [rsp+20h] [rbp-58h]
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]

  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 8);
  result = (v8 - v9) >> 3;
  if ( result < a2 )
  {
    v11 = (v9 - *(_QWORD *)a1) >> 3;
    if ( v11 + a2 >= v11 )
    {
      v5 = detail::liberal_expansion_policy::expand(
             (detail::liberal_expansion_policy *)((v8 - *(_QWORD *)a1) >> 3),
             (v8 - *(_QWORD *)a1) >> 3,
             v11 + a2);
      v17 = operator new[](saturated_mul(v5, 8uLL));
      v3 = *(__int64 ***)(a1 + 8);
      v2 = *(__int64 ***)a1;
      *(_QWORD *)&v19 = v17;
      *((_QWORD *)&v19 + 1) = v11;
      v4 = 0LL;
      v6 = v17;
      v18 = ((__int64)v3 - *(_QWORD *)a1) >> 3;
      v20 = v19;
      v21 = 0LL;
      v12 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
              &v20,
              v18)
          - (_QWORD)v2;
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    while ( v2 != v3 )
    {
      v16 = *v2;
      *v2 = v4;
      *(__int64 **)((char *)v2++ + v12) = v16;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    v13 = *(__int64 **)a1;
    v14 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v6;
    if ( v14 )
      v13 = v4;
    operator delete(v13);
    v15 = *(__int64 **)a1;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 8 * v11;
    result = (unsigned __int64)&v15[v5];
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
