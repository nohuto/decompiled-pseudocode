/*
 * XREFs of NtUserSetObjectInformation @ 0x1C01DBC90
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _SetUserObjectInformation @ 0x1C01A8934 (_SetUserObjectInformation.c)
 */

__int64 __fastcall NtUserSetObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  SIZE_T v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  char v19; // [rsp+68h] [rbp+10h] BYREF

  v4 = a4;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v19);
  if ( a2 == 7 )
  {
    v11 = 0;
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v8, v10);
    ProbeForRead(a3, v4, CurrentProcessWow64Process != 0 ? 1 : 4);
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) >= 0 )
    {
      if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
      {
        v11 = SetUserObjectInformation(Handle, a2, a3, v4);
        SetHandleFlag(Handle, 2LL, 0LL);
      }
      else
      {
        v11 = 0;
        UserSetLastError(8);
      }
    }
    else
    {
      v11 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v19, v8, v10);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v11;
}
