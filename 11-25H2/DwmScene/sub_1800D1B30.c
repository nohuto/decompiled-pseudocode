/*
 * XREFs of sub_1800D1B30 @ 0x1800D1B30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_18001B2B0 @ 0x18001B2B0 (sub_18001B2B0.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_1800D1B30(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  _QWORD v4[4]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+48h] [rbp-50h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  sub_180011B30(a1 + 8);
  if ( *(_BYTE *)(a1 + 64) )
  {
    std::string::string(v4, "Operation was cancelled");
    sub_18001B2B0((__int64)pExceptionObject, (__int64)v4, 0);
    sub_180011A5C((__int64)v4);
    pExceptionObject[0] = &Spectre::Utils::CancelledException::`vftable';
    throw (Spectre::Utils::CancelledException *)pExceptionObject;
  }
  return Mtx_unlock(v2);
}
