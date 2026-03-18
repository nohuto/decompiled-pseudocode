/*
 * XREFs of EditionGetUserObjectInformationEntryPoint @ 0x140106250
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _GetUserObjectInformation @ 0x1401063F8 (_GetUserObjectInformation.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 */

__int64 __fastcall EditionGetUserObjectInformationEntryPoint(
        HANDLE Handle,
        int a2,
        volatile void *a3,
        unsigned int a4,
        _DWORD *a5)
{
  ULONG v9; // r8d
  _DWORD *v10; // rdx
  unsigned int UserObjectInformation; // ebx
  __int64 v12; // rcx
  __int64 v14[3]; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v16[24]; // [rsp+68h] [rbp-20h] BYREF

  LODWORD(v14[0]) = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  v9 = 4;
  if ( a2 != 1 )
    v9 = 2;
  ProbeForWrite(a3, a4, v9);
  if ( a5 )
  {
    v10 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
  }
  Object = 0LL;
  if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) < 0 )
  {
    UserObjectInformation = 0;
  }
  else if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
  {
    UserObjectInformation = GetUserObjectInformation(Handle, (__int64)v14);
    SetHandleFlag(Handle, 2LL, 0LL);
    if ( a5 )
      *a5 = v14[0];
  }
  else
  {
    UserObjectInformation = 0;
    UserSetLastError(8);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
  UserSessionSwitchLeaveCrit(v12);
  return UserObjectInformation;
}
