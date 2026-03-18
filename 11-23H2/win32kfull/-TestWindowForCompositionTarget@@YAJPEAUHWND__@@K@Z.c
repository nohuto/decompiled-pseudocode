/*
 * XREFs of ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1C002355C
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00232D0 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C0023748 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall TestWindowForCompositionTarget(HWND a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  PETHREAD **v10; // rdi
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  __int128 v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+30h] [rbp-18h]

  v21 = 0LL;
  v22 = 0LL;
  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v10 = (PETHREAD **)v5;
  if ( v5 && (v7 = *(_QWORD *)(v5 + 40), v6 = (*(_WORD *)(v7 + 42) & 0x2FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v11 = PtiCurrentShared();
    *(_QWORD *)&v21 = *((_QWORD *)v11 + 52);
    *((_QWORD *)v11 + 52) = &v21;
    *((_QWORD *)&v21 + 1) = v10;
    HMLockObject(v10);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v13, v12, v14);
    if ( CurrentProcess == PsGetThreadProcess(*v10[2]) )
      v19 = (unsigned int)WindowHasCompositionTarget((struct tagWND *)v10, v3) != 0 ? 0x803E0006 : 0;
    else
      v19 = -1073741790;
    ThreadUnlock1(v17, v16, v18);
  }
  else
  {
    v19 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v19;
}
