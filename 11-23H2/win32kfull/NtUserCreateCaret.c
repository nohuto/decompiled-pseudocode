/*
 * XREFs of NtUserCreateCaret @ 0x1C000FC70
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateCaret @ 0x1C000FD54 (xxxCreateCaret.c)
 */

__int64 __fastcall NtUserCreateCaret(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int Caret; // ebx
  __int64 v14; // rdi
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  Caret = 0;
  v14 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v8;
    HMLockObject(v8);
    Caret = xxxCreateCaret(v14, a2, a3, a4);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return Caret;
}
