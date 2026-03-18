/*
 * XREFs of NtUserVkKeyScanEx @ 0x1400965A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     InternalVkKeyScanEx @ 0x140096630 (InternalVkKeyScanEx.c)
 *     HKLtoPKL @ 0x140096C10 (HKLtoPKL.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(unsigned __int16 a1, __int64 a2, int a3)
{
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rax
  __int16 v8; // bx
  char v10; // [rsp+48h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1LL);
  v6 = PtiCurrent();
  if ( a3 )
    v7 = HKLtoPKL(v6, a2);
  else
    v7 = *((_QWORD *)v6 + 60);
  if ( v7 )
    v8 = InternalVkKeyScanEx(a1, *(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL));
  else
    v8 = -1;
  UserSessionSwitchLeaveCritWithNonPaged();
  return v8;
}
