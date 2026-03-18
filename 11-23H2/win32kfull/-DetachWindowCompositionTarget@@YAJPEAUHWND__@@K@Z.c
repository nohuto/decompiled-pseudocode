/*
 * XREFs of ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1C0022D4C
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C0022CE0 (NtUserDestroyDCompositionHwndTarget.c)
 * Callees:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C0022E6C (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall DetachWindowCompositionTarget(HWND a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  PETHREAD **v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-18h]

  v20 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = (PETHREAD **)v4;
  if ( v4 && (v6 = *(_QWORD *)(v4 + 40), v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669, (v5 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v4;
    HMLockObject(v4);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v11, v10, v12);
    if ( CurrentProcess == PsGetThreadProcess(*v9[2]) )
      v17 = (unsigned int)_DetachWindowCompositionTarget((struct tagWND *)v9, a2) == 0 ? 0xC0000225 : 0;
    else
      v17 = -1073741790;
    ThreadUnlock1(v15, v14, v16);
  }
  else
  {
    v17 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v17;
}
