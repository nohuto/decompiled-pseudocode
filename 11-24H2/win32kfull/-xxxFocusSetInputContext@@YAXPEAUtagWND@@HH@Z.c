/*
 * XREFs of ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1401B92C4
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023256C (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024FA00 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x14027662C (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x14027A098 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140049A98 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

void __fastcall xxxFocusSetInputContext(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  int v5; // edi
  __int16 *v7; // rbx
  __int16 v8; // bx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND *v11; // rbx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v5 = a2;
  v7 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
  if ( (v7[5] & 1) == 0 )
  {
    v8 = *v7;
    if ( v8 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 898LL) )
    {
      v11 = *(struct tagWND **)(v4 + 824);
      if ( v11 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 528), 0, 0) & 1) == 0 )
        {
          v12 = PtiCurrent(v10, v9);
          Win32HM_LockIntoThread<0>((__int64)v12, (__int64)v11, BugCheckParameter3);
          if ( a3 )
            SendNotifyMessageAlways(v11, 0x287u, 24LL - (v5 != 0), *(_QWORD *)a1, 0);
          else
            xxxSendMessage(v11, 0x287u);
          v15 = PtiCurrent(v14, v13);
          Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, BugCheckParameter3);
        }
      }
    }
  }
}
