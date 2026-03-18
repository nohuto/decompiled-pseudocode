/*
 * XREFs of ?_GetSendMessageReceiver@@YAPEAUtagWND@@K@Z @ 0x140291B44
 * Callers:
 *     NtUserGetSendMessageReceiver @ 0x140296E60 (NtUserGetSendMessageReceiver.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

struct tagWND *__fastcall _GetSendMessageReceiver(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  UIPrivilegeIsolation *v6; // rcx
  __int64 v7; // rsi
  _DWORD *v8; // rbp
  const struct tagUIPI_INFO *v9; // r8
  __int64 v10; // rax
  struct tagWND *result; // rax
  int v12; // ecx

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  v4 = PtiFromThreadId(v2);
  v5 = v4;
  if ( !v4 || (v6 = (UIPrivilegeIsolation *)*((_QWORD *)v3 + 62), *(UIPrivilegeIsolation **)(v4 + 496) != v6) )
  {
    v12 = 87;
    goto LABEL_13;
  }
  v7 = *(_QWORD *)(v4 + 464);
  v8 = (_DWORD *)*((_QWORD *)v3 + 58);
  if ( !UIPrivilegeIsolation::Enforced(v6) )
  {
    if ( v8[193] != *(_DWORD *)(v7 + 772) || v8[194] != *(_DWORD *)(v7 + 776) )
      goto LABEL_5;
LABEL_8:
    v10 = *(_QWORD *)(v5 + 544);
    if ( !v10 )
      return 0LL;
    result = *(struct tagWND **)(v10 + 112);
    if ( !result )
      return 0LL;
    if ( *(_QWORD *)(*((_QWORD *)result + 2) + 496LL) == *((_QWORD *)v3 + 62) )
      return result;
    goto LABEL_11;
  }
  if ( UIPrivilegeIsolation::CheckAccess(
         (UIPrivilegeIsolation *)(v8 + 218),
         (const struct tagUIPI_INFO *)(v7 + 872),
         v9) )
  {
    goto LABEL_8;
  }
LABEL_5:
  EtwTraceUIPIMsgError(*((_QWORD *)v3 + 58), *(_QWORD *)(v5 + 464), 0LL, 0LL, 0LL);
LABEL_11:
  v12 = 5;
LABEL_13:
  UserSetLastError(v12);
  return 0LL;
}
