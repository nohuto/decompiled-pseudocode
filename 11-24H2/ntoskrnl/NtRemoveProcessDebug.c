/*
 * XREFs of NtRemoveProcessDebug @ 0x1409E80B0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409E85CC (PsTestProtectedProcessIncompatibility.c)
 *     DbgkClearProcessDebugObject @ 0x1409E8838 (DbgkClearProcessDebugObject.c)
 */

__int64 __fastcall NtRemoveProcessDebug(ULONG_PTR a1, void *a2)
{
  char PreviousMode; // si
  __int64 result; // rax
  __int64 v5; // rcx
  struct _KPROCESS *v6; // rdi
  int v7; // ebx
  unsigned __int64 SecureHandle; // rbx
  PVOID Object[2]; // [rsp+40h] [rbp-A8h] BYREF
  char v10[8]; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp-90h]
  __int64 v12; // [rsp+60h] [rbp-88h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             a1,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
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
            v7 = VslpEnterIumSecureMode(2u, 12LL, 0, (__int64)v10),
            v7 >= 0) )
      {
        Object[0] = 0LL;
        v7 = ObReferenceObjectByHandle(a2, 2u, DbgkDebugObjectType, PreviousMode, Object, 0LL);
        if ( v7 >= 0 )
        {
          v7 = DbgkClearProcessDebugObject(v6);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return (unsigned int)v7;
  }
  return result;
}
