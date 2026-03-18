/*
 * XREFs of NtUserSendEventMessage @ 0x1C00150F0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  struct tagTHREADINFO **v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v13 = 0;
  v14 = (struct tagTHREADINFO **)v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 40);
    v9 = (*(_WORD *)(v10 + 42) & 0x2FFFu) - 669;
    if ( (v9 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v19;
      *((_QWORD *)&v19 + 1) = v8;
      HMLockObject(v8);
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
        v13 = PostEventMessageEx(v14[2], *((struct tagQ **)v14[2] + 54), 9u, (struct tagWND *)v14, a2, a3, a4, 0LL);
      else
        UserSetLastError(5LL);
      ThreadUnlock1(v16, v15, v17);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
