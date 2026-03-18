/*
 * XREFs of ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x14021404C
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     ApiSetEditionIsHotKey @ 0x140221DE8 (ApiSetEditionIsHotKey.c)
 */

void __fastcall LowLevelHexNumpad(__int64 a1, unsigned __int8 a2, int a3, __int16 a4)
{
  unsigned int v5; // ebp
  __int64 v7; // r14
  char *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // al
  char v12; // bl
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int16 v15; // di
  __int64 UserSessionState; // rax
  __int64 v17; // rcx
  __int16 v18; // r15
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx

  v5 = a2;
  v7 = (unsigned __int16)a1;
  v8 = (char *)(W32GetUserSessionState(a1) + 14704);
  if ( (*(_BYTE *)(W32GetUserSessionState(v9) + 14340) & 0x10) == 0 )
  {
    v11 = *v8;
    if ( (*v8 & 1) == 0 )
      return;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v11 = *v8;
    if ( (*v8 & 1) != 0 || (_DWORD)v7 == 78 || (_DWORD)v7 == 83 )
    {
      if ( (a4 & 0x100) != 0 )
      {
LABEL_3:
        *v8 = v11 & 0xFE;
        return;
      }
      v12 = *(_BYTE *)(W32GetUserSessionState(v10) + 14340) & 0x10;
      LOBYTE(v14) = *(_BYTE *)(W32GetUserSessionState(v13) + 14340) & 1;
      v15 = (unsigned __int8)v14;
      UserSessionState = W32GetUserSessionState(v14);
      v17 = 65526LL;
      v18 = v15 | (v12 != 0 ? 4 : 0) | (2 * (*(_BYTE *)(UserSessionState + 14341) & 4));
      if ( ((v18 - 4) & 0xFFF6) != 0 )
      {
        *v8 &= ~1u;
      }
      else
      {
        LOBYTE(v17) = *v8;
        if ( (*v8 & 1) != 0 )
        {
          if ( ((unsigned __int16)(v7 - 71) > 0xBu || aVkNumpad[v7 - 71] == 0xFF)
            && (unsigned __int8)(v5 - 65) > 5u
            && (unsigned __int8)(v5 - 48) > 9u )
          {
            *v8 = v17 & 0xFE;
          }
        }
        else
        {
          v19 = (4 * (v18 & 1)) | ((*(_BYTE *)(W32GetUserSessionState(v17) + 14340) & 4 | 2u) >> 1);
          if ( (*(_BYTE *)(W32GetUserSessionState(v20) + 14358) & 0x40) != 0
            || (*(_BYTE *)(W32GetUserSessionState(v21) + 14359) & 1) != 0 )
          {
            v22 = 8;
          }
          else
          {
            v22 = 0;
          }
          if ( !(unsigned int)ApiSetEditionIsHotKey(v19 | v22, v5) )
            *v8 |= 1u;
        }
      }
    }
  }
}
