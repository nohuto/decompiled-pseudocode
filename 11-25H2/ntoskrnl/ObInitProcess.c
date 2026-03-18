/*
 * XREFs of ObInitProcess @ 0x1409716EC
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     SepAuditingForSubCategory @ 0x14046EFD4 (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140782CA8 (SepAdtIncorporatePerUserPolicy.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     ExCreateHandleTable @ 0x1409718A8 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x140971B80 (ExDupHandleTable.c)
 *     ExSweepHandleTable @ 0x140972794 (ExSweepHandleTable.c)
 *     ExDestroyHandleTable @ 0x140972988 (ExDestroyHandleTable.c)
 *     ExEnumHandleTable @ 0x1409864C0 (ExEnumHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v8; // rsi
  __int64 HandleTable; // r14
  char v10; // al
  int v12; // r14d
  void *v13; // rbx
  PACCESS_TOKEN PrimaryToken; // r9
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-20h] BYREF
  void *v17; // [rsp+80h] [rbp+20h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = ExCreateHandleTable(a2, 1LL);
    goto LABEL_3;
  }
  v8 = ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v12 = ExDupHandleTable(a2, v8, a3, a4, (__int64)&v17);
  if ( v12 >= 0 )
  {
    HandleTable = (__int64)v17;
LABEL_3:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 768) = HandleTable;
      v10 = SepAuditingForSubCategory(124, 1);
      LOBYTE(v17) = v10;
      if ( dword_140F04340 )
      {
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        SeCaptureSubjectContext(&SubjectContext);
        PrimaryToken = SubjectContext.PrimaryToken;
        if ( SubjectContext.ClientToken )
          PrimaryToken = SubjectContext.ClientToken;
        SepAdtIncorporatePerUserPolicy(0x18u, 1, 0, (__int64)PrimaryToken, &v17);
        SeReleaseSubjectContext(&SubjectContext);
        v10 = (char)v17;
      }
      if ( v10 )
      {
        *(_QWORD *)&v15 = a2;
        *((_QWORD *)&v15 + 1) = a1;
        ExEnumHandleTable(HandleTable, ObAuditInheritedHandleProcedure, &v15, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 61);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 768) = 0LL;
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 61);
      return 3221225626LL;
    }
  }
  ExReleaseRundownProtection_0(a1 + 61);
  v13 = v17;
  if ( v17 )
  {
    ExSweepHandleTable(a2, v17, 0LL);
    ExDestroyHandleTable(v13);
  }
  return (unsigned int)v12;
}
