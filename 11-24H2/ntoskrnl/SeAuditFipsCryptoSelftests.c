/*
 * XREFs of SeAuditFipsCryptoSelftests @ 0x140790B40
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140860D60 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditFipsCryptoSelftests(char a1, unsigned int a2)
{
  __int64 v3; // rdi
  _QWORD **PrimaryToken; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // r14
  int AllocatedFullProcessImageName; // ebx
  int v8; // ecx
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  int Src; // [rsp+58h] [rbp-B0h] BYREF
  int v12; // [rsp+5Ch] [rbp-ACh]
  int v13; // [rsp+60h] [rbp-A8h]
  __int16 v14; // [rsp+68h] [rbp-A0h]
  __int16 v15; // [rsp+6Ah] [rbp-9Eh]
  int v16; // [rsp+70h] [rbp-98h]
  int v17; // [rsp+74h] [rbp-94h]
  __int64 v18; // [rsp+88h] [rbp-80h]
  int v19; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+94h] [rbp-74h]
  const int *v21; // [rsp+A8h] [rbp-60h]
  int v22; // [rsp+B0h] [rbp-58h]
  int v23; // [rsp+B4h] [rbp-54h]
  struct _LIST_ENTRY *v24; // [rsp+B8h] [rbp-50h]
  int v25; // [rsp+D0h] [rbp-38h]
  int v26; // [rsp+D4h] [rbp-34h]
  PVOID v27; // [rsp+E8h] [rbp-20h]
  int v28; // [rsp+F0h] [rbp-18h]
  int v29; // [rsp+F4h] [rbp-14h]
  __int64 v30; // [rsp+F8h] [rbp-10h]

  SubjectContext.ClientToken = 0LL;
  v3 = a2;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset_0(&Src, 0, 0x418uLL);
  P = 0LL;
  Src = 1;
  v14 = 102;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  v16 = 4;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  v19 = 1;
  v20 = 32;
  v18 = *PrimaryToken[19];
  v17 = 4 * *(unsigned __int8 *)(v18 + 1) + 8;
  v21 = &SeSubsystemName;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    v22 = 11;
    v23 = 8;
    v24 = Flink;
    v8 = *(unsigned __int16 *)P + 16;
    v25 = 2;
    v26 = v8;
    v27 = P;
    v13 = 4;
    if ( a1 )
    {
      v12 = 6417;
      v15 = 8;
    }
    else
    {
      v12 = 6418;
      v15 = 16;
      v28 = 10;
      v29 = 4;
      v30 = v3;
      v13 = 5;
    }
    SepAdtLogAuditRecord(&Src);
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
}
