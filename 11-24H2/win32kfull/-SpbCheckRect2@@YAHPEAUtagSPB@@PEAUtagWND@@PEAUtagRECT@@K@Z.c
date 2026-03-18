/*
 * XREFs of ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x14009776C
 * Callers:
 *     SpbCheckRect @ 0x140097868 (SpbCheckRect.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1400986AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1400973D0 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     FreeSpb @ 0x1400979B0 (FreeSpb.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall SpbCheckRect2(struct tagSPB *a1, struct tagWND *a2, struct tagRECT *a3)
{
  bool v3; // zf
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct tagRECT v12; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a1 + 1) == 0LL;
  v12 = *a3;
  if ( !v3 )
  {
    if ( !(unsigned int)FBitsTouch(a2, &v12, a1) )
      return 1LL;
    if ( *((_QWORD *)a1 + 5) || (unsigned int)SetOrCreateRectRgnIndirectPublic((char *)a1 + 40, (char *)a1 + 24) )
    {
      UserSessionState = W32GetUserSessionState(v6, v5);
      if ( (unsigned int)SetRectRgnIndirect(*(_QWORD *)(UserSessionState + 43120), &v12) )
      {
        v10 = W32GetUserSessionState(v9, v8);
        if ( (unsigned int)GreCombineRgn(*((_QWORD *)a1 + 5), *((_QWORD *)a1 + 5), *(_QWORD *)(v10 + 43120), 4LL) > 1 )
          return 1LL;
      }
    }
  }
  FreeSpb(a1);
  return 0LL;
}
