/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18024F21C
 * Callers:
 *     ?reserve_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCDelayUnpin@CD3DDevice@@_K0@Z @ 0x18024F0A8 (-reserve_region@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z @ 0x18024F364 (--$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x1802C1EF0 (--$uninitialized_move@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V-$checked_array_iterat.c)
 */

void __fastcall detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  char *v4; // rcx
  char *v5; // rsi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  char *v9; // rax
  char *v10; // r8
  void *v11; // rdx
  char *v12; // rbx
  void *v13; // rcx
  bool v14; // zf
  char *v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h]
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]
  void *v20; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0xAAAAAAAAAAAAAAABuLL;
  v4 = (char *)a1[2];
  v5 = (char *)a1[1];
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v4 - v5) >> 3) < a2 )
  {
    v6 = 0xAAAAAAAAAAAAAAABuLL * ((v5 - (_BYTE *)*a1) >> 3);
    v7 = v6 + a2;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(v3 * ((v4 - (_BYTE *)*a1) >> 3)),
           v3 * ((v4 - (_BYTE *)*a1) >> 3),
           v7);
    v9 = (char *)operator new[](saturated_mul(v8, 0x18uLL));
    v10 = (char *)a1[1];
    v11 = *a1;
    *(_QWORD *)&v16 = v9;
    *((_QWORD *)&v16 + 1) = v6;
    v12 = v9;
    v17 = 0LL;
    v18 = v16;
    v19 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, char *, __int128 *))std::uninitialized_move<std::move_iterator<CD3DDevice::CDelayUnpin *>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>)(
      &v16,
      v11,
      v10,
      &v18);
    detail::destruct_range<CD3DDevice::CDelayUnpin>(*a1);
    v13 = *a1;
    v14 = *a1 == a1 + 3;
    v20 = 0LL;
    *a1 = v12;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    v15 = (char *)*a1;
    a1[1] = (char *)*a1 + 24 * v6;
    a1[2] = &v15[24 * v8];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v20);
  }
}
