/*
 * XREFs of ?UserCheckForMessageAccessWithWindowCapability@@YAHPEAUtagWND@@I@Z @ 0x1401155A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserCheckForMessageAccessWithWindowCapability(struct tagWND *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  PVOID v8; // rdi
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-9h] BYREF
  _OWORD Buffer[2]; // [rsp+70h] [rbp+17h] BYREF
  __int128 v11; // [rsp+90h] [rbp+37h]
  int AccessStatus; // [rsp+C0h] [rbp+67h] BYREF
  DWORD GrantedAccess; // [rsp+D0h] [rbp+77h] BYREF

  v2 = 0;
  LOWORD(v4) = 0;
  if ( a1 )
    v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1) + 19888);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GrantedAccess = 0;
  AccessStatus = 0;
  v6 = *(_QWORD *)(v5 + 40LL * (unsigned __int16)v4 + 24);
  if ( !v6 )
    return 0LL;
  v11 = 0LL;
  DWORD2(v11) = a2;
  memset(Buffer, 0, sizeof(Buffer));
  v8 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v6 + 40), Buffer);
  if ( !v8 )
    return 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v2) = SeAccessCheck(
                 v8,
                 &SubjectContext,
                 0,
                 0x10001u,
                 0,
                 0LL,
                 (PGENERIC_MAPPING)&WinMsgCapGenericMapping,
                 1,
                 &GrantedAccess,
                 &AccessStatus) != 0;
  SeReleaseSubjectContext(&SubjectContext);
  return v2;
}
