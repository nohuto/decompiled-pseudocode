/*
 * XREFs of NtDebugActiveProcess @ 0x1409E31E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409E358C (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E3B48 (DbgkpSetProcessDebugObject.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409E3E60 (DbgkpPostFakeProcessCreateMessages.c)
 */

NTSTATUS __cdecl NtDebugActiveProcess(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  char PreviousMode; // r14
  NTSTATUS result; // eax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 Count; // rdi
  NTSTATUS v10; // edi
  BOOLEAN v11; // al
  struct _KEVENT *v12; // rsi
  __int16 v13; // ax
  __int16 v14; // ax
  PVOID Object[2]; // [rsp+40h] [rbp-59h] BYREF
  char v16[8]; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-41h]
  __int64 v18; // [rsp+60h] [rbp-39h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  Object[1] = 0LL;
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
    CurrentThread = KeGetCurrentThread();
    v7 = (struct _EX_RUNDOWN_REF *)Object[0];
    Process = CurrentThread->ApcState.Process;
    if ( Object[0] == Process || Object[0] == PsInitialSystemProcess )
    {
      v10 = -1073741790;
    }
    else
    {
      LOBYTE(v5) = PreviousMode;
      if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v5, CurrentThread->ApcState.Process, Object[0]) )
      {
        v10 = -1073740014;
      }
      else
      {
        Count = v7[46].Count;
        if ( (Count & 1) == 0
          || (memset_0(v16, 0, 0x68uLL),
              v17 = Count,
              v18 = 1LL,
              v10 = VslpEnterIumSecureMode(2u, 0xCu, 0, (__int64)v16),
              v10 >= 0) )
        {
          if ( !Process[1].ReadyTime
            || (v13 = WORD2(Process[3].PerProcessorCycleTimes), v13 != 332) && v13 != 452
            || v7[98].Count && ((v14 = WORD2(v7[221].Ptr), v14 == 332) || v14 == 452) )
          {
            Object[0] = 0LL;
            v10 = ObReferenceObjectByHandle(DebugObjectHandle, 2u, DbgkDebugObjectType, PreviousMode, Object, 0LL);
            if ( v10 >= 0 )
            {
              v11 = ExAcquireRundownProtection_0(v7 + 61);
              v12 = (struct _KEVENT *)Object[0];
              if ( v11 )
              {
                DbgkpPostFakeProcessCreateMessages((ULONG_PTR)v7);
                v10 = DbgkpSetProcessDebugObject((PRKPROCESS)v7, v12);
                ExReleaseRundownProtection_0(v7 + 61);
              }
              else
              {
                v10 = -1073741558;
              }
              ObfDereferenceObject(v12);
            }
          }
          else
          {
            v10 = -1073741637;
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    return v10;
  }
  return result;
}
