/*
 * XREFs of ?SnapFurtherFromEdge@WindowArrangement@@YA_NXZ @ 0x14021F210
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall WindowArrangement::SnapFurtherFromEdge(WindowArrangement *this, __int64 a2)
{
  char *v2; // rbx
  _DWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+2Ch] [rbp-1Ch] BYREF

  v4[0] = 0;
  v2 = (char *)v4;
  v4[1] = 1;
  v4[2] = 2;
  while ( v2 != &v5 )
  {
    this = *(WindowArrangement **)(W32GetUserSessionState(this, a2) + 63488);
    if ( *((_BYTE *)this + *(int *)v2) <= 1u )
      return 0;
    v2 += 4;
  }
  return 1;
}
