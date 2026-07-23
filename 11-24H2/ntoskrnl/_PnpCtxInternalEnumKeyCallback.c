/*
 * XREFs of _PnpCtxInternalEnumKeyCallback @ 0x14045F250
 * Callers:
 *     _SysCtxInternalEnumSubkeyCallback @ 0x14045F208 (_SysCtxInternalEnumSubkeyCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409F8880 (DrvDbGetObjectSubKeyCallback.c)
 */

__int64 __fastcall PnpCtxInternalEnumKeyCallback(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD, _QWORD); // r10
  __int64 v5; // rcx
  __int64 v6; // r9

  v4 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a4[1];
  v5 = *a4;
  v6 = a4[2];
  if ( v4 == DrvDbGetObjectSubKeyCallback )
    return DrvDbGetObjectSubKeyCallback(v5, a2, a3, v6);
  else
    return guard_dispatch_icall_no_overrides(v5, a2);
}
