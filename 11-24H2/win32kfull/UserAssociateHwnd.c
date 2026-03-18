/*
 * XREFs of UserAssociateHwnd @ 0x1402859A0
 * Callers:
 *     EngCreateWnd @ 0x140301010 (EngCreateWnd.c)
 *     EngDeleteWnd @ 0x140301530 (EngDeleteWnd.c)
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 */

__int64 __fastcall UserAssociateHwnd(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  v3 = 0;
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v7 = *(unsigned __int16 *)(W32GetUserSessionState(v5, v4) + 41406);
    if ( a2 )
    {
      if ( (unsigned int)InternalSetProp(v6, v7, a2, 5u) )
      {
        UserSessionState = W32GetUserSessionState(v9, v8);
        ++*(_DWORD *)(UserSessionState + 43312);
        return 1;
      }
    }
    else if ( InternalRemoveProp(v6, v7, 1u) )
    {
      v13 = W32GetUserSessionState(v12, v11);
      --*(_DWORD *)(v13 + 43312);
      return 1;
    }
  }
  return v3;
}
