/*
 * XREFs of ?reserve_region@?$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVPlaneInfo@CBetterCheckMPOCache@@_K0@Z @ 0x1802BB404
 * Callers:
 *     ??0CBetterCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z @ 0x1802B8958 (--0CBetterCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@0@0V12@@Z @ 0x1802B85A0 (--$move_backward@V-$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@std@@V-$checked_array_ite.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VPlaneInfo@CBetterCheckMPOCache@@@detail@@V?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@@detail@@YAXV?$basic_iterator@VPlaneInfo@CBetterCheckMPOCache@@@0@0V?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@@Z @ 0x1802B86D8 (--$move_backward_uninitialized@V-$basic_iterator@VPlaneInfo@CBetterCheckMPOCache@@@detail@@V-$ch.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1802BB24C (-ensure_extra_capacity@-$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_p.c)
 */

char *__fastcall detail::vector_facade<CBetterCheckMPOCache::PlaneInfo,detail::buffer_impl<CBetterCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::reserve_region(
        const void **a1,
        __int64 a2,
        __int64 a3)
{
  char *v5; // rdi
  char *v6; // rax
  signed __int64 v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int128 v12; // [rsp+20h] [rbp-60h]
  __int128 v13; // [rsp+20h] [rbp-60h]
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h]
  char v16[32]; // [rsp+60h] [rbp-20h] BYREF
  char *v17; // [rsp+B0h] [rbp+30h] BYREF
  char *v18; // [rsp+C0h] [rbp+40h] BYREF

  v18 = (char *)a3;
  detail::buffer_impl<CBetterCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v5 = (char *)*a1;
  v6 = (char *)a1[1];
  *((_QWORD *)&v12 + 1) = 1LL;
  v7 = 0x86BCA1AF286BCA1BuLL * ((v6 - (_BYTE *)*a1) >> 2);
  v8 = v7 - a2;
  *(_QWORD *)&v12 = (char *)*a1 + 4 * ((v6 - (_BYTE *)*a1) >> 2);
  if ( !(_QWORD)v12 )
    goto LABEL_11;
  v18 = (char *)a1[1];
  v9 = v7 - a2;
  v14 = v12;
  if ( v8 > 1 )
    v9 = 1LL;
  v15 = 1LL;
  v17 = &v6[-76 * v9];
  detail::move_backward_uninitialized<detail::basic_iterator<CBetterCheckMPOCache::PlaneInfo>,stdext::checked_array_iterator<CBetterCheckMPOCache::PlaneInfo *>>(
    &v17,
    (__int64 *)&v18,
    (__int64 *)&v14);
  if ( v8 <= 1 )
  {
    v10 = 76 * a2;
    goto LABEL_10;
  }
  *(_QWORD *)&v13 = v5;
  *((_QWORD *)&v13 + 1) = v7;
  if ( v7 )
  {
    if ( !v5 || v7 < 0 )
LABEL_11:
      _invalid_parameter_noinfo_noreturn();
  }
  v10 = 76 * a2;
  v14 = v13;
  v15 = v7;
  std::move_backward<std::move_iterator<CBetterCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CBetterCheckMPOCache::PlaneInfo *>>(
    (__int64)v16,
    &v5[v10],
    (__int64)&v5[76 * v7 - 76],
    &v14);
LABEL_10:
  a1[1] = (char *)a1[1] + 76;
  return &v5[v10];
}
