/*
 * XREFs of ?clear_region@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801DE940
 * Callers:
 *     ??1?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801DE900 (--1-$vector_facade@VPlaneInfo@CCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vl.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@_J@Z @ 0x180247C50 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@_J@std@@.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 v6; // r14
  const void *v7; // rbx
  signed __int64 v8; // rdi
  void *v9; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a1;
  result = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - v4) >> 5);
  if ( a3 > result )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x1801DE9F6LL);
  }
  v6 = 160 * a3;
  if ( a3 != result )
  {
    v10[2] = 0LL;
    v7 = (const void *)(v6 + v4);
    v10[0] = v4;
    v8 = 160 * result - v6;
    v10[1] = result;
    v9 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *> &,__int64>(
                   v10,
                   0xCCCCCCCCCCCCCCCDuLL * (v8 >> 5));
    result = (unsigned __int64)memmove_0(v9, v7, v8);
  }
  a1[1] -= v6;
  return result;
}
