/*
 * XREFs of NdisGetThreadObjectCompartmentId @ 0x140061AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetThreadObjectCompartmentId(PETHREAD Thread)
{
  unsigned int *ThreadProperty; // rax
  unsigned int v3; // edi
  __int64 v4; // rcx
  PACCESS_TOKEN v5; // rax
  void *v6; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v8; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rcx
  PACCESS_TOKEN v12; // rax
  void *v13; // rbp
  unsigned int ThreadSessionId; // eax
  NTSTATUS v15; // ebx
  NTSTATUS v16; // ebx
  KIRQL v17; // al
  unsigned int v18; // ebx
  BOOLEAN v19[4]; // [rsp+20h] [rbp-38h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+24h] [rbp-34h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v21; // [rsp+28h] [rbp-30h] BYREF
  PVOID TokenInformation; // [rsp+30h] [rbp-28h] BYREF
  PVOID v23; // [rsp+38h] [rbp-20h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+68h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+70h] [rbp+18h] BYREF
  BOOLEAN v26; // [rsp+78h] [rbp+20h] BYREF

  ThreadProperty = (unsigned int *)PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v18 = *ThreadProperty;
    ObfDereferenceObject(ThreadProperty);
    if ( v18 )
      return v18;
  }
  v3 = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    goto LABEL_5;
  }
  v5 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v6 = v5;
  if ( !v5
    || (v15 = SeQueryInformationToken(v5, TokenSessionId, &TokenInformation),
        PsDereferenceImpersonationToken(v6),
        v15 < 0) )
  {
    CurrentProcessSessionId = PsGetThreadSessionId(Thread);
LABEL_5:
    v8 = CurrentProcessSessionId;
    goto LABEL_6;
  }
  v8 = (unsigned int)TokenInformation;
LABEL_6:
  if ( v8 != -1 )
    goto LABEL_7;
  CurrentThread = KeGetCurrentThread();
  v19[0] = 0;
  v26 = 0;
  v21 = SecurityAnonymous;
  v23 = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    ThreadSessionId = PsGetCurrentProcessSessionId(v11);
    goto LABEL_13;
  }
  v12 = PsReferenceImpersonationToken(CurrentThread, v19, &v26, &v21);
  v13 = v12;
  if ( !v12 || (v16 = SeQueryInformationToken(v12, TokenSessionId, &v23), PsDereferenceImpersonationToken(v13), v16 < 0) )
  {
    ThreadSessionId = PsGetThreadSessionId(CurrentThread);
LABEL_13:
    v8 = ThreadSessionId;
    goto LABEL_7;
  }
  v8 = (unsigned int)v23;
LABEL_7:
  if ( v8 >= dword_140126990 )
    return 1LL;
  v17 = KeAcquireSpinLockRaiseToDpc(&qword_1401269E0);
  if ( v8 < dword_140126990 )
    v3 = *((_DWORD *)qword_140126A30 + 6 * v8);
  KeReleaseSpinLock(&qword_1401269E0, v17);
  if ( !v3 )
    return 1;
  return v3;
}
