/*
 * XREFs of ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x18013D3B4
 * Callers:
 *     ?UpdateClientInfo@CDesktopTree@@MEAAXXZ @ 0x1801E6110 (-UpdateClientInfo@CDesktopTree@@MEAAXXZ.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x1800C33AC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x18013CFC4 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::push_back(
        detail::liberal_expansion_policy *a1,
        __int64 *a2)
{
  unsigned __int64 v4; // rsi
  char *v5; // r15
  _QWORD *v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  _QWORD *v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // r10
  __int64 result; // rax
  signed __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // r9
  unsigned __int64 v16; // rdi
  LPVOID v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  LPVOID v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  char *v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  void *v28; // [rsp+90h] [rbp+30h] BYREF

  v4 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3;
  if ( !((__int64)(*((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 1)) >> 3) )
  {
    if ( v4 + 1 >= v4 )
    {
      v16 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v4 + 1);
      v17 = operator new[](saturated_mul(v16, 8uLL));
      v18 = *((_QWORD *)a1 + 1);
      v19 = *(char **)a1;
      *(_QWORD *)&v24 = v17;
      *((_QWORD *)&v24 + 1) = v4;
      v20 = v17;
      v25 = 0LL;
      v26 = v24;
      v27 = 0LL;
      std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
        (__int64)&v24,
        v19,
        v18,
        &v26);
      v21 = *(char **)a1;
      v22 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
      v28 = 0LL;
      *(_QWORD *)a1 = v20;
      if ( v22 )
        v21 = 0LL;
      operator delete(v21);
      v23 = *(char **)a1;
      *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 8 * v4;
      *((_QWORD *)a1 + 2) = &v23[8 * v16];
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v28);
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
  }
  v5 = *(char **)a1;
  v6 = (_QWORD *)*((_QWORD *)a1 + 1);
  v7 = ((__int64)v6 - *(_QWORD *)a1) >> 3;
  v8 = v7 - v4;
  v9 = (_QWORD *)(8 * v7 + *(_QWORD *)a1);
  if ( !v9 )
    goto LABEL_10;
  v10 = ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3) - v4;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = &v6[-v10];
  if ( v6 != v11 )
  {
    v15 = v6 - 1;
    *v9 = *v15;
    if ( v15 != v11 )
LABEL_10:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v7 && (!v5 || v7 < 0) )
      goto LABEL_10;
    *((_QWORD *)&v24 + 1) = v7;
    v25 = v7;
    *(_QWORD *)&v24 = v5;
    v13 = 8 * v7 - 8 * v4 - 8;
    v14 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
            &v24,
            -(v13 >> 3));
    memmove_0((void *)(v14 - v13), &v5[8 * v4], v13);
  }
  *((_QWORD *)a1 + 1) += 8LL;
  result = *a2;
  *(_QWORD *)&v5[8 * v4] = *a2;
  return result;
}
