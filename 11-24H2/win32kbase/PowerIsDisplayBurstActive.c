/*
 * XREFs of PowerIsDisplayBurstActive @ 0x1400EE240
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x1400EDFA0 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PowerIsDisplayBurstActive(int *a1)
{
  _QWORD *UserSessionState; // rax
  int v3; // r9d
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  _BOOL8 result; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = 0;
  v4 = 0LL;
  v5 = UserSessionState[360];
  if ( v5 )
  {
    v9 = v5 + 2000;
    if ( v9 )
    {
      v4 = v9;
      v3 = 25;
    }
  }
  v6 = UserSessionState[359];
  if ( v6 )
  {
    v10 = v6 + 5000;
    if ( v10 > v4 )
    {
      v4 = v10;
      v3 = 5;
    }
  }
  v7 = UserSessionState[358];
  if ( v7 )
  {
    v11 = v7 + 25000;
    if ( v11 > v4 )
    {
      v4 = v11;
      v3 = 6;
    }
  }
  result = v4 >= (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( a1 )
    *a1 = v3;
  return result;
}
