/*
 * XREFs of NtUserWindowFromPoint @ 0x1C0062E70
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowFromPoint @ 0x1C0062EB8 (xxxWindowFromPoint.c)
 */

__int64 __fastcall NtUserWindowFromPoint(struct tagPOINT a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx

  EnterCrit(0LL, 0LL);
  v2 = (__int64 *)xxxWindowFromPoint(a1);
  v7 = 0LL;
  if ( v2 )
    v7 = *v2;
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
