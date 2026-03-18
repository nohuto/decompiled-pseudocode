/*
 * XREFs of DifNotifyPluginSystemEvent @ 0x1406189A8
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140B82EA0 (VfNotifyVerifierOfEvent.c)
 *     VfPtFreePoolNotification @ 0x140BA96EC (VfPtFreePoolNotification.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

_UNKNOWN **__fastcall DifNotifyPluginSystemEvent(int a1, __int128 *a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  __int128 v9; // [rsp+40h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    if ( a1 != 1 || !a2 )
      return result;
    LODWORD(v7) = 1;
    v8 = *a2;
    DWORD2(v9) = *((_DWORD *)a2 + 4);
  }
  v5 = DifPluginSettings;
  v6 = 64LL;
  do
  {
    result = (_UNKNOWN **)*v5;
    if ( *v5 )
    {
      result = (_UNKNOWN **)result[2];
      if ( result )
        result = (_UNKNOWN **)guard_dispatch_icall_no_overrides(&v7, a2, a3, a4);
    }
    ++v5;
    --v6;
  }
  while ( v6 );
  return result;
}
