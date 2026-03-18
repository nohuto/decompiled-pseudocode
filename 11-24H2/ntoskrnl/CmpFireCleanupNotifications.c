/*
 * XREFs of CmpFireCleanupNotifications @ 0x140846780
 * Callers:
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCallbackFatalFilter @ 0x1407D18BC (CmpCallbackFatalFilter.c)
 *     VrpRegistryCallback @ 0x140849230 (VrpRegistryCallback.c)
 */

__int64 __fastcall CmpFireCleanupNotifications(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v6; // rdi
  _QWORD *i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]

  result = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v6 = (_QWORD *)(a1 + 72);
  for ( i = *(_QWORD **)(a1 + 72); i != v6; i = (_QWORD *)*i )
  {
    v8 = i[5];
    *(_QWORD *)&v10 = a1;
    *((_QWORD *)&v10 + 1) = i[7];
    v9 = *(_QWORD *)(v8 + 32);
    if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v8 + 40) == VrpRegistryCallback )
      result = VrpRegistryCallback(v9, 40LL, &v10);
    else
      result = guard_dispatch_icall_no_overrides(v9, 40LL, &v10, a4);
  }
  return result;
}
