/*
 * XREFs of SeAuditProcessCreation @ 0x1408FD624
 * Callers:
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsQueryProcessCommandLine @ 0x1402E1810 (PsQueryProcessCommandLine.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140860D60 (PsGetAllocatedFullProcessImageNameEx.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditProcessCreation(PRKPROCESS PROCESS, UNICODE_STRING *a2)
{
  char v3; // si
  UNICODE_STRING *Pool2; // rdi
  unsigned int v5; // r13d
  void *v6; // rbx
  signed int AllocatedFullProcessImageName; // r14d
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rsi
  int v10; // ecx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  _BYTE *v14; // r14
  __int64 v15; // rdx
  bool v16; // r8
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  void *v21; // rbx
  unsigned int v22[3]; // [rsp+34h] [rbp-CCh] BYREF
  PVOID v23; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING *v26; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *Flink; // [rsp+68h] [rbp-98h]
  void *v28; // [rsp+70h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-88h] BYREF
  _DWORD Src[12]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-30h]
  int v32; // [rsp+D8h] [rbp-28h]
  int v33; // [rsp+DCh] [rbp-24h]
  const int *v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]
  __int64 v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+118h] [rbp+18h]
  int v39; // [rsp+11Ch] [rbp+1Ch]
  struct _LIST_ENTRY *v40; // [rsp+120h] [rbp+20h]
  int v41; // [rsp+138h] [rbp+38h]
  int v42; // [rsp+13Ch] [rbp+3Ch]
  PVOID v43; // [rsp+150h] [rbp+50h]
  int v44; // [rsp+158h] [rbp+58h]
  int v45; // [rsp+15Ch] [rbp+5Ch]
  unsigned __int64 v46; // [rsp+160h] [rbp+60h]
  int v47; // [rsp+178h] [rbp+78h]
  int v48; // [rsp+17Ch] [rbp+7Ch]
  void *v49; // [rsp+180h] [rbp+80h]
  int v50; // [rsp+198h] [rbp+98h]
  int v51; // [rsp+19Ch] [rbp+9Ch]
  UNICODE_STRING *v52; // [rsp+1B0h] [rbp+B0h]
  int v53; // [rsp+1B8h] [rbp+B8h]
  int v54; // [rsp+1BCh] [rbp+BCh]
  __int64 v55; // [rsp+1C0h] [rbp+C0h]
  int v56; // [rsp+1D8h] [rbp+D8h]
  int v57; // [rsp+1DCh] [rbp+DCh]
  __int64 v58; // [rsp+1E0h] [rbp+E0h]
  PVOID v59; // [rsp+1F0h] [rbp+F0h]
  int v60; // [rsp+1F8h] [rbp+F8h]
  int v61; // [rsp+1FCh] [rbp+FCh]
  _BYTE *v62; // [rsp+210h] [rbp+110h]
  _BYTE DestinationSid[80]; // [rsp+4C0h] [rbp+3C0h] BYREF

  v26 = a2;
  v3 = 0;
  memset(v22, 0, sizeof(v22));
  Pool2 = 0LL;
  v5 = 0;
  v23 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  DestinationString = 0LL;
  if ( !PROCESS[1].LastRebalanceQpc )
    return;
  v6 = *(void **)&PROCESS[1].StackCount.Value;
  Flink = PROCESS[1].Header.WaitListHead.Flink;
  v28 = v6;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)PROCESS, (__int64 *)&v23);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_12;
  if ( PsLookupProcessByProcessId(v6, (PEPROCESS *)&v22[1]) >= 0 )
  {
    v21 = *(void **)&v22[1];
    if ( *(_QWORD *)(*(_QWORD *)&v22[1] + 848LL) )
      PsGetAllocatedFullProcessImageNameEx(*(__int64 *)&v22[1], (__int64 *)&P);
    else
      v5 = 1844;
    ObfDereferenceObjectWithTag(v21, 0x746C6644u);
  }
  else
  {
    v5 = 1845;
  }
  v8 = PsReferencePrimaryTokenWithTag((__int64)PROCESS, 0x746C6644u);
  v9 = v8;
  if ( !v8 )
  {
    AllocatedFullProcessImageName = -1073741700;
    goto LABEL_11;
  }
  v10 = *(_DWORD *)(*(_QWORD *)(v8 + 216) + 40LL);
  if ( (v10 & 4) != 0 )
    v11 = 1938LL;
  else
    v11 = (v10 & 2 | 0xF20uLL) >> 1;
  v12 = *(unsigned int *)(v8 + 208);
  v13 = *(_QWORD *)(v9 + 24);
  *(_QWORD *)&v22[1] = v13;
  if ( (unsigned int)v12 >= *(_DWORD *)(v9 + 124) )
  {
    v14 = SeNullSid;
    goto LABEL_20;
  }
  AllocatedFullProcessImageName = RtlCopySid(0x44u, DestinationSid, *(PSID *)(*(_QWORD *)(v9 + 152) + 16 * v12));
  if ( AllocatedFullProcessImageName >= 0 )
  {
    v14 = DestinationSid;
LABEL_20:
    ObfDereferenceObject((PVOID)v9);
    if ( SepRmAuditProcessCommandLine )
    {
      if ( v26 )
      {
        Pool2 = v26;
LABEL_23:
        v3 = 0;
LABEL_24:
        SeCaptureSubjectContext(&SubjectContext);
        memset_0(Src, 0, 0x418uLL);
        Src[0] = 5;
        Src[4] = 524422;
        Src[1] = 4688;
        v15 = **((_QWORD **)SubjectContext.PrimaryToken + 19);
        v16 = *((_QWORD *)SubjectContext.PrimaryToken + 3) != __PAIR64__(v22[2], v13);
        v17 = *(unsigned __int8 *)(v15 + 1);
        v37 = *((_QWORD *)SubjectContext.PrimaryToken + 3);
        v40 = Flink;
        v31 = v15;
        Src[7] = 4 * v17 + 8;
        Src[6] = 4;
        v34 = &SeSubsystemName;
        v43 = v23;
        v32 = 1;
        v33 = 32;
        v18 = *(unsigned __int16 *)v23 + 16;
        v35 = 5;
        v42 = v18;
        v49 = v28;
        v19 = Pool2->Length + 16;
        v36 = 8;
        v38 = 11;
        v39 = 8;
        v41 = 2;
        v44 = 21;
        v45 = 4;
        v46 = v11;
        v47 = 11;
        v48 = 8;
        v50 = 34;
        v51 = v19;
        v52 = Pool2;
        if ( v16 )
        {
          v53 = 35;
          v54 = 8;
          v55 = v13;
        }
        else
        {
          v53 = 6;
        }
        if ( v5 )
        {
          v58 = v5;
          v56 = 21;
          v57 = 4;
        }
        else
        {
          v56 = 2;
          v59 = P;
          v57 = *(unsigned __int16 *)P + 16;
        }
        v20 = (unsigned __int8)v14[1];
        v60 = 4;
        v62 = v14;
        Src[2] = 11;
        v61 = 4 * v20 + 8;
        SepAdtLogAuditRecord(Src);
        SeReleaseSubjectContext(&SubjectContext);
        goto LABEL_13;
      }
      if ( (unsigned int)PsQueryProcessCommandLine(PROCESS, 0LL, 0, 0, v22) == -1073741820 )
      {
        Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL, v22[0], 0x4C436553u);
        if ( Pool2 )
        {
          if ( (int)PsQueryProcessCommandLine(PROCESS, (__int64)Pool2, v22[0], 0, v22) >= 0 )
          {
            v3 = 1;
            goto LABEL_24;
          }
          ExFreePoolWithTag(Pool2, 0);
        }
      }
    }
    RtlInitUnicodeString(&DestinationString, &word_140AEDAC0);
    Pool2 = &DestinationString;
    goto LABEL_23;
  }
  ObfDereferenceObject((PVOID)v9);
LABEL_11:
  v3 = 0;
LABEL_12:
  SepAuditFailed(AllocatedFullProcessImageName);
LABEL_13:
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v3 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
}
