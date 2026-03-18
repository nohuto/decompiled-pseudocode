/*
 * XREFs of xxxSetProcessWindowStation @ 0x140106C40
 * Callers:
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(v3 + 1176);
  if ( !v4 )
    return 3221225659LL;
  LOBYTE(v3) = 1;
  return v4(a1, v3);
}
