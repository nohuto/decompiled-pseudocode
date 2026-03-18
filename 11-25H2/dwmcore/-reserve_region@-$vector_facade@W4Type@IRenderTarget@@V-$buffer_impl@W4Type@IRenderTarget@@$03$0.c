/*
 * XREFs of ?reserve_region@?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4Type@IRenderTarget@@_K0@Z @ 0x180271C74
 * Callers:
 *     ?NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z @ 0x18023A8CC (-NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x1802522B0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<enum IRenderTarget::Type,detail::buffer_impl<enum IRenderTarget::Type,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        void *a3)
{
  __int64 v3; // r13
  __int64 v5; // rdx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r14
  LPVOID v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  LPVOID v13; // rsi
  signed __int64 v14; // rdi
  void *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rsi
  _DWORD *v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  _DWORD *v22; // rbx
  __int64 v23; // rax
  _DWORD *v24; // r10
  _DWORD *v25; // r9
  __int64 v26; // r14
  signed __int64 v27; // rdi
  __int64 v28; // rax
  __int128 v30; // [rsp+20h] [rbp-40h] BYREF
  __int64 v31; // [rsp+30h] [rbp-30h]
  __int128 v32; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h]
  void *v34; // [rsp+A0h] [rbp+40h] BYREF

  v34 = a3;
  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - v3) >> 2) )
  {
    v7 = (v3 - *(_QWORD *)a1) >> 2;
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v9 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 2, v8);
    v10 = operator new[](saturated_mul(v9, 4uLL));
    v11 = *(_QWORD **)a1;
    v12 = *((_QWORD *)a1 + 1);
    v13 = v10;
    v31 = 0LL;
    v14 = v12 - (_QWORD)v11;
    *(_QWORD *)&v30 = v10;
    *((_QWORD *)&v30 + 1) = v7;
    v33 = 0LL;
    v32 = v30;
    v15 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
                    &v32,
                    v14 >> 2);
    memmove_0(v15, v11, v14);
    v16 = *(_QWORD **)a1;
    *(_QWORD *)a1 = v13;
    v34 = 0LL;
    if ( v16 == (_QWORD *)((char *)a1 + 24) )
      v16 = 0LL;
    operator delete(v16);
    v17 = *(_QWORD **)a1;
    *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 4 * v7;
    *((_QWORD *)a1 + 2) = (char *)v17 + 4 * v9;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v34);
  }
  v18 = *(_QWORD **)a1;
  v19 = (_DWORD *)*((_QWORD *)a1 + 1);
  v20 = ((__int64)v19 - *(_QWORD *)a1) >> 2;
  v21 = v20 - a2;
  v22 = (_DWORD *)(4 * v20 + *(_QWORD *)a1);
  if ( !v22 )
    goto LABEL_12;
  v23 = ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 2) - a2;
  if ( v21 > 1 )
    v23 = 1LL;
  v24 = &v19[-v23];
  if ( v19 != v24 )
  {
    v25 = v19 - 1;
    *v22 = *v25;
    if ( v25 != v24 )
LABEL_12:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v21 <= 1 )
  {
    v26 = 4 * a2;
  }
  else
  {
    if ( v20 && (!v18 || v20 < 0) )
      goto LABEL_12;
    *((_QWORD *)&v30 + 1) = v20;
    v26 = 4 * a2;
    v31 = v20;
    *(_QWORD *)&v30 = v18;
    v27 = 4 * v20 - 4 * a2 - 4;
    v28 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(&v30, -(v27 >> 2));
    memmove_0((void *)(v28 - v27), (char *)v18 + 4 * a2, v27);
  }
  *((_QWORD *)a1 + 1) += 4LL;
  return (__int64)v18 + v26;
}
