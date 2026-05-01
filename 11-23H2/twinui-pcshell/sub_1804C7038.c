/*
 * XREFs of sub_1804C7038 @ 0x1804C7038
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1804C7038(WindowEventDispatcher *a1, int a2)
{
  char v2; // cf
  char v3; // of
  _DWORD *v4; // rdi
  __int64 v5; // rsi

  if ( !v3 )
    JUMPOUT(0x1804C7015LL);
  BYTE1(a2) += *(_BYTE *)(v5 + 116) + v2;
  *v4 = *(_DWORD *)v5;
  return WindowEventDispatcher::OnIdleStateChanged(a1, a2);
}
