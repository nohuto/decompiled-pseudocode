/*
 * XREFs of NtDebugActiveProcess @ 0x1409BB6C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409BA9F8 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1409BAE18 (DbgkpSetProcessDebugObject.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409BC040 (PsTestProtectedProcessIncompatibility.c)
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
  int v13; // eax
  __int16 v14; // ax
  __int16 v15; // ax
  PVOID Object; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  char v18[8]; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-41h]
  __int64 v20; // [rsp+60h] [rbp-39h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v17 = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (struct _EX_RUNDOWN_REF *)Object;
    Process = CurrentThread->ApcState.Process;
    if ( Object == Process || Object == PsInitialSystemProcess )
    {
      v10 = -1073741790;
    }
    else
    {
      LOBYTE(v5) = PreviousMode;
      if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v5, CurrentThread->ApcState.Process, Object) )
      {
        v10 = -1073740014;
      }
      else
      {
        Count = v7[46].Count;
        if ( (Count & 1) == 0
          || (memset_0(v18, 0, 0x68uLL),
              v19 = Count,
              v20 = 1LL,
              v10 = VslpEnterIumSecureMode(2u, 0xCu, 0, (__int64)v18),
              v10 >= 0) )
        {
          if ( !Process[1].ReadyTime
            || (v14 = WORD2(Process[3].PerProcessorCycleTimes), v14 != 332) && v14 != 452
            || v7[98].Count && ((v15 = WORD2(v7[221].Ptr), v15 == 332) || v15 == 452) )
          {
            Object = 0LL;
            v10 = ObReferenceObjectByHandle(DebugObjectHandle, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
            if ( v10 >= 0 )
            {
              v11 = ExAcquireRundownProtection_0(v7 + 61);
              v12 = (struct _KEVENT *)Object;
              if ( v11 )
              {
                v13 = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)v7, (struct _KEVENT *)Object, &v17);
                v10 = DbgkpSetProcessDebugObject((PRKPROCESS)v7, v12, v13, v17);
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
