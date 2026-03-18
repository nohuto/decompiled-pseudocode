/*
 * XREFs of SeOperationAuditAlarm @ 0x1408F0A50
 * Callers:
 *     ObpAuditObjectAccess @ 0x140989024 (ObpAuditObjectAccess.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140348E4C (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404709D0 (PsGetCurrentThreadProcess.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1404AC0F8 (SepCheckAndCopySelfRelativeSD.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1408EF560 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1408F0680 (ObNormalizeHandleValue.c)
 *     SepSecurityDescriptorStrictLength @ 0x1408F06B8 (SepSecurityDescriptorStrictLength.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408F1A40 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepQueryNameString @ 0x1408F2B48 (SepQueryNameString.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeOperationAuditAlarm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int16 *a4,
        unsigned int a5,
        int a6,
        PVOID P)
{
  PVOID v7; // rbx
  __int64 v11; // r8
  int v12; // esi
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // r13
  __int64 v15; // r8
  __int64 v16; // r9
  signed int AllocatedFullProcessImageName; // edi
  _QWORD *ClientToken; // r8
  _QWORD *PrimaryToken; // r9
  _QWORD **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned __int16 *v24; // rdx
  unsigned __int64 v25; // rax
  int v26; // r11d
  int v27; // r9d
  unsigned __int16 *v28; // rdx
  int v29; // r10d
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  _BYTE v34[4]; // [rsp+20h] [rbp-E0h] BYREF
  ULONG v35; // [rsp+24h] [rbp-DCh] BYREF
  PVOID v36; // [rsp+28h] [rbp-D8h] BYREF
  PVOID v37; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v38; // [rsp+38h] [rbp-C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD Src[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v41; // [rsp+68h] [rbp-98h]
  __int16 v42; // [rsp+70h] [rbp-90h]
  __int16 v43; // [rsp+72h] [rbp-8Eh]
  _DWORD v44[258]; // [rsp+78h] [rbp-88h]

  v7 = P;
  v36 = P;
  memset_0(Src, 0, 0x418uLL);
  v37 = 0LL;
  LOBYTE(v11) = 1;
  v38 = 0LL;
  v35 = 0;
  v34[0] = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v12 = (unsigned __int16)SepAdtClassifyObjectIntoSubCategory(a2, a4, v11, 0LL);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                    (__int64)CurrentThreadProcess,
                                    (__int64 *)&v37,
                                    v15,
                                    v16);
  if ( AllocatedFullProcessImageName < 0 )
  {
LABEL_16:
    SepAuditFailed(AllocatedFullProcessImageName);
    goto LABEL_12;
  }
  v41 = 0;
  Src[0] = 3;
  v43 = 8;
  v42 = v12;
  Src[1] = 4663;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v20 = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v20 = (_QWORD **)SubjectContext.ClientToken;
  v21 = *v20[19];
  v44[8 * v41] = 4;
  v44[8 * v41 + 1] = 4 * *(unsigned __int8 *)(v21 + 1) + 8;
  *(_QWORD *)&v44[8 * v41++ + 6] = v21;
  v44[8 * v41] = 1;
  v44[8 * v41 + 1] = 32;
  *(_QWORD *)&v44[8 * v41++ + 6] = &SeSubsystemName;
  v44[8 * v41] = 5;
  v44[8 * v41 + 1] = 8;
  if ( ClientToken )
    v22 = ClientToken[3];
  else
    v22 = PrimaryToken[3];
  *(_QWORD *)&v44[8 * v41++ + 2] = v22;
  v44[8 * v41] = 1;
  v44[8 * v41 + 1] = 32;
  *(_QWORD *)&v44[8 * v41++ + 6] = &SeSubsystemName;
  v44[8 * v41] = 1;
  v44[8 * v41 + 1] = *a4 + 16;
  *(_QWORD *)&v44[8 * v41 + 6] = a4;
  v23 = v41++;
  SepQueryNameString(a2, &v38);
  v24 = (unsigned __int16 *)v38;
  if ( v38 )
  {
    if ( (_WORD)v12 == 117 || (_WORD)v12 == 129 )
      v44[8 * v41] = 2;
    else
      v44[8 * v41] = 1;
    v44[8 * v41 + 1] = *v24 + 16;
    *(_QWORD *)&v44[8 * v41 + 6] = v24;
  }
  v44[8 * ++v41] = 11;
  v44[8 * v41 + 1] = 8;
  v25 = ObNormalizeHandleValue(a3);
  *(_QWORD *)&v44[8 * v41++ + 2] = v25;
  v44[8 * v41] = 7;
  v44[8 * v41 + 1] = v27 - 7;
  *(_QWORD *)&v44[8 * v41 + 2] = a5;
  *(_QWORD *)&v44[8 * v41++ + 4] = v23;
  v44[8 * v41] = 10;
  v44[8 * v41 + 1] = v27 - 7;
  *(_QWORD *)&v44[8 * v41 + 2] = a5;
  v28 = (unsigned __int16 *)v37;
  v44[8 * ++v41] = v27;
  v44[8 * v41 + 1] = v29;
  *(_QWORD *)&v44[8 * v41++ + 2] = Flink;
  v44[8 * v41] = 2;
  v44[8 * v41 + 1] = *v28 + 16;
  *(_QWORD *)&v44[8 * v41 + 6] = v28;
  v30 = ++v41;
  if ( (v12 == v26 || v12 - v26 == 12) && P )
  {
    v31 = SepCheckAndCopySelfRelativeSD((__int16 *)P, &v36, &v35, v34);
    v7 = v36;
    AllocatedFullProcessImageName = v31;
    if ( v31 < 0 )
      goto LABEL_10;
    v32 = (__int64)v36;
    v44[8 * v41] = 31;
    v33 = SepSecurityDescriptorStrictLength(v32);
    v44[8 * v41 + 1] = v33;
    *(_QWORD *)&v44[8 * v41 + 6] = v7;
    *(_QWORD *)&v44[8 * v41 + 2] = 32LL;
    *(_QWORD *)&v44[8 * v41 + 4] = 0LL;
    v30 = v41;
  }
  v41 = v30 + 1;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
LABEL_10:
  if ( v34[0] && v7 )
    ExFreePoolWithTag(v7, 0);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_16;
LABEL_12:
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  if ( v38 )
    ExFreePoolWithTag(v38, 0);
}
