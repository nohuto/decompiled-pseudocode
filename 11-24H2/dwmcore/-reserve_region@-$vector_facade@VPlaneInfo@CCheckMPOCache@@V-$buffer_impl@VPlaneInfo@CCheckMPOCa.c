/*
 * XREFs of ?reserve_region@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVPlaneInfo@CCheckMPOCache@@_K0@Z @ 0x1801F2B88
 * Callers:
 *     ??$emplace_back@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x1801F2A78 (--$emplace_back@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@-$vector_facade@VPlaneInfo@CC.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801F2CB8 (-ensure_extra_capacity@-$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@.c)
 *     ??$move_backward@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@0@0V12@@Z @ 0x1802B863C (--$move_backward@V-$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V-$checked_array_iterator@.c)
 */

__int64 __fastcall detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdi
  _OWORD *v5; // r9
  signed __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  _OWORD *v10; // r11
  __int64 v11; // rbx
  unsigned __int64 v13; // rdx
  _OWORD *v14; // r14
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-30h]
  _BYTE v18[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v4 = *a1;
  v17 = 0LL;
  v5 = (_OWORD *)a1[1];
  v16 = 1LL;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * (((__int64)v5 - v4) >> 5);
  v19 = 0LL;
  v7 = v6 - a2;
  v15 = v4 + 32 * (((__int64)v5 - v4) >> 5);
  if ( !v15 )
    goto LABEL_8;
  v19 = 1LL;
  v8 = v6 - a2;
  if ( v7 > 1 )
    v8 = 1LL;
  v17 = 1LL;
  v9 = 160 * v8;
  v10 = &v5[v9 / 0xFFFFFFFFFFFFFFF0uLL];
  if ( v5 != &v5[v9 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v13 = v17;
    v14 = (_OWORD *)(v15 + 160);
    do
    {
      v5 -= 10;
      if ( !v15 )
        goto LABEL_8;
      if ( !v13 )
        goto LABEL_8;
      --v13;
      v14 -= 10;
      if ( v13 >= v16 )
        goto LABEL_8;
      *v14 = *v5;
      v14[1] = v5[1];
      v14[2] = v5[2];
      v14[3] = v5[3];
      v14[4] = v5[4];
      v14[5] = v5[5];
      v14[6] = v5[6];
      v14[7] = v5[7];
      v14[8] = v5[8];
      v14[9] = v5[9];
    }
    while ( v5 != v10 );
  }
  if ( v7 > 1 )
  {
    if ( !v6 || v4 && v6 >= 0 )
    {
      v16 = v6;
      v17 = v6;
      v11 = 160 * a2;
      v15 = v4;
      ((void (__fastcall *)(_BYTE *, __int64, __int64, __int64 *))std::move_backward<std::move_iterator<CCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>>)(
        v18,
        v11 + v4,
        v4 + 160 * v6 - 160,
        &v15);
      goto LABEL_7;
    }
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  v11 = 160 * a2;
LABEL_7:
  a1[1] += 160LL;
  return v11 + v4;
}
