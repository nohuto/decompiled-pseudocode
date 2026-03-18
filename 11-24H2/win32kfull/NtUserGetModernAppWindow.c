/*
 * XREFs of NtUserGetModernAppWindow @ 0x140182E10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetModernAppWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  ULONG_PTR v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  ULONG_PTR *CurrentThreadNonPaged; // rax
  __int64 *v13; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateReceivingHwnd(a1, 1LL);
  v5 = 0LL;
  v6 = v3;
  if ( !v3 )
  {
    v10 = 0LL;
    goto LABEL_9;
  }
  BugCheckParameter3[0] = *(_QWORD *)(v2 + 456);
  *(_QWORD *)(v2 + 456) = BugCheckParameter3;
  BugCheckParameter3[1] = v3;
  HMLockObject(v3);
  v9 = *(_QWORD *)(v6 + 16);
  if ( v9 && *(_QWORD *)(v9 + 1584) == v6 )
  {
    v13 = *(__int64 **)(v9 + 1592);
    if ( v13 )
    {
      v10 = *v13;
      goto LABEL_6;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  v10 = 0LL;
LABEL_6:
  CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v8, v7);
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  Win32HM_UnlockFromThread<0>(v5, BugCheckParameter3);
LABEL_9:
  UserSessionSwitchLeaveCrit(v4);
  return v10;
}
