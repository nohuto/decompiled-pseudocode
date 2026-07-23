/*
 * XREFs of ViErrorFinishReport @ 0x140B9567C
 * Callers:
 *     ViErrorReport1 @ 0x140610B34 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140610BB8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140610C4C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140610CF0 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140B85FA0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140B86270 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140B9422C (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140B9435C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140B954C0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B95558 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140BA30B0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140BA3260 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140BA33B0 (VerifierNtWriteFile.c)
 * Callees:
 *     DbgPrompt @ 0x1405E4C60 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14060E85C (VfUtilDbgPrint.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     VfErrorStoreTriageInformation @ 0x140B955E0 (VfErrorStoreTriageInformation.c)
 *     ViErrorIsBreakDisabled @ 0x140B957A4 (ViErrorIsBreakDisabled.c)
 */

__int64 __fastcall ViErrorFinishReport(int a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR v4; // rdi
  __int64 result; // rax
  unsigned int v9; // ebx
  int v10; // eax
  CHAR Response[2]; // [rsp+40h] [rbp-18h] BYREF

  v4 = a1;
  VfUtilDbgPrint("************************************************************\n\n");
  result = ViErrorIsBreakDisabled((unsigned int)v4);
  v9 = 0;
  if ( !(_DWORD)result )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      v10 = VfErrorStoreTriageInformation(201LL, v4, a2, a3, a4);
      __debugbreak();
      if ( v10 )
        _InterlockedExchange(&VfErrorBugcheckDataReady, 0);
      while ( 1 )
      {
        DbgPrompt("How would you like to proceed: Resume execution, Disable break, or Bugcheck (rdb)? ", Response, 2u);
        result = *(unsigned __int16 *)Response;
        if ( Response[0] == 66 )
          break;
        switch ( Response[0] )
        {
          case 'D':
            goto LABEL_13;
          case 'R':
            return result;
          case 'b':
            goto LABEL_17;
          case 'd':
LABEL_13:
            while ( v9 < 0x3F )
            {
              result = 2LL * v9;
              if ( *((_DWORD *)&ViErrorDescriptions + 4 * v9) == (_DWORD)v4 )
              {
                _InterlockedOr((volatile signed __int32 *)&ViErrorDescriptions + 4 * v9 + 1, 1u);
                return result;
              }
              ++v9;
            }
            return result;
          case 'r':
            return result;
        }
      }
    }
LABEL_17:
    result = (unsigned int)MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return CarReportRuleViolationFromNt(201, v4, a2, a3, a4, 4u, a2);
  }
  return result;
}
