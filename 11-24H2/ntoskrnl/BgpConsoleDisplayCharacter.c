/*
 * XREFs of BgpConsoleDisplayCharacter @ 0x140BB2AB0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterEx @ 0x140698FEC (BgpDisplayCharacterEx.c)
 *     AnFwFadeCompletion @ 0x140BB558C (AnFwFadeCompletion.c)
 */

__int64 __fastcall BgpConsoleDisplayCharacter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // r12
  unsigned __int16 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // esi
  __int64 v13; // rdi
  unsigned __int64 v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v17[3]; // [rsp+54h] [rbp-24h] BYREF

  v5 = a4;
  v6 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  v8 = a1;
  BgpFwAcquireLock(a1, a2, a3, a4);
  v11 = qword_140EEFD00;
  if ( qword_140EEFD00 )
  {
    if ( (*(_DWORD *)(qword_140EEFD00 + 8) & 0x10000) != 0 )
    {
      AnFwFadeCompletion();
      v11 = qword_140EEFD00;
      *(_DWORD *)(qword_140EEFD00 + 8) &= ~0x10000u;
    }
    v10 = v6 + 25 * v7;
    v13 = 3 * v10;
    if ( *(_WORD *)(v11 + 12 * v10 + 88) == v8
      && *(_DWORD *)(v11 + 12 * v10 + 80) == v5
      && *(_DWORD *)(v11 + 12 * v10 + 84) == a5 )
    {
      v12 = 0;
    }
    else
    {
      v12 = BgpDisplayCharacterEx(
              v8,
              *(__int64 **)(v11 + 40),
              *(_DWORD *)(v11 + 60) + *(_DWORD *)(v11 + 48) * (int)v7,
              *(_DWORD *)(v11 + 64) + *(_DWORD *)(v11 + 52) * (int)v6,
              a5,
              v5,
              v17,
              &v16,
              v15);
      if ( v12 >= 0 )
      {
        *(_WORD *)(v11 + 4 * v13 + 88) = v8;
        *(_DWORD *)(v11 + 4 * v13 + 80) = v5;
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
