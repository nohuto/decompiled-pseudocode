/*
 * XREFs of NtGetNextThread @ 0x14093B590
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeCreateAccessState @ 0x14083F490 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14093B8E4 (PsSynchronizeWithThreadInsertion.c)
 *     PsGetNextProcessThread @ 0x14094A700 (PsGetNextProcessThread.c)
 */

__int64 __fastcall NtGetNextThread(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, int a3, int a4, int a5, HANDLE *a6)
{
  char AccessMode; // r12
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // esi
  _DWORD *NextProcessThread; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PVOID v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID v19; // rcx
  BOOLEAN v20; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+48h] [rbp-200h] BYREF
  int v22; // [rsp+50h] [rbp-1F8h]
  PVOID v23; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  _DWORD *v25; // [rsp+68h] [rbp-1E0h]
  HANDLE *v26; // [rsp+70h] [rbp-1D8h]
  struct _KTHREAD *v27; // [rsp+80h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _QWORD v29[28]; // [rsp+130h] [rbp-118h] BYREF

  v22 = a3;
  v26 = a6;
  Object = 0LL;
  v23 = 0LL;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v29, 0, sizeof(v29));
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( AccessMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a6;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *a6 = 0LL;
  if ( a5 )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             1024,
             (__int64)PsProcessType,
             AccessMode,
             0x6E457350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      v12 = ObpReferenceObjectByHandleWithTag(a2, 0, (__int64)PsThreadType, AccessMode, 0x6E457350u, &v23, 0LL, 0LL);
      if ( v12 >= 0 )
      {
        if ( *((PVOID *)v23 + 68) == Object )
          goto LABEL_10;
        ObfDereferenceObjectWithTag(v23, 0x6E457350u);
        v12 = -1073741811;
      }
LABEL_31:
      v19 = Object;
LABEL_25:
      ObfDereferenceObjectWithTag(v19, 0x6E457350u);
      return (unsigned int)v12;
    }
LABEL_10:
    NextProcessThread = (_DWORD *)PsGetNextProcessThread(Object, v23);
    v25 = NextProcessThread;
    if ( NextProcessThread )
    {
      v20 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode);
      CurrentThread = KeGetCurrentThread();
      v27 = CurrentThread;
      v15 = Object;
      while ( 1 )
      {
        if ( (NextProcessThread[360] & 2) != 0
          || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[360] & 2) != 0) )
        {
          v12 = SeCreateAccessState(&PassedAccessState, v29, v22, (_DWORD *)PsProcessType + 19);
          if ( v12 < 0 )
            goto LABEL_23;
          if ( v20 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          v12 = ObOpenObjectByPointer(
                  NextProcessThread,
                  a4 & (AccessMode != 0 ? 7666 : 73714),
                  &PassedAccessState,
                  0,
                  (POBJECT_TYPE)PsThreadType,
                  AccessMode,
                  &Handle);
          SeDeleteAccessState((__int64)&PassedAccessState, v16, v17, v18);
          if ( v12 >= 0 )
          {
            *v26 = Handle;
LABEL_23:
            ObfDereferenceObjectWithTag(v15, 0x6E457350u);
            if ( NextProcessThread )
            {
              v19 = NextProcessThread;
              goto LABEL_25;
            }
            return (unsigned int)v12;
          }
          if ( v12 != -1073741790 )
            goto LABEL_23;
        }
        NextProcessThread = (_DWORD *)PsGetNextProcessThread(v15, NextProcessThread);
        v25 = NextProcessThread;
        CurrentThread = v27;
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
