/*
 * XREFs of SepAdtAuditObjectAccessWithContext @ 0x14084D2F0
 * Callers:
 *     SepAdtCloseObjectAuditAlarm @ 0x14084987C (SepAdtCloseObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x140861FFC (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088DEB0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     NtOpenObjectAuditAlarm @ 0x140911F00 (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     SepAuditingEnabledForSubcategory @ 0x14040F060 (SepAuditingEnabledForSubcategory.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     SepIsRemovableStorageDevice @ 0x140863404 (SepIsRemovableStorageDevice.c)
 */

char __fastcall SepAdtAuditObjectAccessWithContext(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        char a6,
        unsigned __int16 *a7)
{
  int v8; // ecx
  int v12; // edi
  bool v13; // bl
  POBJECT_TYPE *v15; // rax
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // r9
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r12
  _BYTE *ClientToken; // rdx
  __int16 v20; // r9
  unsigned int v21; // r8d
  __int16 v22; // r10
  int v23; // r11d
  unsigned __int16 *v24; // r12
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rbx
  SIZE_T v27; // rax
  int v28; // ecx
  unsigned __int16 *v29; // r12
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  SIZE_T v32; // rax
  int v33; // ecx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-48h] BYREF

  v8 = dword_140F048A8;
  *a7 = 119;
  v12 = (a3 != 0 ? 3 : 0) | 0x30;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  if ( !a4 )
    v12 = a3 != 0 ? 3 : 0;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  if ( !v8 )
    return 0;
  if ( (v8 & v12) == 0 && (v13 = 0, dword_140F04A68) )
  {
    if ( a5 )
    {
      p_SubjectContext = a5;
    }
    else
    {
      p_SubjectContext = &SubjectContext;
      SeCaptureSubjectContext(&SubjectContext);
    }
    ClientToken = p_SubjectContext->ClientToken;
    if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
    {
      if ( ClientToken[119] == 2 )
      {
        v20 = 0;
        v21 = 17;
        v22 = 0;
        while ( v21 < 0x1F )
        {
          v23 = (unsigned __int8)ClientToken[((unsigned __int64)v21 >> 1) + 88] >> (4 * (v21 & 1));
          if ( (v23 & 1) != 0 )
          {
            if ( (v12 & 2) != 0 )
              goto LABEL_41;
            ++v20;
          }
          if ( (v23 & 4) != 0 )
          {
            if ( (v12 & 0x20) != 0 )
              goto LABEL_41;
            ++v22;
          }
          ++v21;
        }
        if ( (v12 & 1) != 0 && v20 == 14 || (v12 & 0x10) != 0 && v22 == 14 )
LABEL_41:
          v13 = 1;
      }
    }
    else
    {
      SepAuditFailed(-1073741700);
    }
    if ( !a5 )
      SeReleaseSubjectContext(p_SubjectContext);
  }
  else
  {
    v13 = (v8 & v12) != 0;
  }
  if ( !v13 )
    return 0;
  if ( !a1 )
  {
    if ( !a6 )
    {
      if ( a2 && (PsGetCurrentServerSiloGlobals(), *a2 >= 8u) && *(_QWORD *)L"SAM_" == **((_QWORD **)a2 + 1) )
        v16 = 120;
      else
        v16 = 121;
      goto LABEL_12;
    }
    if ( !a2 )
      goto LABEL_15;
    v24 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
    v25 = (unsigned __int64)*a2 >> 1;
    PsGetCurrentServerSiloGlobals();
    v26 = 4LL;
    if ( v25 <= 4 )
      v26 = v25;
    v27 = RtlCompareMemory(v24, L"File", 2 * v26) >> 1;
    if ( v27 >= v26 )
      v28 = v25 - 4;
    else
      v28 = v24[v27] - aFile_1[v27];
    if ( v28 )
    {
      v29 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
      v30 = (unsigned __int64)*a2 >> 1;
      PsGetCurrentServerSiloGlobals();
      v31 = 3LL;
      if ( v30 <= 3 )
        v31 = v30;
      v32 = RtlCompareMemory(v29, L"Key", 2 * v31) >> 1;
      if ( v32 >= v31 )
        v33 = v30 - 3;
      else
        v33 = v29[v32] - aKey_0[v32];
      if ( !v33 )
        goto LABEL_11;
      goto LABEL_15;
    }
LABEL_43:
    v16 = 117;
    goto LABEL_12;
  }
  v15 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( v15 != CmKeyObjectType )
  {
    if ( v15 != IoFileObjectType )
    {
      if ( v15 == (POBJECT_TYPE *)IoDeviceObjectType
        && SepAuditingEnabledForSubcategory(129, a3, a4)
        && (unsigned __int8)SepIsRemovableStorageDevice(a1) == 1 )
      {
LABEL_18:
        v16 = v17;
        goto LABEL_12;
      }
LABEL_15:
      v16 = 119;
      goto LABEL_12;
    }
    if ( SepAuditingEnabledForSubcategory(129, a3, a4)
      && (unsigned __int8)SepIsRemovableStorageDevice(*(_QWORD *)(a1 + 8)) == 1 )
    {
      goto LABEL_18;
    }
    goto LABEL_43;
  }
LABEL_11:
  v16 = 118;
LABEL_12:
  *a7 = v16;
  return SepAdtAuditThisEventWithContext(v16, a3, a4, a5);
}
