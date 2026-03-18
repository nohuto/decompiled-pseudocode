/*
 * XREFs of NtDebugActiveProcess @ 0x1409E8220
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409E85CC (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E8B88 (DbgkpSetProcessDebugObject.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409E8EA0 (DbgkpPostFakeProcessCreateMessages.c)
 */

__int64 __fastcall NtDebugActiveProcess(ULONG_PTR a1, void *a2)
{
  char PreviousMode; // r14
  __int64 result; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 Count; // rdi
  int v10; // edi
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
              v10 = VslpEnterIumSecureMode(2u, 12LL, 0, (__int64)v16),
              v10 >= 0) )
        {
          if ( !Process[1].ReadyTime
            || (v13 = WORD2(Process[3].PerProcessorCycleTimes), v13 != 332) && v13 != 452
            || v7[98].Count && ((v14 = WORD2(v7[221].Ptr), v14 == 332) || v14 == 452) )
          {
            Object[0] = 0LL;
            v10 = ObReferenceObjectByHandle(a2, 2u, DbgkDebugObjectType, PreviousMode, Object, 0LL);
            if ( v10 >= 0 )
            {
              v11 = ExAcquireRundownProtection(v7 + 61);
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
    return (unsigned int)v10;
  }
  return result;
}
