/*
 * XREFs of SeCreateClientSecurityFromSubjectContext @ 0x140A35800
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     RtlSidDominatesForTrust @ 0x1403E3BC0 (RtlSidDominatesForTrust.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurityFromSubjectContext(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN ServerIsRemote,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  PACCESS_TOKEN ClientToken; // rbx
  unsigned __int8 *SourceSid; // r14
  char v6; // r15
  int v11; // ebp
  NTSTATUS ClientSecurity; // edi
  unsigned __int8 *v14; // r11
  BOOLEAN DominatesTrust; // [rsp+90h] [rbp+8h] BYREF

  ClientToken = SubjectContext->ClientToken;
  SourceSid = 0LL;
  v6 = 0;
  DominatesTrust = 0;
  if ( !ClientToken )
    ClientToken = SubjectContext->PrimaryToken;
  ObfReferenceObjectWithTag(ClientToken, 0x63436553u);
  if ( SubjectContext->ClientToken )
  {
    v11 = 2;
    RtlSidDominatesForTrust(
      *((PSID *)SubjectContext->PrimaryToken + 138),
      *((PSID *)SubjectContext->ClientToken + 138),
      &DominatesTrust);
    if ( !DominatesTrust )
    {
      v6 = 1;
      SourceSid = v14;
    }
  }
  else
  {
    v11 = 1;
  }
  ClientSecurity = SepCreateClientSecurityEx(
                     (__int64)ClientToken,
                     (__int64)ClientSecurityQos,
                     ServerIsRemote,
                     v11,
                     0,
                     SubjectContext->ImpersonationLevel,
                     0,
                     0LL,
                     v6,
                     SourceSid,
                     (__int64)ClientContext);
  if ( ClientSecurity < 0 || !ClientSecurityQos->ContextTrackingMode )
    ObfDereferenceObjectWithTag(ClientToken, 0x63436553u);
  return ClientSecurity;
}
