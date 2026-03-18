/*
 * XREFs of SepAdtTokenRightAdjusted @ 0x1409383C4
 * Callers:
 *     SepAdjustPrivileges @ 0x140937F10 (SepAdjustPrivileges.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140348E4C (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404709D0 (PsGetCurrentThreadProcess.c)
 *     SepAdtAuditablePrivilege @ 0x140493C0C (SepAdtAuditablePrivilege.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1408EF560 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140938740 (SeAuditingWithTokenForSubcategory.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtTokenRightAdjusted(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, char a6)
{
  unsigned int *v9; // r14
  unsigned int *v10; // rsi
  _QWORD **ClientToken; // rdi
  PACCESS_TOKEN PrimaryToken; // rdx
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rcx
  _QWORD **v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned int *Pool2; // rax
  char *v21; // rdx
  __int64 v22; // r9
  unsigned int *v23; // rax
  char *v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+38h] [rbp-C8h]
  struct _LIST_ENTRY *Flink; // [rsp+40h] [rbp-C0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD Src[4]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v39; // [rsp+80h] [rbp-80h]
  __int16 v40; // [rsp+82h] [rbp-7Eh]
  int v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+8Ch] [rbp-74h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+ACh] [rbp-54h]
  const int *v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+E8h] [rbp-18h]
  int v51; // [rsp+ECh] [rbp-14h]
  __int64 v52; // [rsp+F0h] [rbp-10h]
  int v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+10Ch] [rbp+Ch]
  PVOID v55; // [rsp+120h] [rbp+20h]
  int v56; // [rsp+128h] [rbp+28h]
  int v57; // [rsp+12Ch] [rbp+2Ch]
  struct _LIST_ENTRY *v58; // [rsp+130h] [rbp+30h]
  int v59; // [rsp+148h] [rbp+48h]
  int v60; // [rsp+14Ch] [rbp+4Ch]
  unsigned int *v61; // [rsp+160h] [rbp+60h]
  int v62; // [rsp+168h] [rbp+68h]
  int v63; // [rsp+16Ch] [rbp+6Ch]
  unsigned int *v64; // [rsp+180h] [rbp+80h]

  P = 0LL;
  v34 = a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  v10 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = (_QWORD **)SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(139LL, PrimaryToken)
    && (SepAdtAuditablePrivilege(a2, a3) || SepAdtAuditablePrivilege(a4, a5)) )
  {
    memset_0(Src, 0, 0x418uLL);
    Src[0] = 5;
    v39 = 139;
    Src[1] = 4703;
    v40 = 8;
    if ( !a6 )
      v40 = 16;
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( CurrentThreadProcess[1].LastRebalanceQpc )
    {
      Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
      if ( (int)PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64 *)&P, v14, v15) >= 0 )
      {
        v16 = SubjectContext.PrimaryToken;
        v17 = (_QWORD **)SubjectContext.PrimaryToken;
        if ( ClientToken )
        {
          v17 = ClientToken;
          v16 = ClientToken;
        }
        v18 = v16[3];
        v19 = *(_QWORD *)(v34 + 24);
        v35 = *v17[19];
        if ( a5 )
        {
          Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
          v9 = Pool2;
          if ( !Pool2 )
            goto LABEL_4;
          Pool2[1] = 1;
          v21 = (char *)Pool2 - a4;
          *Pool2 = a5;
          v22 = a5;
          do
          {
            *(_QWORD *)&v21[a4 + 8] = *(_QWORD *)a4;
            *(_DWORD *)&v21[a4 + 16] = *(_DWORD *)(a4 + 8);
            a4 += 12LL;
            --v22;
          }
          while ( v22 );
        }
        if ( a3 )
        {
          v23 = (unsigned int *)ExAllocatePool2(0x100uLL);
          v10 = v23;
          if ( !v23 )
            goto LABEL_4;
          v23[1] = 1;
          v24 = (char *)v23 - a2;
          *v23 = a3;
          v25 = a3;
          do
          {
            *(_QWORD *)&v24[a2 + 8] = *(_QWORD *)a2;
            *(_DWORD *)&v24[a2 + 16] = *(_DWORD *)(a2 + 8);
            a2 += 12LL;
            --v25;
          }
          while ( v25 );
        }
        v43 = v35;
        v41 = 4;
        v44 = 1;
        v26 = *(unsigned __int8 *)(v35 + 1);
        v45 = 32;
        v47 = 5;
        v48 = 8;
        v42 = 4 * v26 + 8;
        v46 = &SeSubsystemName;
        v27 = *(unsigned __int16 *)P + 16;
        v49 = v18;
        v54 = v27;
        v58 = Flink;
        v50 = 35;
        v51 = 8;
        v52 = v19;
        v53 = 2;
        v55 = P;
        v56 = 11;
        v57 = 8;
        if ( v9 )
        {
          v28 = *v9;
          v59 = 8;
          if ( v28 )
            v29 = 12 * v28 + 8;
          else
            v29 = 8;
          v60 = v29;
          v61 = v9;
        }
        if ( v10 )
        {
          v30 = *v10;
          v62 = 8;
          if ( v30 )
            v31 = 12 * v30 + 8;
          else
            v31 = 8;
          v63 = v31;
          v64 = v10;
        }
        Src[2] = 8;
        SepAdtLogAuditRecord(Src);
      }
    }
  }
LABEL_4:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  SeReleaseSubjectContext(&SubjectContext);
}
