/*
 * XREFs of ?UnInitialize@CCursorClip@@SAJXZ @ 0x1400D0A04
 * Callers:
 *     UnInitializeInputComponents @ 0x1400D0638 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CCursorClip@@AEAA@XZ @ 0x1400D0AC0 (--1CCursorClip@@AEAA@XZ.c)
 */

__int64 __fastcall CCursorClip::UnInitialize(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  char *v4; // rbx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 36296) )
  {
    UserSessionState = W32GetUserSessionState(v1);
    v4 = *(char **)(UserSessionState + 36296);
    if ( v4 )
    {
      CCursorClip::~CCursorClip(*(CCursorClip **)(UserSessionState + 36296));
      GreDeleteFastMutex(v4);
    }
    *(_QWORD *)(W32GetUserSessionState(v3) + 36296) = 0LL;
  }
  return 0LL;
}
