/*
 * XREFs of SepAdtAuditObjectAccessWithContext @ 0x140854E70
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14092DA70 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14092E770 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409847B8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140985C34 (SepAdtCloseObjectAuditAlarm.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     SepAuditingEnabledForSubcategory @ 0x14041E1D0 (SepAuditingEnabledForSubcategory.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     SepAuditFailed @ 0x140854DA0 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x140856980 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SepIsRemovableStorageDevice @ 0x140985B94 (SepIsRemovableStorageDevice.c)
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
  unsigned __int16 *v17; // r12
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  SIZE_T v20; // rax
  int v21; // ecx
  unsigned __int16 *v22; // r12
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  SIZE_T v25; // rax
  unsigned __int16 v27; // r9
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r12
  _BYTE *ClientToken; // rdx
  __int16 v30; // r9
  unsigned int v31; // r8d
  __int16 v32; // r10
  int v33; // r11d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-48h] BYREF

  v8 = dword_140F04228;
  *a7 = 119;
  v12 = (a3 != 0 ? 3 : 0) | 0x30;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  if ( !a4 )
    v12 = a3 != 0 ? 3 : 0;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  if ( !v8 )
    return 0;
  if ( (v8 & v12) == 0 && (v13 = 0, dword_140F043E8) )
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
        v30 = 0;
        v31 = 17;
        v32 = 0;
        while ( v31 < 0x1F )
        {
          v33 = (unsigned __int8)ClientToken[((unsigned __int64)v31 >> 1) + 88] >> (4 * (v31 & 1));
          if ( (v33 & 1) != 0 )
          {
            if ( (v12 & 2) != 0 )
              goto LABEL_61;
            ++v30;
          }
          if ( (v33 & 4) != 0 )
          {
            if ( (v12 & 0x20) != 0 )
              goto LABEL_61;
            ++v32;
          }
          ++v31;
        }
        if ( (v12 & 1) != 0 && v30 == 14 || (v12 & 0x10) != 0 && v32 == 14 )
LABEL_61:
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
  if ( a1 )
  {
    v15 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
    if ( v15 != CmKeyObjectType )
    {
      if ( v15 != IoFileObjectType )
      {
        if ( v15 == (POBJECT_TYPE *)IoDeviceObjectType
          && SepAuditingEnabledForSubcategory(129, a3, a4)
          && (unsigned __int8)SepIsRemovableStorageDevice(a1) == 1 )
        {
LABEL_38:
          v16 = v27;
          goto LABEL_27;
        }
        goto LABEL_13;
      }
      if ( SepAuditingEnabledForSubcategory(129, a3, a4)
        && (unsigned __int8)SepIsRemovableStorageDevice(*(_QWORD *)(a1 + 8)) == 1 )
      {
        goto LABEL_38;
      }
LABEL_31:
      v16 = 117;
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  if ( !a6 )
  {
    if ( a2 && (PsGetCurrentServerSiloGlobals(), *a2 >= 8u) && *(_QWORD *)L"SAM_" == **((_QWORD **)a2 + 1) )
      v16 = 120;
    else
      v16 = 121;
    goto LABEL_27;
  }
  if ( a2 )
  {
    v17 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
    v18 = (unsigned __int64)*a2 >> 1;
    PsGetCurrentServerSiloGlobals();
    v19 = 4LL;
    if ( v18 <= 4 )
      v19 = v18;
    v20 = RtlCompareMemory(v17, L"File", 2 * v19) >> 1;
    if ( v20 >= v19 )
      v21 = v18 - 4;
    else
      v21 = v17[v20] - aFile_1[v20];
    if ( !v21 )
      goto LABEL_31;
    v22 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
    v23 = (unsigned __int64)*a2 >> 1;
    PsGetCurrentServerSiloGlobals();
    v24 = 3LL;
    if ( v23 <= 3 )
      v24 = v23;
    v25 = RtlCompareMemory(v22, L"Key", 2 * v24) >> 1;
    if ( !(v25 >= v24 ? (_DWORD)v23 - 3 : v22[v25] - aKey_0[v25]) )
    {
LABEL_26:
      v16 = 118;
      goto LABEL_27;
    }
  }
LABEL_13:
  v16 = 119;
LABEL_27:
  *a7 = v16;
  return SepAdtAuditThisEventWithContext(v16, a3, a4, a5);
}
