/*
 * XREFs of NtUserDrawMenuBar @ 0x1C01CE840
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 */

__int64 __fastcall NtUserDrawMenuBar(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (struct tagWND *)v2;
  if ( v2 )
  {
    v4 = (*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v4 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v13;
      *((_QWORD *)&v13 + 1) = v2;
      HMLockObject(v2);
      LOBYTE(v11) = *(_BYTE *)(*((_QWORD *)v8 + 5) + 31LL) & 0xC0;
      if ( (_BYTE)v11 != 64 )
        xxxSetWindowPos(v8, 0LL, 0LL, 0LL, 0, 0, 55);
      ThreadUnlock1(v11, v9, v10);
      v7 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
