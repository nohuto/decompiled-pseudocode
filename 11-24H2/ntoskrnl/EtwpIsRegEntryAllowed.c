/*
 * XREFs of EtwpIsRegEntryAllowed @ 0x140832F04
 * Callers:
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     EtwpEventWriteProviderAccessCheckStatus @ 0x1407A7564 (EtwpEventWriteProviderAccessCheckStatus.c)
 *     EtwpIsGuidAllowed @ 0x140833108 (EtwpIsGuidAllowed.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408331C0 (EtwpCheckCurrentUserProcessAccess.c)
 *     EtwpApplyTransientFilters @ 0x140834EC8 (EtwpApplyTransientFilters.c)
 *     EtwpCheckGuidAccess @ 0x140836754 (EtwpCheckGuidAccess.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 */

bool __fastcall EtwpIsRegEntryAllowed(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, char a6, char a7)
{
  int v8; // esi
  bool v12; // zf
  __int64 v13; // rcx
  void *v14; // rax
  _QWORD *v15; // rax
  int v16; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  v8 = *(_DWORD *)(a4 + 72);
  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 && (a3[17] || a3[18])
    || (v8 == 2 || a3[18]) && !(unsigned __int8)EtwpApplyTransientFilters(a1, a5)
    || (*(_BYTE *)(a1 + 98) & 8) != 0
    && (a7 == 2 || a6 || !v8 && *(_WORD *)(a4 + 104) != *(_WORD *)(*(_QWORD *)(a1 + 32) + 88LL)) )
  {
    return 0;
  }
  if ( !a3[18] )
  {
    if ( a7 == 2 && !(unsigned __int8)EtwpIsGuidAllowed(a2, *(_QWORD *)(a1 + 32) + 40LL) )
      return 0;
    v12 = a3[16] == 0;
    *(_OWORD *)&SubjectContext.ImpersonationLevel = 0LL;
    if ( !v12 && (*(_BYTE *)(a1 + 98) & 1) == 0 )
    {
      v13 = *(_QWORD *)(a1 + 80);
      v14 = *(void **)(v13 + 464);
      SubjectContext.ClientToken = 0LL;
      SubjectContext.ProcessAuditId = v14;
      v15 = (_QWORD *)PsReferencePrimaryTokenWithTag(v13, 0x75536553u);
      SubjectContext.PrimaryToken = v15;
      if ( SeTokenLeakTracking )
      {
        if ( v15 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v15[143] + 284LL));
          if ( SubjectContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
            __debugbreak();
        }
      }
      v16 = EtwpCheckGuidAccess(a3, 512LL, &SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      if ( v16 )
      {
        if ( v16 < 0 )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_ACCESS_DENIED) )
            EtwpEventWriteProviderAccessCheckStatus(v19, v18, v20, a1, a2, v16);
        }
        return 0;
      }
    }
    return 1;
  }
  return !(unsigned int)EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(a1 + 80));
}
