/*
 * XREFs of _PnpValidateObjectNameDispatch @ 0x1408E1BF4
 * Callers:
 *     _PnpValidateObjectName @ 0x1408E1AD4 (_PnpValidateObjectName.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PnpValidateObjectNameDispatch(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rbx
  _DWORD v9[16]; // [rsp+30h] [rbp-48h] BYREF

  v5 = a3;
  memset_0(v9, 0, sizeof(v9));
  if ( (_WORD)a4 || (unsigned int)(v5 - 1) > 0xA )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 8 * v5 + 296) )
    return 3221225474LL;
  v9[0] = a4;
  return guard_dispatch_icall_no_overrides(a1, a2);
}
