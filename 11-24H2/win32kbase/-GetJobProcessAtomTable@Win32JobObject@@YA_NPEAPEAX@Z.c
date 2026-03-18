/*
 * XREFs of ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401A9D60
 * Callers:
 *     GetCurrentProcessAtomTable @ 0x1401B2D78 (GetCurrentProcessAtomTable.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     CreateGlobalAtomTable @ 0x140108440 (CreateGlobalAtomTable.c)
 *     Win32JobObject::_anonymous_namespace_::GetW32Job @ 0x1401A9E50 (Win32JobObject--_anonymous_namespace_--GetW32Job.c)
 */

char __fastcall Win32JobObject::GetJobProcessAtomTable(Win32JobObject *this, void **a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rcx
  unsigned int JobProvidingUILimit; // edi
  struct W32_PUSH_LOCK *v9; // rbx
  __int64 W32Job; // rax
  _QWORD *v11; // rdi

  *(_QWORD *)this = 0LL;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  JobProvidingUILimit = KfGetJobProvidingUILimit(CurrentProcess, 32LL);
  if ( !JobProvidingUILimit )
    return 1;
  v9 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(v6) + 69360);
  W32AcquirePushLockExclusiveEx(v9, 0);
  W32Job = Win32JobObject::_anonymous_namespace_::GetW32Job(JobProvidingUILimit);
  if ( W32Job )
  {
    v11 = (_QWORD *)(W32Job + 24);
    if ( *(_QWORD *)(W32Job + 24) || CreateGlobalAtomTable((PRTL_ATOM_TABLE *)(W32Job + 24)) >= 0 )
    {
      W32ReleasePushLockExclusiveEx(v9, 0LL);
      *(_QWORD *)this = *v11;
      return 1;
    }
  }
  W32ReleasePushLockExclusiveEx(v9, 0LL);
  return 0;
}
