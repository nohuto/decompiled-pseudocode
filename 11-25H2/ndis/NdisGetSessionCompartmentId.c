/*
 * XREFs of NdisGetSessionCompartmentId @ 0x14004D730
 * Callers:
 *     NdisGetProcessObjectCompartmentId @ 0x14004D4C0 (NdisGetProcessObjectCompartmentId.c)
 *     NdisGetJobObjectCompartmentId @ 0x14004D670 (NdisGetJobObjectCompartmentId.c)
 *     ?ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x14004D6D0 (-ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1400CF560 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetSessionCompartmentId(unsigned int a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rcx
  PACCESS_TOKEN v6; // rax
  void *v7; // rbp
  unsigned int CurrentProcessSessionId; // eax
  NTSTATUS v9; // ebx
  KIRQL v10; // al
  BOOLEAN EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  v1 = 0;
  v2 = a1;
  if ( a1 == -1 )
  {
    CurrentThread = KeGetCurrentThread();
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
    }
    else
    {
      v6 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v7 = v6;
      if ( v6 )
      {
        v9 = SeQueryInformationToken(v6, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v7);
        if ( v9 >= 0 )
        {
          v2 = (unsigned int)TokenInformation;
          goto LABEL_2;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v2 = CurrentProcessSessionId;
  }
LABEL_2:
  if ( v2 >= dword_140126990 )
    return 1LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&qword_1401269E0);
  if ( v2 < dword_140126990 )
    v1 = *((_DWORD *)qword_140126A30 + 6 * v2);
  KeReleaseSpinLock(&qword_1401269E0, v10);
  if ( !v1 )
    return 1;
  return v1;
}
