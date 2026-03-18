/*
 * XREFs of _SysCtxInternalEnumSubkeyCallback @ 0x140467768
 * Callers:
 *     _RegRtlEnumKeyWithCallback @ 0x140992760 (_RegRtlEnumKeyWithCallback.c)
 * Callees:
 *     _PnpCtxInternalEnumKeyCallback @ 0x1404677B0 (_PnpCtxInternalEnumKeyCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SysCtxInternalEnumSubkeyCallback(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // r9

  v3 = *a3;
  v4 = a3[2];
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a3[1] == PnpCtxInternalEnumKeyCallback )
    return PnpCtxInternalEnumKeyCallback(v3, a1, a2, v4);
  else
    return guard_dispatch_icall_no_overrides(v3, a1, a2, v4);
}
