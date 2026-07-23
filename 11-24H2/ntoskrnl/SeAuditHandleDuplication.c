/*
 * XREFs of SeAuditHandleDuplication @ 0x140863C90
 * Callers:
 *     ObAuditInheritedHandleProcedure @ 0x140740D30 (ObAuditInheritedHandleProcedure.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x1408948C8 (ObCompleteObjectDuplication.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     ObNormalizeHandleValue @ 0x140861E80 (ObNormalizeHandleValue.c)
 */

void __fastcall SeAuditHandleDuplication(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // r9d
  int v13; // r10d
  int v14; // r9d
  int v15; // r10d
  _QWORD SubjectContext[5]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD Src[12]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+80h] [rbp-88h]
  int v20; // [rsp+84h] [rbp-84h]
  const int *v21; // [rsp+98h] [rbp-70h]
  int v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A4h] [rbp-64h]
  __int64 v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+C0h] [rbp-48h]
  int v26; // [rsp+C4h] [rbp-44h]
  unsigned __int64 v27; // [rsp+C8h] [rbp-40h]
  int v28; // [rsp+E0h] [rbp-28h]
  int v29; // [rsp+E4h] [rbp-24h]
  __int64 v30; // [rsp+E8h] [rbp-20h]
  int v31; // [rsp+100h] [rbp-8h]
  int v32; // [rsp+104h] [rbp-4h]
  unsigned __int64 v33; // [rsp+108h] [rbp+0h]
  int v34; // [rsp+120h] [rbp+18h]
  int v35; // [rsp+124h] [rbp+1Ch]
  __int64 v36; // [rsp+128h] [rbp+20h]

  memset(&SubjectContext[1], 0, 32);
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
  v8 = SubjectContext[3];
  v9 = SubjectContext[3];
  if ( SubjectContext[1] )
    v9 = SubjectContext[1];
  v10 = **(_QWORD **)(v9 + 152);
  memset_0(Src, 0, 0x418uLL);
  Src[0] = 3;
  if ( SubjectContext[1] )
    v8 = SubjectContext[1];
  Src[4] = 524412;
  Src[1] = 4690;
  Src[6] = 4;
  v11 = *(unsigned __int8 *)(v10 + 1);
  v18 = v10;
  v19 = 1;
  v20 = 32;
  v22 = 5;
  Src[7] = 4 * v11 + 8;
  v21 = &SeSubsystemName;
  v23 = 8;
  v24 = *(_QWORD *)(v8 + 24);
  v25 = 11;
  v26 = 8;
  v27 = ObNormalizeHandleValue(a1);
  v30 = *(_QWORD *)(a3 + 464);
  v28 = v12;
  v29 = v13;
  v31 = v12;
  v32 = v13;
  v33 = ObNormalizeHandleValue(a2);
  v36 = *(_QWORD *)(a4 + 464);
  v34 = v14;
  v35 = v15;
  Src[2] = 7;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
}
