/*
 * XREFs of IoCheckRedirectionTrustLevel @ 0x1404769B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x140487CC0 (SeTokenGetRedirectionTrustPolicy.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140A9DA78 (EtwTimLogRedirectionTrustPolicy.c)
 */

__int64 __fastcall IoCheckRedirectionTrustLevel(
        int a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        int a4,
        __int64 a5)
{
  int v5; // r14d
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *PrimaryToken; // rbx
  int v12; // ebp
  int v13; // ebx
  int v14; // ebp
  bool v15; // bl
  bool v16; // al
  char v17[8]; // [rsp+30h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-40h] BYREF
  char v19; // [rsp+88h] [rbp+10h] BYREF

  v5 = 1;
  v19 = 1;
  v17[0] = 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a2 || (a4 & 0xFFFFFFFD) == 0 )
    return 0LL;
  if ( a3 )
  {
    p_SubjectContext = a3;
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    p_SubjectContext = &SubjectContext;
  }
  CurrentThread = KeGetCurrentThread();
  PrimaryToken = (PERESOURCE *)p_SubjectContext->PrimaryToken;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(PrimaryToken[6], 1u);
  v12 = *((_DWORD *)PrimaryToken + 50);
  ExReleaseResourceLite(PrimaryToken[6]);
  KeLeaveCriticalRegion();
  v13 = v12 & 0x400000;
  v14 = v12 & 0x800000;
  if ( p_SubjectContext->ClientToken && p_SubjectContext->ImpersonationLevel >= SecurityImpersonation )
  {
    SeTokenGetRedirectionTrustPolicy(p_SubjectContext->ClientToken, &v19, v17);
    v5 = 2;
  }
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectContext);
  v15 = v13 && v19;
  v16 = v14 && v17[0];
  if ( (v15 || v16)
    && (EtwTimLogRedirectionTrustPolicy(v15 + 1, KeGetCurrentThread()->ApcState.Process, a1, a5, v5 == 2), v15) )
  {
    return 3221226684LL;
  }
  else
  {
    return 0LL;
  }
}
