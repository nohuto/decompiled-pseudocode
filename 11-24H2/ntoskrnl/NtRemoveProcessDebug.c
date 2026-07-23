/*
 * XREFs of NtRemoveProcessDebug @ 0x1409E3070
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409E358C (PsTestProtectedProcessIncompatibility.c)
 *     DbgkClearProcessDebugObject @ 0x1409E37F8 (DbgkClearProcessDebugObject.c)
 */

NTSTATUS __cdecl NtRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  char PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v5; // rcx
  struct _KPROCESS *v6; // rdi
  NTSTATUS v7; // ebx
  unsigned __int64 SecureHandle; // rbx
  PVOID Object[2]; // [rsp+40h] [rbp-A8h] BYREF
  char v10[8]; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp-90h]
  __int64 v12; // [rsp+60h] [rbp-88h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    LOBYTE(v5) = PreviousMode;
    v6 = (struct _KPROCESS *)Object[0];
    if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v5, KeGetCurrentThread()->ApcState.Process, Object[0]) )
    {
      v7 = -1073740014;
    }
    else
    {
      SecureHandle = v6->SecureState.SecureHandle;
      if ( (SecureHandle & 1) == 0
        || (memset_0(v10, 0, 0x68uLL),
            v12 = 0LL,
            v11 = SecureHandle,
            v7 = VslpEnterIumSecureMode(2u, 0xCu, 0, (__int64)v10),
            v7 >= 0) )
      {
        Object[0] = 0LL;
        v7 = ObReferenceObjectByHandle(DebugObjectHandle, 2u, DbgkDebugObjectType, PreviousMode, Object, 0LL);
        if ( v7 >= 0 )
        {
          v7 = DbgkClearProcessDebugObject(v6);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return v7;
  }
  return result;
}
