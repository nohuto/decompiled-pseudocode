/*
 * XREFs of _GetParent @ 0x1C006FC3C
 * Callers:
 *     _GetAncestor @ 0x1C003B268 (_GetAncestor.c)
 *     NtUserGetAncestor @ 0x1C006FB40 (NtUserGetAncestor.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C01F2348 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     xxxHelpLoop @ 0x1C0238C64 (xxxHelpLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetParent(_QWORD *a1)
{
  char v1; // dl

  v1 = *(_BYTE *)(a1[5] + 31LL) & 0xC0;
  if ( !v1 )
    return 0LL;
  if ( v1 == 64 )
    return a1[13];
  return a1[15];
}
