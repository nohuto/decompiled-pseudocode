/*
 * XREFs of NtRemoveProcessDebug @ 0x1409BA890
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkClearProcessDebugObject @ 0x1409BAAC0 (DbgkClearProcessDebugObject.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409BC040 (PsTestProtectedProcessIncompatibility.c)
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
