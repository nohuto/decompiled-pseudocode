/*
 * XREFs of DpiDxgkDdiSystemDisplayEnable @ 0x14008BDD4
 * Callers:
 *     DpiEnterSystemDisplay @ 0x14007D7F0 (DpiEnterSystemDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiSystemDisplayEnable(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64))(a1 + 744))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
