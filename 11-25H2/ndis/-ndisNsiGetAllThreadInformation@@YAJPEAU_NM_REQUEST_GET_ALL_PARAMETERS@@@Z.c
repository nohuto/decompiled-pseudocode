/*
 * XREFs of ?ndisNsiGetAllThreadInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140062680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisNsiGetAllThreadInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  int v1; // edx
  int *v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int *ThreadProperty; // rax
  int v5; // esi
  __int64 v6; // rcx
  PACCESS_TOKEN v7; // rax
  void *v8; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v10; // edi
  int v11; // eax
  struct _KTHREAD *v13; // rbp
  __int64 v14; // rcx
  PACCESS_TOKEN v15; // rax
  void *v16; // r14
  unsigned int ThreadSessionId; // eax
  NTSTATUS v18; // edi
  NTSTATUS v19; // edi
  KIRQL v20; // al
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+20h] [rbp-48h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v22; // [rsp+24h] [rbp-44h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-40h] BYREF
  PVOID v24; // [rsp+30h] [rbp-38h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+70h] [rbp+8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v27; // [rsp+80h] [rbp+18h] BYREF
  BOOLEAN v28; // [rsp+88h] [rbp+20h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  if ( !v1 )
  {
    v2 = (int *)*((_QWORD *)a1 + 5);
    if ( !v2 )
      return 0LL;
    CurrentThread = KeGetCurrentThread();
    ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
    v5 = 0;
    if ( ThreadProperty )
    {
      *v2 = *ThreadProperty;
      v2[1] = ThreadProperty[1];
      ObfDereferenceObject(ThreadProperty);
    }
    else
    {
      *(_QWORD *)v2 = 0LL;
    }
    if ( *v2 )
      return 0LL;
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    }
    else
    {
      v7 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v8 = v7;
      if ( v7 )
      {
        v18 = SeQueryInformationToken(v7, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v8);
        if ( v18 >= 0 )
        {
          v10 = (unsigned int)TokenInformation;
LABEL_10:
          if ( v10 == -1 )
          {
            v13 = KeGetCurrentThread();
            v28 = 0;
            v27 = 0;
            v22 = SecurityAnonymous;
            v24 = 0LL;
            if ( KeGetCurrentIrql() >= 2u )
            {
              ThreadSessionId = PsGetCurrentProcessSessionId(v14);
            }
            else
            {
              v15 = PsReferenceImpersonationToken(v13, &v28, &v27, &v22);
              v16 = v15;
              if ( v15 )
              {
                v19 = SeQueryInformationToken(v15, TokenSessionId, &v24);
                PsDereferenceImpersonationToken(v16);
                if ( v19 >= 0 )
                {
                  v10 = (unsigned int)v24;
                  goto LABEL_11;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(v13);
            }
            v10 = ThreadSessionId;
          }
LABEL_11:
          if ( v10 < dword_140126990 )
          {
            v20 = KeAcquireSpinLockRaiseToDpc(&qword_1401269E0);
            if ( v10 < dword_140126990 )
              v5 = *((_DWORD *)qword_140126A30 + 6 * v10);
            KeReleaseSpinLock(&qword_1401269E0, v20);
            if ( !v5 )
              v5 = 1;
            v11 = v5;
          }
          else
          {
            v11 = 1;
          }
          *v2 = v11;
          return 0LL;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v10 = CurrentProcessSessionId;
    goto LABEL_10;
  }
  if ( (unsigned int)(v1 - 1) > 1 )
    return 3221225485LL;
  else
    return 3221225474LL;
}
