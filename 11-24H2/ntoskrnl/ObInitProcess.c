/*
 * XREFs of ObInitProcess @ 0x14093BD38
 * Callers:
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     SepAuditingForSubCategory @ 0x14046D838 (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140791F68 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     ExEnumHandleTable @ 0x1408EF990 (ExEnumHandleTable.c)
 *     ExCreateHandleTable @ 0x14093BEF4 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x14093D080 (ExDupHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140940570 (ObReferenceProcessHandleTable.c)
 *     ExSweepHandleTable @ 0x1409E502C (ExSweepHandleTable.c)
 *     ExDestroyHandleTable @ 0x1409E5220 (ExDestroyHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rsi
  unsigned int *HandleTable; // r14
  char v10; // al
  int v12; // r14d
  unsigned int *v13; // rbx
  PACCESS_TOKEN PrimaryToken; // r9
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v17; // [rsp+80h] [rbp+20h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (unsigned int *)ExCreateHandleTable(a2, 1LL);
    goto LABEL_3;
  }
  v8 = ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v12 = ExDupHandleTable(a2, v8, a3, a4, (__int64)&v17);
  if ( v12 >= 0 )
  {
    HandleTable = v17;
LABEL_3:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 768) = HandleTable;
      v10 = SepAuditingForSubCategory(124, 1);
      LOBYTE(v17) = v10;
      if ( dword_140F047A0 )
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
        ExEnumHandleTable(
          HandleTable,
          (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ObAuditInheritedHandleProcedure,
          (__int64)&v15,
          0LL);
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
