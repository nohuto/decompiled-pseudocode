/*
 * XREFs of ??$move@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@0@0V12@@Z @ 0x1802C1A8C
 * Callers:
 *     ?clear_region@?$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1802C47FC (-clear_region@-$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CBetter.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1802C48AC (-ensure_extra_capacity@-$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_p.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@_J@Z @ 0x1802C1994 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@_J.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall std::move<std::move_iterator<CBetterCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CBetterCheckMPOCache::PlaneInfo *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rsi
  void *v8; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CBetterCheckMPOCache::PlaneInfo *> &,__int64>(
                 a4,
                 0x86BCA1AF286BCA1BuLL * ((a3 - (__int64)a2) >> 2));
  memmove_0(v8, a2, v5);
  result = a1;
  a4[2] = 0x86BCA1AF286BCA1BuLL * ((__int64)((__int64)v8 + v5 - *a4) >> 2);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
