/*
 * XREFs of NtGetNextThread @ 0x1409BA4F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcessThread @ 0x1408BD940 (PsGetNextProcessThread.c)
 *     SeCreateAccessState @ 0x1409154F0 (SeCreateAccessState.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1409BA844 (PsSynchronizeWithThreadInsertion.c)
 */

NTSTATUS __cdecl NtGetNextThread(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewThreadHandle)
{
  char AccessMode; // r12
  __int64 v10; // rcx
  NTSTATUS result; // eax
  NTSTATUS v12; // esi
  _DWORD *NextProcessThread; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PVOID v15; // r13
  PVOID v16; // rcx
  BOOLEAN v17; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+48h] [rbp-200h] BYREF
  ACCESS_MASK v19; // [rsp+50h] [rbp-1F8h]
  PVOID v20; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  _DWORD *v22; // [rsp+68h] [rbp-1E0h]
  PHANDLE v23; // [rsp+70h] [rbp-1D8h]
  struct _KTHREAD *v24; // [rsp+80h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _QWORD v26[28]; // [rsp+130h] [rbp-118h] BYREF

  v19 = DesiredAccess;
  v23 = NewThreadHandle;
  Object = 0LL;
  v20 = 0LL;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v26, 0, sizeof(v26));
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( AccessMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewThreadHandle < 0x7FFFFFFF0000LL )
      v10 = (__int64)NewThreadHandle;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *NewThreadHandle = 0LL;
  if ( Flags )
    return -1073741811;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             1024,
             (__int64)PsProcessType,
             AccessMode,
             0x6E457350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    if ( ThreadHandle )
    {
      v12 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ThreadHandle,
              0,
              (__int64)PsThreadType,
              AccessMode,
              0x6E457350u,
              &v20,
              0LL,
              0LL);
      if ( v12 >= 0 )
      {
        if ( *((PVOID *)v20 + 68) == Object )
          goto LABEL_10;
        ObfDereferenceObjectWithTag(v20, 0x6E457350u);
        v12 = -1073741811;
      }
LABEL_31:
      v16 = Object;
LABEL_25:
      ObfDereferenceObjectWithTag(v16, 0x6E457350u);
      return v12;
    }
LABEL_10:
    NextProcessThread = PsGetNextProcessThread((__int64)Object, v20);
    v22 = NextProcessThread;
    if ( NextProcessThread )
    {
      v17 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode);
      CurrentThread = KeGetCurrentThread();
      v24 = CurrentThread;
      v15 = Object;
      while ( 1 )
      {
        if ( (NextProcessThread[360] & 2) != 0
          || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[360] & 2) != 0) )
        {
          v12 = SeCreateAccessState(&PassedAccessState, v26, v19, (_DWORD *)PsProcessType + 19);
          if ( v12 < 0 )
            goto LABEL_23;
          if ( v17 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          v12 = ObOpenObjectByPointer(
                  NextProcessThread,
                  HandleAttributes & (AccessMode != 0 ? 7666 : 73714),
                  &PassedAccessState,
                  0,
                  (POBJECT_TYPE)PsThreadType,
                  AccessMode,
                  &Handle);
          SeDeleteAccessState((__int64)&PassedAccessState);
          if ( v12 >= 0 )
          {
            *v23 = Handle;
LABEL_23:
            ObfDereferenceObjectWithTag(v15, 0x6E457350u);
            if ( NextProcessThread )
            {
              v16 = NextProcessThread;
              goto LABEL_25;
            }
            return v12;
          }
          if ( v12 != -1073741790 )
            goto LABEL_23;
        }
        NextProcessThread = PsGetNextProcessThread((__int64)v15, NextProcessThread);
        v22 = NextProcessThread;
        CurrentThread = v24;
        if ( !NextProcessThread )
        {
          v12 = -2147483622;
          goto LABEL_23;
        }
      }
    }
    v12 = -2147483622;
    goto LABEL_31;
  }
  return result;
}
