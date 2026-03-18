/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1401C08C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z @ 0x1401A8FC0 (--0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1401C0520 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

__int64 __fastcall W32pLkmdDataCollectionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *ProcessWin32Process; // rax
  int v9; // ebx
  __int128 v11; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v12; // [rsp+38h] [rbp-D0h]
  __int128 v13; // [rsp+48h] [rbp-C0h]
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v15[256]; // [rsp+68h] [rbp-A0h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1u, 1u);
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a5);
  if ( (!ProcessWin32Process || *ProcessWin32Process) && (*(_QWORD *)&v11 = ProcessWin32Process) != 0LL )
  {
    *((_QWORD *)&v11 + 1) = 0LL;
    LODWORD(v12) = 0;
    *((_QWORD *)&v12 + 1) = a1;
    *(_QWORD *)&v13 = a2;
    *((_QWORD *)&v13 + 1) = a3;
    v9 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&v11);
    if ( v9 >= 0 )
      v9 = 0;
  }
  else
  {
    v9 = -1073741811;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
  return (unsigned int)v9;
}
