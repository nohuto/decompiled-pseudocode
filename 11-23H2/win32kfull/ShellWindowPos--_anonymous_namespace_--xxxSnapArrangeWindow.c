/*
 * XREFs of ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C021E7F8
 * Callers:
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021E33C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005C068 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F04DC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1C021CAD8 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 v4; // rdx
  __int128 *v5; // rcx
  unsigned int v6; // r9d
  int v7; // edx
  char v8; // r8
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _BYTE v19[8]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v20; // [rsp+48h] [rbp-40h] BYREF
  __int64 v21; // [rsp+58h] [rbp-30h]

  if ( IsRectEmptyInl(a2) )
  {
    v10 = *(_QWORD *)(v4 + 16);
    if ( v10 )
    {
      v11 = HMValidateHandleNoSecure(v10, 1);
      v12 = v11;
      if ( v11 )
      {
        v13 = *(_BYTE *)(*(_QWORD *)(v11 + 40) + 24LL);
        v20 = 0LL;
        v21 = 0LL;
        ThreadLockAlways(v11, &v20);
        ++gdwDeferWinEvent;
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v19);
        xxxSetWindowPos(a1, v12, 0LL, 0LL, 0, 0, ((~v13 & 8) << 18) | 0x62413);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19, v14, v15);
        zzzEndDeferWinEventNotify();
        ThreadUnlock1(v17, v16, v18);
      }
    }
    else
    {
      xxxSetForegroundWindowWithOptions((__int64)a1, 0x1Fu, 0, 0);
    }
    if ( (a2[1].bottom & 0x20) == 0 )
      ShellWindowPos::NotifyPosAndStateApplied(a1, 3, a2, a2[2].left);
  }
  else
  {
    v6 = *((_DWORD *)v5 + 8);
    v7 = (*(_DWORD *)(v4 + 28) >> 4) & 1;
    v8 = v7 | 2;
    v9 = (*((_BYTE *)v5 + 28) & 1) == 0;
    v20 = *v5;
    if ( v9 )
      v8 = v7;
    WindowArrangement::xxxSetSnapArrangementPos((__int64)a1, (__int64)&v20, v8, v6);
  }
}
