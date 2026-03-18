/*
 * XREFs of NtGetNextProcess @ 0x140A32180
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14041A2C0 (PsIsProcessInSilo.c)
 *     PspLockUnlockProcessExclusive @ 0x14041D224 (PspLockUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     SeCreateAccessState @ 0x1409154F0 (SeCreateAccessState.c)
 *     PsGetPreviousProcess @ 0x140A3247C (PsGetPreviousProcess.c)
 */

__int64 __fastcall NtGetNextProcess(ULONG_PTR BugCheckParameter1, int a2, int a3, int a4, HANDLE *a5)
{
  KPROCESSOR_MODE AccessMode; // r12
  ULONG v9; // r14d
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // r15d
  __int64 *PreviousProcess; // rax
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // esi
  __int64 *NextProcess; // rax
  bool v21; // zf
  BOOLEAN v22; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-1E0h]
  struct _KTHREAD *v27; // [rsp+78h] [rbp-1D0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _QWORD v29[28]; // [rsp+130h] [rbp-118h] BYREF

  Object = 0LL;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v29, 0, sizeof(v29));
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v9 = a3 & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a5;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *a5 = 0LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( !BugCheckParameter1
    || (result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   0,
                   (__int64)PsProcessType,
                   AccessMode,
                   0x6E457350u,
                   &Object,
                   0LL,
                   0LL),
        (int)result >= 0) )
  {
    v12 = a4 & 1;
    if ( v12 )
      PreviousProcess = (__int64 *)PsGetPreviousProcess(Object);
    else
      PreviousProcess = PsGetNextProcess(Object);
    v14 = (__int64)PreviousProcess;
    if ( !PreviousProcess )
      return 2147483674LL;
    v22 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode);
    CurrentThread = KeGetCurrentThread();
    v27 = CurrentThread;
    CurrentServerSilo = PsGetCurrentServerSilo();
    v26 = CurrentServerSilo;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v14 + 500) & 0x4000000) != 0 )
        goto LABEL_13;
      PspLockUnlockProcessExclusive(v14, (__int64)CurrentThread, v17, v18);
      if ( (*(_DWORD *)(v14 + 500) & 0x4000000) != 0 )
        break;
LABEL_27:
      if ( v12 )
        NextProcess = (__int64 *)PsGetPreviousProcess((PVOID)v14);
      else
        NextProcess = PsGetNextProcess((_QWORD *)v14);
      v14 = (__int64)NextProcess;
      v21 = NextProcess == 0LL;
      CurrentServerSilo = v26;
      if ( v21 )
      {
        v19 = -2147483622;
LABEL_21:
        if ( v14 )
          ObfDereferenceObjectWithTag((PVOID)v14, 0x6E457350u);
        return (unsigned int)v19;
      }
    }
    CurrentServerSilo = v26;
LABEL_13:
    if ( PsIsProcessInSilo((struct _KPROCESS *)v14, CurrentServerSilo) )
    {
      v19 = SeCreateAccessState(&PassedAccessState, v29, a2, (_DWORD *)PsProcessType + 19);
      if ( v19 < 0 )
        goto LABEL_21;
      if ( v22 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      v19 = ObOpenObjectByPointer(
              (PVOID)v14,
              v9,
              &PassedAccessState,
              0,
              (POBJECT_TYPE)PsProcessType,
              AccessMode,
              &Handle);
      SeDeleteAccessState((__int64)&PassedAccessState);
      if ( v19 >= 0 )
      {
        *a5 = Handle;
        goto LABEL_21;
      }
      if ( v19 != -1073741790 )
        goto LABEL_21;
      CurrentThread = v27;
    }
    goto LABEL_27;
  }
  return result;
}
