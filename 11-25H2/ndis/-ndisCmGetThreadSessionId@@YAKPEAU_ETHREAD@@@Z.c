/*
 * XREFs of ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x14005F5A0
 * Callers:
 *     NdisSetSessionCompartmentId @ 0x1400CF560 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCmGetThreadSessionId(PETHREAD Thread)
{
  __int64 v2; // rcx
  PACCESS_TOKEN v3; // rax
  void *v4; // rsi
  NTSTATUS v6; // edi
  PVOID TokenInformation; // [rsp+20h] [rbp-28h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+60h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+68h] [rbp+20h] BYREF

  CopyOnOpen = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  EffectiveOnly = 0;
  if ( KeGetCurrentIrql() >= 2u )
    return PsGetCurrentProcessSessionId(v2);
  v3 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v4 = v3;
  if ( v3
    && (v6 = SeQueryInformationToken(v3, TokenSessionId, &TokenInformation), PsDereferenceImpersonationToken(v4),
                                                                             v6 >= 0) )
  {
    return (unsigned int)TokenInformation;
  }
  else
  {
    return PsGetThreadSessionId(Thread);
  }
}
