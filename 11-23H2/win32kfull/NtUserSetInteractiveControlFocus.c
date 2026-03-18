/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x1C0015E40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C0015F68 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00892D4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     IsShellProcess @ 0x1C00A688C (IsShellProcess.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_BOOL8 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  char v6; // r14
  int *v7; // rdi
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct InteractiveControlManager *v13; // rax
  _BOOL8 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+80h] [rbp+18h]

  v20 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = 0;
  v7 = (int *)((char *)PtiCurrentShared() + 1548);
  if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
  {
    v8 = *v7;
    v6 = 1;
    *v7 = 0;
  }
  else
  {
    v8 = v21;
  }
  if ( a3 && (a3 = ValidateHwnd(a3)) == 0 )
  {
    v14 = 0LL;
  }
  else
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = a3;
    if ( a3 )
      HMLockObject(a3);
    v13 = InteractiveControlManager::Instance();
    v14 = (int)InteractiveControlManager::SetDeviceFocus(v13, a1, a2, a3, v19, *((_QWORD *)&v19 + 1), v20) >= 0;
    ThreadUnlock1(v16, v15, v17);
  }
  if ( v6 )
    *v7 = v8;
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v14;
}
