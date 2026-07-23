/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x1408C3EF8
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409AE4D8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C3F80 (_PnpRegQueryValueIndirect.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(a1 + 520);
  if ( !v7 || v7 == PnpRegQueryValueIndirect )
    return PnpRegQueryValueIndirect(a1, a2, a3, a4, a5, a6, a7);
  else
    return guard_dispatch_icall_no_overrides(a1, a2);
}
