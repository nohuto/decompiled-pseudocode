/*
 * XREFs of SetDisplayAffinity @ 0x1401C14B8
 * Callers:
 *     NtUserSetWindowDisplayAffinity @ 0x1401C13C0 (NtUserSetWindowDisplayAffinity.c)
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x140074820 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     GetDisplayAffinity @ 0x1401C1650 (GetDisplayAffinity.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1402202A8 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall SetDisplayAffinity(struct tagWND *a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v14 = 0;
  v5 = a2;
  if ( (*(_BYTE *)(v2 + 27) & 0x20) == 0 )
    ComposeWindowIfNeeded(a1, 1);
  if ( (unsigned int)GetDisplayAffinity(a1, &v14) )
  {
    v8 = *(unsigned __int16 *)(W32GetUserSessionState(v7, v6) + 41424);
    if ( (_DWORD)v5 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, v8, v5, 5u) )
        return v3;
    }
    else
    {
      InternalRemoveProp((__int64)a1, v8, 1u);
    }
    v9 = v5 & 0x11;
    v3 = 1;
    if ( (v14 & 0x11) != v9 )
    {
      v3 = ChangeWindowTreeProtection(a1, v9);
      if ( !v3 )
      {
        UserSessionState = W32GetUserSessionState(v12, v11);
        InternalSetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41424), v14, 5u);
      }
    }
  }
  return v3;
}
