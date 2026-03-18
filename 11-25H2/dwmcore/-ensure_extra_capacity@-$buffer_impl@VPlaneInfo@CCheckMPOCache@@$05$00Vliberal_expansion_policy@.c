/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801FF3E8
 * Callers:
 *     ?reserve_region@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVPlaneInfo@CCheckMPOCache@@_K0@Z @ 0x1801FF2B8 (-reserve_region@-$vector_facade@VPlaneInfo@CCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CCheckMPOCa.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@0@0V12@@Z @ 0x180252B5C (--$uninitialized_move@V-$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V-$checked_array_iter.c)
 */

void __fastcall detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  LPVOID v7; // rax
  void *v8; // r8
  void *v9; // rdx
  LPVOID v10; // rbx
  void *v11; // rcx
  bool v12; // zf
  __int128 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]
  void *v17; // [rsp+80h] [rbp+8h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((v3 - v4) >> 5) < a2 )
  {
    v5 = 0xCCCCCCCCCCCCCCCDuLL * ((v4 - (_BYTE *)*a1) >> 5);
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801FF464LL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(0xCCCCCCCCCCCCCCCDuLL * ((v3 - (_BYTE *)*a1) >> 5)),
           0xCCCCCCCCCCCCCCCDuLL * ((v3 - (_BYTE *)*a1) >> 5),
           v5 + a2);
    v7 = operator new[](saturated_mul(v6, 0xA0uLL));
    v8 = a1[1];
    v9 = *a1;
    *(_QWORD *)&v13 = v7;
    *((_QWORD *)&v13 + 1) = v5;
    v10 = v7;
    v14 = 0LL;
    v15 = v13;
    v16 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_move<std::move_iterator<CCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>>)(
      &v13,
      v9,
      v8,
      &v15);
    v11 = *a1;
    v12 = *a1 == a1 + 3;
    v17 = 0LL;
    *a1 = v10;
    if ( v12 )
      v11 = 0LL;
    operator delete(v11);
    a1[1] = (char *)*a1 + 160 * v5;
    a1[2] = (char *)*a1 + 160 * v6;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v17);
  }
}
