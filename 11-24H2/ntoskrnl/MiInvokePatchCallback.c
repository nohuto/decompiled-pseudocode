/*
 * XREFs of MiInvokePatchCallback @ 0x1407F36A4
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiInvokePatchCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  int v8; // ecx
  _DWORD v9[4]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0LL;
  v9[1] = *(_DWORD *)(a2 + 8);
  v9[2] = 0;
  v9[0] = 1;
  result = guard_dispatch_icall_no_overrides(v9, 12LL, a3, a4);
  if ( (int)result >= 0 )
    return 0LL;
  v8 = *(_DWORD *)(a2 + 8);
  if ( v8 )
  {
    LOBYTE(v4) = v8 != 1;
    KeBugCheckEx(0x1Au, v4 + 333251, *(_QWORD *)(a1 + 48), *(_QWORD *)a2, (int)result);
  }
  return result;
}
