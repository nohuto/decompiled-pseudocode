/*
 * XREFs of ?ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z @ 0x1401F56EC
 * Callers:
 *     EditionEdgyProcessInput @ 0x1401F56D0 (EditionEdgyProcessInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1401F57C0 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 */

__int64 __fastcall Edgy::ProcessInput(Edgy *this, _QWORD *a2, void **a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbp
  int v8; // ebx
  __int128 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  int v13; // ebx
  struct tagTHREADINFO *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a2 )
    *a2 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 19200) + 248LL);
  if ( !v6 )
    return 1LL;
  v8 = *(_DWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 232) = this;
  v9 = (__int128 *)Edgy::_OnInput(&v15, v6, this);
  v12 = v8 == 1;
  v15 = *v9;
  v13 = v15;
  if ( v12 )
  {
    if ( (_DWORD)v15 == 1 )
      return v3;
    if ( a2 )
      *a2 = *((_QWORD *)&v15 + 1);
    v14 = 0LL;
  }
  else
  {
    if ( (_DWORD)v15 != 1 )
      return 1;
    v14 = PtiCurrent(v11, v10);
  }
  *(_QWORD *)(v6 + 288) = v14;
  if ( v13 != 1 )
    return 1;
  return v3;
}
