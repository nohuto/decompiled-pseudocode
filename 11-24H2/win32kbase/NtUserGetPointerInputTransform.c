/*
 * XREFs of NtUserGetPointerInputTransform @ 0x14016D770
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140184DFC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ApiSetGetMiPInputTransform @ 0x140193A94 (ApiSetGetMiPInputTransform.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerInputTransform(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // r14
  int v6; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v8; // rcx
  int MiPInputTransform; // eax
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v12; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  v6 = 0;
  if ( a1 && !HIWORD(a1) && (unsigned int)(v4 - 1) <= 0x63 && a3 && (a1 != 1 || (_DWORD)v4 == 1) )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, v4 << 6, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( a1 == 1 )
    {
      MiPInputTransform = ApiSetGetMiPInputTransform(v12, a3);
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v8);
      MiPInputTransform = CTouchProcessor::GetPointerTransform(
                            *(CTouchProcessor **)(UserSessionState + 3264),
                            v12,
                            a1,
                            v4,
                            (struct tagINPUT_TRANSFORM *)a3);
    }
    v6 = MiPInputTransform;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v6;
}
