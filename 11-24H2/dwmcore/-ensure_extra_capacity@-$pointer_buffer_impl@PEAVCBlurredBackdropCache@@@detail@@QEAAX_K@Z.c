/*
 * XREFs of ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_K@Z @ 0x1801D2424
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x1801D27D0 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x1801017D8 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ?size@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ @ 0x1801D24DC (-size@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1801D2784 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?replace@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEAAPEADPEAU?$aligned_storage_for@PEAVCBlurredBackdropCache@@@2@@Z @ 0x18028E5D0 (-replace@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEAAPEADPEAU-$aligned_storage.c)
 */

void __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::ensure_extra_capacity(
        _DWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  const void *v9; // rax
  void *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+18h]
  void *v16; // [rsp+80h] [rbp+20h] BYREF

  v4 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::size();
  if ( (*a1 & 3) != 0 )
  {
    if ( (*a1 & 3) == 1LL )
    {
      v5 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 8);
      goto LABEL_5;
    }
    if ( (*a1 & 3) == 2LL )
    {
      v5 = 0LL;
      goto LABEL_5;
    }
    if ( (*a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v5 = 1LL;
LABEL_5:
  if ( v5 - v4 < a2 )
  {
    v6 = v4 + a2;
    if ( v4 + a2 < v4 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801D24D4LL);
    }
    if ( v6 == 1 )
    {
      *(_QWORD *)a1 = 3LL;
    }
    else
    {
      v7 = operator new[](8 * v6 + 16);
      v16 = 0LL;
      *v7 = 0LL;
      v8 = v7 + 2;
      v7[1] = 0LL;
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v16);
      v12 = 0LL;
      *(_QWORD *)&v11 = v8;
      *((_QWORD *)&v11 + 1) = v4;
      v9 = (const void *)detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
      v13 = v11;
      v14 = 0LL;
      std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
        (__int64)&v11,
        v9,
        (__int64)v9 + 8 * v4,
        &v13);
      v16 = 0LL;
      v10 = (void *)detail::pointer_buffer_impl<CBlurredBackdropCache *>::replace(a1, v8);
      operator delete(v10);
      *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 16) = v4;
      *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 8) = v6;
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v16);
    }
  }
}
