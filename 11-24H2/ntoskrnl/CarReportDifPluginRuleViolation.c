/*
 * XREFs of CarReportDifPluginRuleViolation @ 0x140615800
 * Callers:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     CarHandleEtwEvent @ 0x14061456C (CarHandleEtwEvent.c)
 *     CarCopyRuleViolationDetails @ 0x140614B40 (CarCopyRuleViolationDetails.c)
 *     CarCreateRuleViolationDetails @ 0x140614D20 (CarCreateRuleViolationDetails.c)
 *     CarDeleteRuleViolationDetails @ 0x140614DC0 (CarDeleteRuleViolationDetails.c)
 *     CarFindRuleClassConfigurationEntryByRuleClassId @ 0x140614F2C (CarFindRuleClassConfigurationEntryByRuleClassId.c)
 *     CarInitializeTelemetryData @ 0x140615160 (CarInitializeTelemetryData.c)
 *     CarQueryReportActionForTriage @ 0x1406153C0 (CarQueryReportActionForTriage.c)
 *     CarInitiateBugcheck @ 0x140618060 (CarInitiateBugcheck.c)
 *     CarWriteLivedump @ 0x1406182D4 (CarWriteLivedump.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfUtilGetSigningLevel @ 0x140B853C0 (VfUtilGetSigningLevel.c)
 */

__int64 __fastcall CarReportDifPluginRuleViolation(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  bool v6; // cc
  int v7; // r13d
  int RuleViolationDetails; // ebx
  int v9; // r15d
  unsigned int v10; // esi
  __int64 *RuleClassConfigurationEntryByRuleClassId; // rax
  unsigned __int16 **v12; // r14
  const CHAR *v13; // rbp
  __int64 Pool2; // rax
  wchar_t *v15; // rdi
  unsigned __int16 **v16; // r14
  __int64 v18[9]; // [rsp+40h] [rbp-48h] BYREF
  int v19; // [rsp+A0h] [rbp+18h]
  unsigned __int16 **v20; // [rsp+A8h] [rbp+20h] BYREF

  v18[0] = 0LL;
  v20 = 0LL;
  v6 = *(_DWORD *)(a4 + 76) <= 2000000;
  v7 = a1;
  v19 = *(_DWORD *)(a4 + 72);
  *(_QWORD *)(a4 + 48) = a3;
  if ( v6 )
  {
    v9 = *(_DWORD *)(a4 + 80);
    if ( v9 )
    {
      v10 = a2;
    }
    else
    {
      v10 = a2 | (((_DWORD)a1 + 1) << 16);
      RuleClassConfigurationEntryByRuleClassId = CarFindRuleClassConfigurationEntryByRuleClassId(a1, a1);
      if ( !RuleClassConfigurationEntryByRuleClassId )
      {
        RuleViolationDetails = -1073741275;
        goto LABEL_44;
      }
      v9 = *(_DWORD *)RuleClassConfigurationEntryByRuleClassId;
    }
    if ( KeGetCurrentIrql() <= 2u )
    {
      RuleViolationDetails = CarCreateRuleViolationDetails((PVOID *)&v20);
      if ( RuleViolationDetails >= 0 )
      {
        v12 = v20;
        RuleViolationDetails = CarCopyRuleViolationDetails((__int64)v20, a4);
        if ( RuleViolationDetails >= 0 )
        {
          if ( !v12 || (v13 = (const CHAR *)v12[3]) == 0LL )
          {
            switch ( v9 )
            {
              case 196:
                v13 = "DRIVER VERIFIER DETECTED VIOLATION";
                break;
              case 201:
                v13 = "DRIVER VERIFIER IOMANAGER VIOLATION";
                break;
              case 230:
                v13 = "DRIVER VERIFIER DMA VIOLATION";
                break;
              default:
                v13 = "UNKNOWN VIOLATION REPORTED VIA DRIVER VERIFIER";
                break;
            }
          }
          RuleViolationDetails = CarQueryReportActionForTriage(v9, v10, v18);
          if ( RuleViolationDetails >= 0 )
          {
            Pool2 = ExAllocatePool2(0x40uLL, 0x550uLL, 0x4E726143u);
            v15 = (wchar_t *)Pool2;
            if ( Pool2 )
            {
              RuleViolationDetails = CarInitializeTelemetryData(Pool2, v9, v10, v12, (__int64)v13);
              if ( RuleViolationDetails >= 0 )
              {
                RuleViolationDetails = CarHandleEtwEvent((__int64)v15, v10, v13, KeGetCurrentIrql(), v7, a3, v19);
              }
              else
              {
                ExFreePoolWithTag(v15, 0x4E726143u);
                v15 = 0LL;
              }
            }
            else
            {
              RuleViolationDetails = -1073741801;
            }
            v16 = v20;
            if ( _InterlockedCompareExchange(&CarIsViolationSnapshotTaken, 1, 0) != 1 )
            {
              dword_140F022A8 = v9;
              dword_140F022AC = v10;
              if ( v20 )
              {
                qword_140F022B0 = (__int64)*v20;
                qword_140F022B8 = (__int64)v20[1];
                qword_140F022C0 = (__int64)v20[2];
              }
              else
              {
                qword_140F022B0 = 0LL;
                qword_140F022B8 = 0LL;
                qword_140F022C0 = 0LL;
              }
              RtlStringCchCopyW(&pszDest, 0x20uLL, v15 + 2);
            }
            switch ( LODWORD(v18[0]) )
            {
              case 2:
                RuleViolationDetails = CarWriteLivedump(
                                         (_DWORD)v15,
                                         v10,
                                         (unsigned int)*v16,
                                         (unsigned int)v16[1],
                                         (__int64)v16[2]);
                if ( RuleViolationDetails != -1073738736 )
                  v15 = 0LL;
                break;
              case 3:
                if ( a3 )
                {
                  if ( (((unsigned __int8)VfUtilGetSigningLevel(a3) - 8) & 0xFB) != 0 )
                    CarInitiateBugcheck(v9, v10);
                }
                else
                {
                  RuleViolationDetails = -1073741811;
                }
                break;
              case 4:
                CarInitiateBugcheck(v9, v10);
            }
            _InterlockedCompareExchange(&CarIsViolationSnapshotTaken, 0, 1);
            if ( v15 )
              ExFreePoolWithTag(v15, 0x4E726143u);
          }
        }
      }
    }
    else
    {
      RuleViolationDetails = -1073741637;
    }
  }
  else
  {
    RuleViolationDetails = -1073741582;
  }
LABEL_44:
  CarDeleteRuleViolationDetails((PVOID *)&v20);
  return (unsigned int)RuleViolationDetails;
}
