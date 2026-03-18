/*
 * XREFs of _MapDesktopObject @ 0x1C0035BF0
 * Callers:
 *     NtUserMapDesktopObject @ 0x1C0035BB0 (NtUserMapDesktopObject.c)
 * Callees:
 *     GetDesktopView @ 0x1C0035CC0 (GetDesktopView.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall MapDesktopObject(__int64 a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  struct tagTHREADINFO *v5; // rsi
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 DesktopView; // rax
  __int64 result; // rax

  v2 = PtiCurrentShared();
  v3 = 0LL;
  LOBYTE(v4) = -1;
  v5 = v2;
  v6 = *((_DWORD *)v2 + 387);
  *((_DWORD *)v2 + 387) = 0;
  v7 = HMValidateHandle(a1, v4);
  v8 = v7;
  if ( !v7 || (v10 = _HMPheFromObject(v7), (*(_BYTE *)(v10 + 25) & 0x40) != 0) )
  {
    result = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(v8 + 24);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    DesktopView = GetDesktopView(CurrentProcessWin32Process, v11);
    if ( DesktopView )
      v3 = *(_QWORD *)v10 + *(_QWORD *)(DesktopView + 16);
    result = v3;
  }
  *((_DWORD *)v5 + 387) = v6;
  return result;
}
