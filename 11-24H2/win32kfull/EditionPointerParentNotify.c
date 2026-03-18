/*
 * XREFs of EditionPointerParentNotify @ 0x1400A97F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032E40 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendPointerMessageWorker @ 0x1400A8F90 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall EditionPointerParentNotify(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  ULONG_PTR *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v15; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 80);
  result = GetDesktopWindow(v3);
  if ( v3 != result )
  {
    result = *(_QWORD *)(v3 + 40);
    if ( (*(_BYTE *)(result + 24) & 4) == 0 )
    {
      v9 = PtiCurrent(v8, v7);
      BugCheckParameter3[0] = *((_QWORD *)v9 + 57);
      v11 = BugCheckParameter3;
      *((_QWORD *)v9 + 57) = BugCheckParameter3;
      BugCheckParameter3[1] = 0LL;
      do
      {
        LOBYTE(v11) = *(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0xC0;
        if ( (_BYTE)v11 != 64 )
          break;
        v3 = *(_QWORD *)(v3 + 104);
        Win32HM_ExchangeThreadLock<1>(v3, (__int64)BugCheckParameter3);
        xxxSendPointerMessageWorker(v3, 528LL, a3, 0LL, 0LL, 177);
        UserSessionState = W32GetUserSessionState(v13, v12);
      }
      while ( !CTouchProcessor::BreakEditionParentNotifyLoop(*(CTouchProcessor **)(UserSessionState + 3264), a2) );
      v15 = PtiCurrent((__int64)v11, v10);
      return Win32HM_UnlockFromThread<1>((ULONG_PTR)v15, BugCheckParameter3);
    }
  }
  return result;
}
