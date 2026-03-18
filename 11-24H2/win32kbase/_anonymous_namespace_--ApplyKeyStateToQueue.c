/*
 * XREFs of _anonymous_namespace_::ApplyKeyStateToQueue @ 0x1400C1A9C
 * Callers:
 *     UpdateKeyStateForMessage @ 0x1400C18C0 (UpdateKeyStateForMessage.c)
 * Callees:
 *     <none>
 */

int __fastcall anonymous_namespace_::ApplyKeyStateToQueue(__int64 a1, unsigned __int8 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r11
  int v6; // ebx
  int v7; // edx
  unsigned int v8; // eax
  int v9; // edx
  unsigned __int64 v10; // rcx
  char v11; // dl
  int v12; // eax
  __int64 UserSessionState; // rax

  v3 = a2;
  if ( a3 )
  {
    v5 = (unsigned __int64)a2 >> 2;
    v6 = a2 & 3;
    v7 = *(unsigned __int8 *)(v5 + a1 + 280);
    if ( !_bittest(&v7, (unsigned __int8)(2 * v6)) )
    {
      v8 = 2 * v6 + 1;
      if ( _bittest(&v7, v8) )
        v9 = v7 & ~(1 << v8);
      else
        v9 = v7 | (1 << v8);
      *(_BYTE *)(v5 + a1 + 280) = v9;
    }
  }
  v10 = v3 >> 2;
  v11 = 2 * (v3 & 3);
  v12 = *(unsigned __int8 *)((v3 >> 2) + a1 + 280);
  if ( a3 )
    LODWORD(UserSessionState) = v12 | (1 << v11);
  else
    LODWORD(UserSessionState) = v12 & ~(1 << v11);
  *(_BYTE *)(v10 + a1 + 280) = UserSessionState;
  if ( (unsigned __int8)v3 < 0x20u )
  {
    UserSessionState = W32GetUserSessionState(v10);
    ++*(_DWORD *)(*(_QWORD *)(UserSessionState + 19928) + 6984LL);
  }
  return UserSessionState;
}
