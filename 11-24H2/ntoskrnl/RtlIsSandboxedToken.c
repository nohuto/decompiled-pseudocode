/*
 * XREFs of RtlIsSandboxedToken @ 0x14090C230
 * Callers:
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopCheckInitiatorHint @ 0x1404503E8 (IopCheckInitiatorHint.c)
 *     CmpCheckCreateAccess @ 0x140867CFC (CmpCheckCreateAccess.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     ObpParseSymbolicLinkEx @ 0x14090BD40 (ObpParseSymbolicLinkEx.c)
 *     NtDuplicateToken @ 0x14090F090 (NtDuplicateToken.c)
 *     EtwTiLogSyscallUsage @ 0x140934948 (EtwTiLogSyscallUsage.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     ObCreateSymbolicLink @ 0x140A29CE8 (ObCreateSymbolicLink.c)
 *     ObpCreateDirectoryObject @ 0x140A45710 (ObpCreateDirectoryObject.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 */

bool __fastcall RtlIsSandboxedToken(PSECURITY_SUBJECT_CONTEXT SubjectContext, char a2)
{
  bool v2; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // rbx
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  LOBYTE(TokenInformation) = 0;
  p_SubjectContexta = SubjectContext;
  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  if ( !a2 )
    return 0;
  if ( !SubjectContext )
  {
    p_SubjectContexta = &SubjectContexta;
    SeCaptureSubjectContext(&SubjectContexta);
  }
  ClientToken = p_SubjectContexta->ClientToken;
  if ( !p_SubjectContexta->ClientToken )
    ClientToken = p_SubjectContexta->PrimaryToken;
  if ( SeQueryInformationToken(ClientToken, MaxTokenInfoClass, &TokenInformation) >= 0 )
    v2 = (_BYTE)TokenInformation == 0;
  if ( p_SubjectContexta == &SubjectContexta )
    SeReleaseSubjectContext(p_SubjectContexta);
  return !v2;
}
