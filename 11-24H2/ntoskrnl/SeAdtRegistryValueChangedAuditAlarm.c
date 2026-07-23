/*
 * XREFs of SeAdtRegistryValueChangedAuditAlarm @ 0x1407900F4
 * Callers:
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AdtpBuildRegistryValueString @ 0x14081125C (AdtpBuildRegistryValueString.c)
 *     AdtpBuildReplacementString @ 0x14081194C (AdtpBuildReplacementString.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140860D60 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x140861E80 (ObNormalizeHandleValue.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x14088DC88 (SeExamineGlobalSacl.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1408F2E10 (SeAuditingWithTokenForSubcategory.c)
 *     SepQueryNameString @ 0x140914194 (SepQueryNameString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SeAdtRegistryValueChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7,
        int a8)
{
  unsigned __int16 *v10; // rdi
  PACCESS_TOKEN ClientToken; // r15
  PACCESS_TOKEN PrimaryToken; // r13
  PACCESS_TOKEN v13; // rdx
  void *v14; // r8
  __int16 v15; // cx
  __int64 v16; // rax
  ACL *v17; // rdx
  __int64 v18; // rax
  ACL *v19; // rcx
  __int16 v20; // ax
  void *v21; // r8
  ACL *v22; // rdx
  __int64 v23; // rax
  int AllocatedFullProcessImageName; // eax
  unsigned int v25; // ebx
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD **v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // r10d
  int v38; // eax
  int v39; // r9d
  int v40; // r11d
  BOOLEAN GenerateAudit[8]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 *v43; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v44; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v45; // [rsp+70h] [rbp-98h] BYREF
  __int128 v46; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v47; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v48; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD Src[12]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v52; // [rsp+118h] [rbp+10h]
  int v53; // [rsp+120h] [rbp+18h]
  int v54; // [rsp+124h] [rbp+1Ch]
  const int *v55; // [rsp+138h] [rbp+30h]
  int v56; // [rsp+140h] [rbp+38h]
  int v57; // [rsp+144h] [rbp+3Ch]
  __int64 v58; // [rsp+148h] [rbp+40h]
  int v59; // [rsp+160h] [rbp+58h]
  int v60; // [rsp+164h] [rbp+5Ch]
  unsigned __int16 *v61; // [rsp+178h] [rbp+70h]
  int v62; // [rsp+180h] [rbp+78h]
  int v63; // [rsp+184h] [rbp+7Ch]
  unsigned __int16 *v64; // [rsp+198h] [rbp+90h]
  int v65; // [rsp+1A0h] [rbp+98h]
  int v66; // [rsp+1A4h] [rbp+9Ch]
  __int64 v67; // [rsp+1A8h] [rbp+A0h]
  int v68; // [rsp+1C0h] [rbp+B8h]
  int v69; // [rsp+1C4h] [rbp+BCh]
  __int128 *v70; // [rsp+1D8h] [rbp+D0h]
  int v71; // [rsp+1E0h] [rbp+D8h]
  int v72; // [rsp+1E4h] [rbp+DCh]
  UNICODE_STRING *v73; // [rsp+1F8h] [rbp+F0h]
  int v74; // [rsp+200h] [rbp+F8h]
  int v75; // [rsp+204h] [rbp+FCh]
  UNICODE_STRING *v76; // [rsp+218h] [rbp+110h]
  int v77; // [rsp+220h] [rbp+118h]
  int v78; // [rsp+224h] [rbp+11Ch]
  UNICODE_STRING *v79; // [rsp+238h] [rbp+130h]
  int v80; // [rsp+240h] [rbp+138h]
  int v81; // [rsp+244h] [rbp+13Ch]
  UNICODE_STRING *v82; // [rsp+258h] [rbp+150h]
  int v83; // [rsp+260h] [rbp+158h]
  int v84; // [rsp+264h] [rbp+15Ch]
  struct _LIST_ENTRY *v85; // [rsp+268h] [rbp+160h]
  int v86; // [rsp+280h] [rbp+178h]
  int v87; // [rsp+284h] [rbp+17Ch]
  PVOID v88; // [rsp+298h] [rbp+190h]
  char v89; // [rsp+508h] [rbp+400h] BYREF
  char v90; // [rsp+528h] [rbp+420h] BYREF
  char v91; // [rsp+548h] [rbp+440h] BYREF

  memset_0(Src, 0, 0x418uLL);
  v43 = 0LL;
  GenerateAudit[2] = 0;
  v10 = 0LL;
  GenerateAudit[3] = 0;
  v47 = 0LL;
  P = 0LL;
  v48 = 0LL;
  GenerateAudit[1] = 0;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  DestinationString = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v13 = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v13 = SubjectContext.ClientToken;
  GenerateAudit[0] = SeAuditingWithTokenForSubcategory(118LL, v13);
  if ( GenerateAudit[0] )
  {
    v14 = PrimaryToken;
    if ( ClientToken )
      v14 = ClientToken;
    v15 = *(_WORD *)(a2 + 2) & 0x8000;
    if ( (*(_WORD *)(a2 + 2) & 0x10) != 0 )
    {
      if ( v15 )
      {
        v16 = *(unsigned int *)(a2 + 12);
        if ( (_DWORD)v16 )
          v17 = (ACL *)(a2 + v16);
        else
          v17 = 0LL;
      }
      else
      {
        v17 = *(ACL **)(a2 + 24);
      }
      if ( !v15 )
      {
        v19 = *(ACL **)(a2 + 24);
        goto LABEL_18;
      }
      v18 = *(unsigned int *)(a2 + 12);
      if ( (_DWORD)v18 )
      {
        v19 = (ACL *)(a2 + v18);
        goto LABEL_18;
      }
    }
    else
    {
      v17 = 0LL;
    }
    v19 = 0LL;
LABEL_18:
    SeExamineSacl(v19, v17, v14, 2u, 1u, GenerateAudit, &GenerateAudit[1]);
    RtlInitUnicodeString(&DestinationString, L"Key");
    v20 = *(_WORD *)(a2 + 2);
    v21 = PrimaryToken;
    if ( ClientToken )
      v21 = ClientToken;
    if ( (v20 & 0x10) == 0 )
      goto LABEL_21;
    if ( v20 >= 0 )
    {
      v22 = *(ACL **)(a2 + 24);
    }
    else
    {
      v23 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v23 )
      {
LABEL_21:
        v22 = 0LL;
        goto LABEL_26;
      }
      v22 = (ACL *)(a2 + v23);
    }
LABEL_26:
    SeExamineGlobalSacl(&DestinationString, v22, v21, 2u, 1u, GenerateAudit, &GenerateAudit[1]);
    if ( !GenerateAudit[0] )
      goto LABEL_61;
    if ( a5 )
    {
      AllocatedFullProcessImageName = SepQueryNameString(a5, &v43);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_52;
      if ( v43 )
        v10 = v43;
    }
    v25 = 4096;
    if ( a8 )
    {
      v26 = a7[1];
      v27 = 4096LL;
      if ( v26 < 0x1000 )
        v27 = v26;
      AllocatedFullProcessImageName = AdtpBuildRegistryValueString(
                                        *a7,
                                        v27,
                                        *((_QWORD *)a7 + 1),
                                        &v47,
                                        &GenerateAudit[2]);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_52;
      v28 = *a7 + 1872;
      *(_DWORD *)&v44.Length = 1703936;
      v44.Buffer = (wchar_t *)&v89;
      AllocatedFullProcessImageName = AdtpBuildReplacementString(v28, &v44);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_52;
      if ( a8 == 2 )
      {
        RtlInitUnicodeString(&v48, L"-");
        RtlInitUnicodeString(&v45, L"-");
LABEL_43:
        LODWORD(v46) = 1703936;
        *((_QWORD *)&v46 + 1) = &v91;
        AllocatedFullProcessImageName = AdtpBuildReplacementString((unsigned int)(a8 + 1904), &v46);
        if ( AllocatedFullProcessImageName >= 0 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
          AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
          if ( AllocatedFullProcessImageName >= 0 )
          {
            Src[0] = 3;
            v32 = PrimaryToken;
            Src[4] = 524406;
            if ( ClientToken )
              v32 = ClientToken;
            Src[1] = 4657;
            Src[6] = 4;
            v54 = 32;
            v53 = 1;
            v33 = v32[19];
            v56 = 5;
            v57 = 8;
            Src[7] = 4 * *(unsigned __int8 *)(*(_QWORD *)v33 + 1LL) + 8;
            v34 = (_QWORD **)PrimaryToken;
            if ( ClientToken )
            {
              v34 = (_QWORD **)ClientToken;
              PrimaryToken = ClientToken;
            }
            v35 = *v34[19];
            v55 = &SeSubsystemName;
            v58 = *((_QWORD *)PrimaryToken + 3);
            v52 = v35;
            if ( v10 )
            {
              v36 = *v10;
              v59 = 1;
              v60 = v36 + 16;
              v61 = v10;
            }
            v63 = *a4 + 16;
            v62 = 1;
            v64 = a4;
            v65 = 11;
            v66 = 8;
            v67 = ObNormalizeHandleValue(a6);
            v88 = P;
            v69 = (unsigned __int16)v46 + 16;
            v70 = &v46;
            v68 = v37;
            v72 = v44.Length + 16;
            v73 = &v44;
            v71 = v37;
            v75 = v47.Length + 16;
            v76 = &v47;
            v74 = v37;
            v78 = v45.Length + 16;
            v79 = &v45;
            v77 = v37;
            v81 = v48.Length + 16;
            v82 = &v48;
            v38 = *(unsigned __int16 *)P + 16;
            v80 = v37;
            v87 = v38;
            v83 = v39;
            v84 = v40;
            v85 = Flink;
            v86 = 2;
            Src[2] = 13;
            SepAdtLogAuditRecord(Src);
            goto LABEL_53;
          }
        }
LABEL_52:
        SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_53:
        if ( GenerateAudit[2] )
          ExFreePoolWithTag(v47.Buffer, 0);
        if ( GenerateAudit[3] )
          ExFreePoolWithTag(v48.Buffer, 0);
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v43 )
          ExFreePoolWithTag(v43, 0);
        goto LABEL_61;
      }
    }
    else
    {
      RtlInitUnicodeString(&v47, L"-");
      RtlInitUnicodeString(&v44, L"-");
    }
    if ( a7[5] < 0x1000 )
      v25 = a7[5];
    AllocatedFullProcessImageName = AdtpBuildRegistryValueString(
                                      a7[4],
                                      v25,
                                      *((_QWORD *)a7 + 3),
                                      &v48,
                                      &GenerateAudit[3]);
    if ( AllocatedFullProcessImageName < 0 )
      goto LABEL_52;
    v29 = a7[4] + 1872;
    *(_DWORD *)&v45.Length = 1703936;
    v45.Buffer = (wchar_t *)&v90;
    AllocatedFullProcessImageName = AdtpBuildReplacementString(v29, &v45);
    if ( AllocatedFullProcessImageName < 0 )
      goto LABEL_52;
    goto LABEL_43;
  }
LABEL_61:
  SeReleaseSubjectContext(&SubjectContext);
}
