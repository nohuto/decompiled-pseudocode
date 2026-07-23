/*
 * XREFs of DifNotifyPluginSystemEvent @ 0x140616F68
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140B84EA0 (VfNotifyVerifierOfEvent.c)
 *     VfPtFreePoolNotification @ 0x140BAB6EC (VfPtFreePoolNotification.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

_UNKNOWN **__fastcall DifNotifyPluginSystemEvent(int a1, __int128 *a2)
{
  _UNKNOWN **result; // rax
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int128 v7; // [rsp+40h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a1 )
  {
    if ( a1 != 1 || !a2 )
      return result;
    LODWORD(v5) = 1;
    v6 = *a2;
    DWORD2(v7) = *((_DWORD *)a2 + 4);
  }
  v3 = DifPluginSettings;
  v4 = 64LL;
  do
  {
    result = (_UNKNOWN **)*v3;
    if ( *v3 )
    {
      result = (_UNKNOWN **)result[2];
      if ( result )
        result = (_UNKNOWN **)guard_dispatch_icall_no_overrides(&v5, a2);
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
