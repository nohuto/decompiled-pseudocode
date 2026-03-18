/*
 * XREFs of BgpConsoleDisplayCharacter @ 0x140BB0AB0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterEx @ 0x140697F6C (BgpDisplayCharacterEx.c)
 *     AnFwFadeCompletion @ 0x140BB358C (AnFwFadeCompletion.c)
 */

__int64 __fastcall BgpConsoleDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // esi
  __int64 v13; // rdi
  unsigned __int64 v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v17[3]; // [rsp+54h] [rbp-24h] BYREF

  v6 = a3;
  v7 = a2;
  BgpFwAcquireLock();
  v11 = qword_140EEFAB0;
  if ( qword_140EEFAB0 )
  {
    if ( (*(_DWORD *)(qword_140EEFAB0 + 8) & 0x10000) != 0 )
    {
      AnFwFadeCompletion();
      v11 = qword_140EEFAB0;
      *(_DWORD *)(qword_140EEFAB0 + 8) &= ~0x10000u;
    }
    v10 = v6 + 25 * v7;
    v13 = 3 * v10;
    if ( *(_WORD *)(v11 + 12 * v10 + 88) == a1
      && *(_DWORD *)(v11 + 12 * v10 + 80) == a4
      && *(_DWORD *)(v11 + 12 * v10 + 84) == a5 )
    {
      v12 = 0;
    }
    else
    {
      v12 = BgpDisplayCharacterEx(
              a1,
              *(__int64 **)(v11 + 40),
              *(_DWORD *)(v11 + 60) + *(_DWORD *)(v11 + 48) * (int)v7,
              *(_DWORD *)(v11 + 64) + *(_DWORD *)(v11 + 52) * (int)v6,
              a5,
              a4,
              v17,
              &v16,
              v15);
      if ( v12 >= 0 )
      {
        *(_WORD *)(v11 + 4 * v13 + 88) = a1;
        *(_DWORD *)(v11 + 4 * v13 + 80) = a4;
        *(_DWORD *)(v11 + 4 * v13 + 84) = a5;
      }
    }
  }
  else
  {
    v12 = -1073741823;
  }
  BgpFwReleaseLock(v10, v9);
  return (unsigned int)v12;
}
