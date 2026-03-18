/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x140096920
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     InternalMapVirtualKeyEx @ 0x1400969C0 (InternalMapVirtualKeyEx.c)
 *     HKLtoPKL @ 0x140096C10 (HKLtoPKL.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(unsigned int a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v8; // edi
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  v8 = 0;
  v9 = PtiCurrent();
  if ( a4 )
    v10 = HKLtoPKL(v9, a3);
  else
    v10 = *((_QWORD *)v9 + 60);
  if ( v10 )
    v8 = InternalMapVirtualKeyEx(a1, a2, *(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL));
  UserSessionSwitchLeaveCritWithNonPaged();
  return v8;
}
