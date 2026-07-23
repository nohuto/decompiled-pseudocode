/*
 * XREFs of _SysCtxInternalEnumSubkeyCallback @ 0x14045F208
 * Callers:
 *     _RegRtlEnumKeyWithCallback @ 0x14097D7A0 (_RegRtlEnumKeyWithCallback.c)
 * Callees:
 *     _PnpCtxInternalEnumKeyCallback @ 0x14045F250 (_PnpCtxInternalEnumKeyCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SysCtxInternalEnumSubkeyCallback(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax

  v3 = *a3;
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a3[1] == PnpCtxInternalEnumKeyCallback )
    return PnpCtxInternalEnumKeyCallback(v3, a1, a2, a3[2]);
  else
    return guard_dispatch_icall_no_overrides(v3, a1);
}
