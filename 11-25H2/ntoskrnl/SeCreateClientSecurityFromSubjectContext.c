/*
 * XREFs of SeCreateClientSecurityFromSubjectContext @ 0x140A3B700
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     RtlSidDominatesForTrust @ 0x140361640 (RtlSidDominatesForTrust.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
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
  bool v15; // [rsp+90h] [rbp+8h] BYREF

  ClientToken = SubjectContext->ClientToken;
  SourceSid = 0LL;
  v6 = 0;
  v15 = 0;
  if ( !ClientToken )
    ClientToken = SubjectContext->PrimaryToken;
  ObfReferenceObjectWithTag(ClientToken, 0x63436553u);
  if ( SubjectContext->ClientToken )
  {
    v11 = 2;
    RtlSidDominatesForTrust(
      *((_QWORD *)SubjectContext->PrimaryToken + 138),
      *((_QWORD *)SubjectContext->ClientToken + 138),
      &v15);
    if ( !v15 )
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
