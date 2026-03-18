/*
 * XREFs of ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1401104B0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsSAS @ 0x1401107FC (ApiSetEditionIsSAS.c)
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 */

__int64 __fastcall xxxNumpadCursor(struct tagKE *a1)
{
  signed __int16 *v2; // r14
  __int64 v3; // rcx
  __int64 v5; // rcx
  signed __int16 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edx
  _BYTE *i; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // esi
  unsigned __int16 v19; // bx
  __int64 v20; // rcx
  __int64 UserSessionState; // rax
  __int64 v22; // rcx
  char v23; // bl
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdi
  int v28; // esi
  unsigned __int16 v29; // bx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // [rsp+88h] [rbp+10h] BYREF

  v2 = (signed __int16 *)((char *)a1 + 2);
  if ( *(_BYTE *)(W32GetUserSessionState(a1) + 14054) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v3) + 14054) == *(_BYTE *)v2 )
    {
      v13 = (unsigned __int16)*v2;
      if ( (v13 & 0x8000u) != 0 )
      {
        xxxKeyEventEx(
          v13,
          *(unsigned __int8 *)a1,
          *((_DWORD *)a1 + 1),
          0,
          *((_QWORD *)a1 + 1),
          (__int64)a1 + 16,
          0,
          0,
          0LL,
          0LL);
        *(_BYTE *)(W32GetUserSessionState(v14) + 14054) = 0;
        v16 = *(unsigned __int16 *)(W32GetUserSessionState(v15) + 14056);
        *v2 = v16;
        *(_BYTE *)a1 = *(_BYTE *)(W32GetUserSessionState(v16) + 14058);
      }
      return 1LL;
    }
    v17 = *((_QWORD *)a1 + 1);
    v18 = *((_DWORD *)a1 + 1);
    v19 = *(unsigned __int8 *)(W32GetUserSessionState(v12) + 14058) | 0x200;
    UserSessionState = W32GetUserSessionState(v20);
    xxxKeyEventEx(*(unsigned __int16 *)(UserSessionState + 14056), v19, v18, 0, v17, (__int64)a1 + 16, 0, 0, 0LL, 0LL);
    *(_BYTE *)(W32GetUserSessionState(v22) + 14054) = 0;
  }
  if ( _bittest16(v2, 0xBu) )
  {
    LOBYTE(v3) = *(_BYTE *)v2;
    v32 = 0;
    if ( !(unsigned int)ApiSetEditionIsSAS(v3, &v32) )
    {
      v6 = v2;
      if ( (*(_BYTE *)(W32GetUserSessionState(v5) + 14436) & 2) == 0 )
      {
        if ( !*(_QWORD *)(W32GetUserSessionState(v7) + 18960) )
          return 1LL;
        v7 = *(_QWORD *)(W32GetUserSessionState(v11) + 18960);
        if ( (*(_DWORD *)(v7 + 1360) & 0x800000) == 0 )
          return 1LL;
        v6 = (signed __int16 *)((char *)a1 + 2);
      }
      if ( (*(_BYTE *)(W32GetUserSessionState(v7) + 14404) & 1) != 0 )
      {
        v23 = *(_BYTE *)v2;
        *(_BYTE *)(W32GetUserSessionState(v8) + 14054) = v23;
        if ( (*(_BYTE *)(W32GetUserSessionState(v24) + 14440) & 4) != 0 )
        {
          *(_WORD *)(W32GetUserSessionState(v25) + 14056) = 417;
          *(_BYTE *)(W32GetUserSessionState(417LL) + 14058) = 54;
        }
        else
        {
          *(_WORD *)(W32GetUserSessionState(v25) + 14056) = 160;
          *(_BYTE *)(W32GetUserSessionState(160LL) + 14058) = 42;
        }
        v27 = *((_QWORD *)a1 + 1);
        v28 = *((_DWORD *)a1 + 1);
        v29 = *(unsigned __int8 *)(W32GetUserSessionState(v26) + 14058) | 0x200;
        v31 = W32GetUserSessionState(v30);
        xxxKeyEventEx(*(_WORD *)(v31 + 14056) | 0x8000, v29, v28, 0, v27, (__int64)a1 + 16, 0, 0, 0LL, 0LL);
      }
      else if ( !_bittest16(v2, 0xDu) )
      {
        v9 = 0;
        for ( i = ausNumPadCvt; *(_WORD *)i; i += 2 )
        {
          if ( *i == *(_BYTE *)v6 )
          {
            *((_BYTE *)a1 + 2) = 0;
            *((_WORD *)a1 + 1) |= HIBYTE(ausNumPadCvt[v9]);
            return 1LL;
          }
          ++v9;
        }
      }
    }
  }
  return 1LL;
}
