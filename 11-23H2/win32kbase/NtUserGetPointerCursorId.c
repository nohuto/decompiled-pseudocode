/*
 * XREFs of NtUserGetPointerCursorId @ 0x1C0144BE0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C01C7534 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rax
  ULONG64 v11; // rdx
  ULONG64 v12; // rcx
  int PointerCursorId; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_DWORD *)a2;
  v5 = a1;
  v17 = 0;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  if ( v5 && !HIWORD(v5) && v4 )
  {
    v10 = SGDGetUserSessionState(v7, v6, HIWORD(v5), v9);
    PointerCursorId = CTouchProcessor::GetPointerCursorId(*(CTouchProcessor **)(v10 + 3424), v8, v5, &v17);
    if ( PointerCursorId )
    {
      v12 = MmUserProbeAddress;
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = v17;
    }
  }
  else
  {
    PointerCursorId = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v14, v15);
  return PointerCursorId;
}
