/*
 * XREFs of ?IsWindowGDIScaledDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C021EE4C
 * Callers:
 *     NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C01D55A0 (NtUserIsWindowGDIScaledDpiMessageEnabled.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

char __fastcall IsWindowGDIScaledDpiMessageEnabledX(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagTHREADINFO *v10; // rax
  char v11; // dl

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    return 0;
  if ( !*((_QWORD *)PtiCurrentShared(v3, v2, v4, v5) + 57) )
    return 0;
  v10 = PtiCurrentShared(v7, v6, v8, v9);
  v11 = 1;
  if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)v10 + 57) + 8LL) + 64LL) & 1) == 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) != 0x40000000
    || (*((_DWORD *)a1 + 80) & 0x100000) == 0 )
  {
    return 0;
  }
  return v11;
}
