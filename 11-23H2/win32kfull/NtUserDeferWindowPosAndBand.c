/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C00461C0
 * Callers:
 *     <none>
 * Callees:
 *     DestroySMWP @ 0x1C0040930 (DestroySMWP.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00458AC (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C004590C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C004595C (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01CBE5C (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        struct tagWND *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  __int64 v12; // rbx
  int v13; // r14d
  AtomicExecutionCheck *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v20; // rdx
  unsigned int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  int v27; // eax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagWND *v29; // rsi
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v37; // rcx
  struct tagWND *v38; // [rsp+50h] [rbp-10h] BYREF
  struct tagWND *v39; // [rsp+58h] [rbp-8h] BYREF
  int v40; // [rsp+A8h] [rbp+48h] BYREF

  v40 = a4;
  v12 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v13 = a4;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::EnforceConsistency(v15);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v17, v16, v18);
  v21 = a8;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( (v21 & 0xFFFC9800) != 0 )
  {
    v37 = 1004LL;
LABEL_13:
    UserSetLastError(v37);
    goto LABEL_10;
  }
  LOBYTE(v20) = 4;
  v22 = HMValidateHandle(a1, v20);
  v26 = v22;
  if ( !v22 )
    goto LABEL_10;
  if ( (*(_DWORD *)(v22 + 24) & 4) != 0 )
  {
    if ( a10 )
      DestroySMWP(v22);
    v37 = 1405LL;
    goto LABEL_13;
  }
  LOBYTE(v27) = ValidateHWNDND(a2, &v38);
  if ( v27 && (unsigned int)ValidateHWNDIA(a3, &v39) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v29 = v38;
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v38, CurrentThreadDpiAwarenessContext) )
    {
      TransformSWPCoords(v29, &v40, &a5, &a6, &a7, v21);
      v13 = v40;
    }
    v30 = (__int64 *)_DeferWindowPosAndBand(v26, (__int64)v29, v39, v13, a5, a6, a7, v21, a9, a10 != 0);
    if ( v30 )
      v12 = *v30;
  }
  else if ( a10 )
  {
    DestroySMWP(v26);
  }
LABEL_10:
  v31 = PsGetCurrentThreadWin32Thread(v24, v23, v25);
  --*(_DWORD *)(v31 + 48);
  UserSessionSwitchLeaveCrit(v33, v32, v34, v35);
  return v12;
}
