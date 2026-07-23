/*
 * XREFs of CmpReportAuditVirtualizationEvent @ 0x1407DDDB8
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x140A154DC (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     SeReportSecurityEventWithSubCategory @ 0x1403C25D0 (SeReportSecurityEventWithSubCategory.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     SeSetAuditParameter @ 0x14043E0C0 (SeSetAuditParameter.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140860D60 (PsGetAllocatedFullProcessImageNameEx.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     CmRealKCBToVirtualPath @ 0x1408E1EE8 (CmRealKCBToVirtualPath.c)
 *     CmpEffectiveTokenForSubject @ 0x14099A770 (CmpEffectiveTokenForSubject.c)
 *     CmVirtualKCBToRealPath @ 0x140A57538 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpReportAuditVirtualizationEvent(__int64 a1, __int64 a2)
{
  UNICODE_STRING *p_UnicodeString; // rsi
  UNICODE_STRING *v5; // rdi
  NTSTATUS AllocatedFullProcessImageName; // ebx
  ULONG v7; // r12d
  ULONG v8; // r8d
  ULONG v9; // r14d
  _KPROCESS *CurrentThreadProcess; // rax
  ULONG v11; // r8d
  NTSTATUS v12; // eax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  __int64 Data; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v17; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _SE_ADT_PARAMETER_ARRAY AuditParameters; // [rsp+70h] [rbp-90h] BYREF

  memset_0(&AuditParameters, 0, sizeof(AuditParameters));
  P = 0LL;
  DestinationString = 0LL;
  p_UnicodeString = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Security");
  AuditParameters.AuditId = 5039;
  AuditParameters.Type = 8;
  AuditParameters.CategoryId = 3;
  AuditParameters.ParameterCount = 0;
  Data = *(_QWORD *)(CmpEffectiveTokenForSubject(a2, 0LL) + 24);
  AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeLogonId, 0, &Data);
  v7 = ++AuditParameters.ParameterCount;
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_18;
  if ( CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
  {
    v5 = (UNICODE_STRING *)CmpConstructName(a1);
    if ( !v5 )
    {
LABEL_5:
      AllocatedFullProcessImageName = -1073741670;
      goto LABEL_18;
    }
    AllocatedFullProcessImageName = CmVirtualKCBToRealPath(a1, &UnicodeString);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      p_UnicodeString = &UnicodeString;
LABEL_11:
      AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v7, p_UnicodeString);
      v8 = ++AuditParameters.ParameterCount;
      if ( AllocatedFullProcessImageName >= 0 )
      {
        AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v8, v5);
        v9 = ++AuditParameters.ParameterCount;
        if ( AllocatedFullProcessImageName >= 0 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
          if ( AllocatedFullProcessImageName >= 0 )
          {
            AllocatedFullProcessImageName = SeSetAuditParameter(
                                              &AuditParameters,
                                              SeAdtParmTypePtr,
                                              v9,
                                              *(PVOID *)(a2 + 24));
            v11 = ++AuditParameters.ParameterCount;
            if ( AllocatedFullProcessImageName >= 0 )
            {
              v12 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeFileSpec, v11, P);
              ++AuditParameters.ParameterCount;
              AllocatedFullProcessImageName = v12;
              if ( v12 >= 0 )
              {
                AllocatedFullProcessImageName = SeReportSecurityEventWithSubCategory(
                                                  0,
                                                  &DestinationString,
                                                  0LL,
                                                  &AuditParameters,
                                                  0x76u);
                if ( AllocatedFullProcessImageName >= 0 )
                  AllocatedFullProcessImageName = 0;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    p_UnicodeString = (UNICODE_STRING *)CmpConstructName(a1);
    if ( !p_UnicodeString )
      goto LABEL_5;
    RtlInitUnicodeString(&v17, 0LL);
    AllocatedFullProcessImageName = CmRealKCBToVirtualPath(a1, &v17, a2, &UnicodeString);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      v5 = &UnicodeString;
      goto LABEL_11;
    }
  }
LABEL_18:
  if ( P )
    ExFreePoolWithTag(P, 0x61506553u);
  if ( p_UnicodeString == &UnicodeString )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    CmpFreeTransientPoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  if ( v5 == &UnicodeString )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( v5 )
  {
    CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
  }
  return (unsigned int)AllocatedFullProcessImageName;
}
