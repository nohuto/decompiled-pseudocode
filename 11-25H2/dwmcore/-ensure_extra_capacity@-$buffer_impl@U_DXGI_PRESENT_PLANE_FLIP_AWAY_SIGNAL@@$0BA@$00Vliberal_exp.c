/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1802D3610
 * Callers:
 *     ?reserve_region@?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAU_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@_K0@Z @ 0x1802D374C (-reserve_region@-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRE.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@Z @ 0x18024CC4C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@std.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // r14
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbp
  const void *v8; // rax
  const void *v9; // rbx
  signed __int64 v10; // rdi
  const void *v11; // rsi
  void *v12; // rax
  void *v13; // rcx
  bool v14; // zf
  __int64 v15; // rbp
  __int128 v16; // [rsp+20h] [rbp-68h]
  __int128 v17; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h]
  void *v19; // [rsp+90h] [rbp+8h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  if ( (v3 - v4) >> 4 < a2 )
  {
    v5 = (v4 - (_BYTE *)*a1) >> 4;
    v6 = v5 + a2;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 4),
           (v3 - (_BYTE *)*a1) >> 4,
           v6);
    v8 = operator new[](saturated_mul(v7, 0x10uLL));
    v9 = *a1;
    *(_QWORD *)&v16 = v8;
    v10 = (_BYTE *)a1[1] - (_BYTE *)*a1;
    *((_QWORD *)&v16 + 1) = v5;
    v11 = v8;
    v17 = v16;
    v18 = 0LL;
    v12 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<Windows::Graphics::RectInt32 *> &,__int64>(
                    &v17,
                    v10 >> 4);
    memmove_0(v12, v9, v10);
    v13 = (void *)*a1;
    v14 = *a1 == a1 + 3;
    v19 = 0LL;
    *a1 = v11;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    v15 = (__int64)*a1 + 16 * v7;
    a1[1] = (char *)*a1 + 16 * v5;
    a1[2] = (const void *)v15;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v19);
  }
}
