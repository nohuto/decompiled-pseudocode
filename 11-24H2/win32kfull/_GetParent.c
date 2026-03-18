/*
 * XREFs of _GetParent @ 0x1401789D8
 * Callers:
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1402AAFFC (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
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
