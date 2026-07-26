/*
 * XREFs of ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14005FA50
 * Callers:
 *     ?ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDENTIFIER_OUT@@@Z @ 0x140142290 (-ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDEN.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetNsiClientInfoForThread(PETHREAD Thread, struct _NDIS_NSI_CLIENT_INFO *a2)
{
  _DWORD *ThreadProperty; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v5; // rdi
  __int64 v6; // rcx
  PACCESS_TOKEN v7; // rax
  void *v8; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v10; // ebx
  int v11; // eax
  KIRQL v12; // al
  unsigned int v13; // r8d
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v16; // rcx
  PACCESS_TOKEN v17; // rax
  void *v18; // r14
  unsigned int ThreadSessionId; // eax
  NTSTATUS v20; // ebx
  NTSTATUS v21; // ebx
  int v22; // ebp
  KIRQL v23; // al
  BOOLEAN v24[4]; // [rsp+20h] [rbp-48h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+24h] [rbp-44h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v26; // [rsp+28h] [rbp-40h] BYREF
  PVOID TokenInformation; // [rsp+30h] [rbp-38h] BYREF
  PVOID v28; // [rsp+38h] [rbp-30h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+80h] [rbp+18h] BYREF
  BOOLEAN v31; // [rsp+88h] [rbp+20h] BYREF

  *(_OWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  ThreadProperty = PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  v5 = 0LL;
  if ( ThreadProperty )
  {
    *((_DWORD *)a2 + 1) = *ThreadProperty;
    *(_DWORD *)a2 = ThreadProperty[1];
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
  }
  if ( !*((_DWORD *)a2 + 1) )
  {
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
      v7 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v8 = v7;
      if ( v7 )
      {
        v20 = SeQueryInformationToken(v7, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v8);
        if ( v20 >= 0 )
        {
          v10 = (unsigned int)TokenInformation;
LABEL_8:
          if ( v10 == -1 )
          {
            CurrentThread = KeGetCurrentThread();
            v24[0] = 0;
            v31 = 0;
            v26 = SecurityAnonymous;
            v28 = 0LL;
            if ( KeGetCurrentIrql() >= 2u )
            {
              ThreadSessionId = PsGetCurrentProcessSessionId(v16);
            }
            else
            {
              v17 = PsReferenceImpersonationToken(CurrentThread, v24, &v31, &v26);
              v18 = v17;
              if ( v17 )
              {
                v21 = SeQueryInformationToken(v17, TokenSessionId, &v28);
                PsDereferenceImpersonationToken(v18);
                if ( v21 >= 0 )
                {
                  v10 = (unsigned int)v28;
                  goto LABEL_9;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(CurrentThread);
            }
            v10 = ThreadSessionId;
          }
LABEL_9:
          if ( v10 < dword_140126990 )
          {
            v22 = 0;
            v23 = KeAcquireSpinLockRaiseToDpc(&qword_1401269E0);
            if ( v10 < dword_140126990 )
              v22 = *((_DWORD *)qword_140126A30 + 6 * v10);
            KeReleaseSpinLock(&qword_1401269E0, v23);
            if ( !v22 )
              v22 = 1;
            v11 = v22;
          }
          else
          {
            v11 = 1;
          }
          *((_DWORD *)a2 + 1) = v11;
          goto LABEL_12;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(Thread);
    }
    v10 = CurrentProcessSessionId;
    goto LABEL_8;
  }
LABEL_12:
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v13 = *((_DWORD *)a2 + 1);
  for ( i = qword_140126AF0;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0;
        i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
  {
    if ( *((_DWORD *)i + 4) == v13 )
    {
      v5 = i;
      break;
    }
    if ( *((_DWORD *)i + 4) > v13 )
      break;
  }
  *(_OWORD *)((char *)a2 + 8) = *(_OWORD *)((char *)v5 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v12);
}
