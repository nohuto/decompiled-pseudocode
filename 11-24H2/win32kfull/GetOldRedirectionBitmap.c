/*
 * XREFs of GetOldRedirectionBitmap @ 0x14002D5AC
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x14002D554 (DeleteOldRedirectionBitmap.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

__int64 __fastcall GetOldRedirectionBitmap(__int64 a1)
{
  __int64 v2; // rdi
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  v2 = 0LL;
  UserSessionState = W32GetUserSessionState();
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41422), 1LL);
  if ( Prop )
    return *(_QWORD *)(Prop + 8);
  return v2;
}
