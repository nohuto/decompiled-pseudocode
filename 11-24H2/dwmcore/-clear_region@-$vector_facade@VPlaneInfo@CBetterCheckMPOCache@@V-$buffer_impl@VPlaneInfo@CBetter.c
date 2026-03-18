/*
 * XREFs of ?clear_region@?$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1802BB19C
 * Callers:
 *     ??1?$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1802B8C7C (--1-$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CBetterCheckMPOCac.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@0@0V12@@Z @ 0x1802B844C (--$move@V-$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@std@@V-$checked_array_iterator@PEA.c)
 */

void __fastcall detail::vector_facade<CBetterCheckMPOCache::PlaneInfo,detail::buffer_impl<CBetterCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v8; // [rsp+20h] [rbp-68h]
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h]
  char v11[40]; // [rsp+60h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = a3;
  v6 = 0x86BCA1AF286BCA1BuLL * ((a1[1] - v4) >> 2);
  if ( a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v7 = 76 * v5;
  if ( v5 != v6 )
  {
    *(_QWORD *)&v8 = v4;
    *((_QWORD *)&v8 + 1) = v6;
    v10 = 0LL;
    v9 = v8;
    std::move<std::move_iterator<CBetterCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CBetterCheckMPOCache::PlaneInfo *>>(
      (__int64)v11,
      (const void *)(v7 + v4),
      v4 + 76 * v6,
      &v9);
  }
  a1[1] -= v7;
}
