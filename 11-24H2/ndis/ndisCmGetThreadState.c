/*
 * XREFs of ndisCmGetThreadState @ 0x140029430
 * Callers:
 *     ndisCmSetThreadState @ 0x140029890 (ndisCmSetThreadState.c)
 *     ndisIfCreateCompartment @ 0x1400CA194 (ndisIfCreateCompartment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCmGetThreadState(PETHREAD Thread, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  PACCESS_TOKEN v8; // rax
  void *v9; // rbp
  unsigned int ThreadSessionId; // eax
  unsigned int v11; // edi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v13; // rcx
  PACCESS_TOKEN v14; // rax
  void *v15; // r14
  unsigned int CurrentProcessSessionId; // eax
  NTSTATUS v17; // edi
  NTSTATUS v18; // edi
  KIRQL v19; // al
  BOOLEAN v20; // [rsp+20h] [rbp-38h] BYREF
  BOOLEAN v21[3]; // [rsp+21h] [rbp-37h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+24h] [rbp-34h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v23; // [rsp+28h] [rbp-30h] BYREF
  PVOID TokenInformation; // [rsp+30h] [rbp-28h] BYREF
  PVOID v25; // [rsp+38h] [rbp-20h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+68h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+78h] [rbp+20h] BYREF

  result = (__int64)PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  v7 = 0;
  if ( result )
  {
    *a2 = *(_DWORD *)result;
    *a3 = *(_DWORD *)(result + 4);
    result = ObfDereferenceObject((PVOID)result);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
  if ( *a2 )
    return result;
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    ThreadSessionId = ((__int64 (*)(void))PsGetCurrentProcessSessionId)();
    goto LABEL_7;
  }
  v8 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v9 = v8;
  if ( !v8
    || (v17 = SeQueryInformationToken(v8, TokenSessionId, &TokenInformation),
        PsDereferenceImpersonationToken(v9),
        v17 < 0) )
  {
    ThreadSessionId = PsGetThreadSessionId(Thread);
LABEL_7:
    v11 = ThreadSessionId;
    goto LABEL_8;
  }
  v11 = (unsigned int)TokenInformation;
LABEL_8:
  if ( v11 == -1 )
  {
    CurrentThread = KeGetCurrentThread();
    v21[0] = 0;
    v20 = 0;
    v23 = SecurityAnonymous;
    v25 = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
    }
    else
    {
      v14 = PsReferenceImpersonationToken(CurrentThread, v21, &v20, &v23);
      v15 = v14;
      if ( v14 )
      {
        v18 = SeQueryInformationToken(v14, TokenSessionId, &v25);
        PsDereferenceImpersonationToken(v15);
        if ( v18 >= 0 )
        {
          v11 = (unsigned int)v25;
          goto LABEL_9;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v11 = CurrentProcessSessionId;
  }
LABEL_9:
  if ( v11 < dword_14011C950 )
  {
    v19 = KeAcquireSpinLockRaiseToDpc(&qword_14011C9A0);
    if ( v11 < dword_14011C950 )
      v7 = *((_DWORD *)qword_14011C9F0 + 6 * v11);
    KeReleaseSpinLock(&qword_14011C9A0, v19);
    if ( !v7 )
      v7 = 1;
    result = v7;
  }
  else
  {
    result = 1LL;
  }
  *a2 = result;
  return result;
}
