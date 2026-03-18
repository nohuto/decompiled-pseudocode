/*
 * XREFs of CmpFireCleanupNotifications @ 0x14084AAD0
 * Callers:
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCallbackFatalFilter @ 0x1407C2194 (CmpCallbackFatalFilter.c)
 *     VrpRegistryCallback @ 0x14084D490 (VrpRegistryCallback.c)
 */

__int64 __fastcall CmpFireCleanupNotifications(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]

  result = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v3 = (_QWORD *)(a1 + 72);
  for ( i = *(_QWORD **)(a1 + 72); i != v3; i = (_QWORD *)*i )
  {
    v5 = i[5];
    *(_QWORD *)&v7 = a1;
    *((_QWORD *)&v7 + 1) = i[7];
    v6 = *(_QWORD *)(v5 + 32);
    if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v5 + 40) == VrpRegistryCallback )
      result = VrpRegistryCallback(v6, 40LL, &v7);
    else
      result = guard_dispatch_icall_no_overrides(v6);
  }
  return result;
}
