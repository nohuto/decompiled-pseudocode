/*
 * XREFs of SepAdtTokenRightAdjusted @ 0x140936BA8
 * Callers:
 *     SepAdjustPrivileges @ 0x1409353B0 (SepAdjustPrivileges.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1403D67CC (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404725F0 (PsGetCurrentThreadProcess.c)
 *     SepAdtAuditablePrivilege @ 0x140497034 (SepAdtAuditablePrivilege.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140936F00 (SeAuditingWithTokenForSubcategory.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140984CD0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtTokenRightAdjusted(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, char a6)
{
  unsigned int *v9; // r14
  unsigned int *v10; // rsi
  _QWORD **ClientToken; // rdi
  PACCESS_TOKEN PrimaryToken; // rdx
  _KPROCESS *CurrentThreadProcess; // rax
  _QWORD *v14; // rcx
  _QWORD **v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdi
  int v18; // eax
  int v19; // eax
  unsigned int *Pool2; // rax
  char *v21; // rdx
  __int64 v22; // r9
  unsigned int *v23; // rax
  char *v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  struct _LIST_ENTRY *Flink; // [rsp+40h] [rbp-C0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD Src[4]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v37; // [rsp+80h] [rbp-80h]
  __int16 v38; // [rsp+82h] [rbp-7Eh]
  int v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
  const int *v44; // [rsp+C0h] [rbp-40h]
  int v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+CCh] [rbp-34h]
  __int64 v47; // [rsp+D0h] [rbp-30h]
  int v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]
  __int64 v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]
  PVOID v53; // [rsp+120h] [rbp+20h]
  int v54; // [rsp+128h] [rbp+28h]
  int v55; // [rsp+12Ch] [rbp+2Ch]
  struct _LIST_ENTRY *v56; // [rsp+130h] [rbp+30h]
  int v57; // [rsp+148h] [rbp+48h]
  int v58; // [rsp+14Ch] [rbp+4Ch]
  unsigned int *v59; // [rsp+160h] [rbp+60h]
  int v60; // [rsp+168h] [rbp+68h]
  int v61; // [rsp+16Ch] [rbp+6Ch]
  unsigned int *v62; // [rsp+180h] [rbp+80h]

  P = 0LL;
  v32 = a1;
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
    v37 = 139;
    Src[1] = 4703;
    v38 = 8;
    if ( !a6 )
      v38 = 16;
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( CurrentThreadProcess[1].LastRebalanceQpc )
    {
      Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
      if ( (int)PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P) >= 0 )
      {
        v14 = SubjectContext.PrimaryToken;
        v15 = (_QWORD **)SubjectContext.PrimaryToken;
        if ( ClientToken )
        {
          v15 = ClientToken;
          v14 = ClientToken;
        }
        v16 = v14[3];
        v17 = *(_QWORD *)(v32 + 24);
        v33 = *v15[19];
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
        v41 = v33;
        v39 = 4;
        v42 = 1;
        v18 = *(unsigned __int8 *)(v33 + 1);
        v43 = 32;
        v45 = 5;
        v46 = 8;
        v40 = 4 * v18 + 8;
        v44 = &SeSubsystemName;
        v19 = *(unsigned __int16 *)P + 16;
        v47 = v16;
        v52 = v19;
        v56 = Flink;
        v48 = 35;
        v49 = 8;
        v50 = v17;
        v51 = 2;
        v53 = P;
        v54 = 11;
        v55 = 8;
        if ( v9 )
        {
          v26 = *v9;
          v57 = 8;
          if ( v26 )
            v27 = 12 * v26 + 8;
          else
            v27 = 8;
          v58 = v27;
          v59 = v9;
        }
        if ( v10 )
        {
          v28 = *v10;
          v60 = 8;
          if ( v28 )
            v29 = 12 * v28 + 8;
          else
            v29 = 8;
          v61 = v29;
          v62 = v10;
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
