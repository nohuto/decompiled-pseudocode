/*
 * XREFs of NtUserSetObjectInformation @ 0x14029E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     _SetUserObjectInformation @ 0x140271980 (_SetUserObjectInformation.c)
 */

__int64 __fastcall NtUserSetObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  SIZE_T v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v13; // rcx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = a4;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
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
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
  UserSessionSwitchLeaveCrit(v13);
  return v11;
}
