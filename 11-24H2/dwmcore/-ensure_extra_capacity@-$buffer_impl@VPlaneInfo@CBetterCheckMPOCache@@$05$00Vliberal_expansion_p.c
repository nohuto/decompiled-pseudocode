/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1802BB24C
 * Callers:
 *     ?reserve_region@?$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVPlaneInfo@CBetterCheckMPOCache@@_K0@Z @ 0x1802BB404 (-reserve_region@-$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CBett.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@0@0V12@@Z @ 0x1802B844C (--$move@V-$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@std@@V-$checked_array_iterator@PEA.c)
 */

void __fastcall detail::buffer_impl<CBetterCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  _BYTE *v4; // rcx
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  const void *v9; // rax
  __int64 v10; // r8
  const void *v11; // rdx
  const void *v12; // rbx
  void *v13; // rcx
  bool v14; // zf
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]
  void *v19; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0x86BCA1AF286BCA1BuLL;
  v4 = a1[2];
  v5 = a1[1];
  if ( 0x86BCA1AF286BCA1BuLL * ((v4 - v5) >> 2) < a2 )
  {
    v6 = 0x86BCA1AF286BCA1BuLL * ((v5 - (_BYTE *)*a1) >> 2);
    v7 = v6 + a2;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(v3 * ((v4 - (_BYTE *)*a1) >> 2)),
           v3 * ((v4 - (_BYTE *)*a1) >> 2),
           v7);
    v9 = operator new[](saturated_mul(v8, 0x4CuLL));
    v10 = (__int64)a1[1];
    v11 = *a1;
    *(_QWORD *)&v15 = v9;
    *((_QWORD *)&v15 + 1) = v6;
    v12 = v9;
    v16 = 0LL;
    v17 = v15;
    v18 = 0LL;
    std::move<std::move_iterator<CBetterCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CBetterCheckMPOCache::PlaneInfo *>>(
      (__int64)&v15,
      v11,
      v10,
      &v17);
    v13 = (void *)*a1;
    v14 = *a1 == a1 + 3;
    v19 = 0LL;
    *a1 = v12;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    a1[1] = (char *)*a1 + 76 * v6;
    a1[2] = (char *)*a1 + 76 * v8;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v19);
  }
}
