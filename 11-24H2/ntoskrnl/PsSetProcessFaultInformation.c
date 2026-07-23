/*
 * XREFs of PsSetProcessFaultInformation @ 0x140A55880
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404C3E84 (TelemetryCoverageStringHashInternal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1408F3AA4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PsSetProcessTelemetryAppState @ 0x1408F3B80 (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(struct _EX_RUNDOWN_REF *PROCESS, char *a2)
{
  char *v2; // rsi
  signed __int32 Ptr_high; // eax
  signed __int32 v6; // ett
  int v7; // ecx
  char v8; // al
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    _m_prefetchw((char *)&PROCESS[191].Ptr + 4);
    Ptr_high = HIDWORD(PROCESS[191].Ptr);
    do
    {
      v6 = Ptr_high;
      Ptr_high = _InterlockedCompareExchange((volatile signed __int32 *)&PROCESS[191].Ptr + 1, Ptr_high | 4, Ptr_high);
    }
    while ( v6 != Ptr_high );
    if ( (Ptr_high & 4) == 0 )
    {
      if ( (unsigned int)dword_140E0868C < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140E08688 )
        {
          a2 = off_140E08680;
          v7 = -2128831035;
          v8 = *off_140E08680;
          if ( !*off_140E08680 )
            goto LABEL_19;
          do
          {
            ++a2;
            v7 = v8 + 16777619 * v7;
            v8 = *a2;
          }
          while ( *a2 );
          dword_140E08688 = 1;
          if ( v7 )
LABEL_19:
            dword_140E08688 = v7;
        }
        EtwTelemetryCoverageReport((__int64)&off_140E08680, (__int64)a2);
      }
      PspRecordCrashedProcessIntoBlackbox((__int64)PROCESS);
      PsSetProcessTelemetryAppState(PROCESS, 4);
    }
  }
  if ( (*(_DWORD *)v2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140E08674 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E08670 )
        dword_140E08670 = TelemetryCoverageStringHashInternal(off_140E08668, &v9);
      EtwTelemetryCoverageReport((__int64)&off_140E08668, (__int64)a2);
    }
    PspLockProcessExclusive((__int64)PROCESS, (__int64)KeGetCurrentThread());
    if ( (BYTE3(PROCESS[191].Ptr) & 7) != 7 )
      BYTE3(PROCESS[191].Ptr) ^= (BYTE3(PROCESS[191].Ptr) ^ (BYTE3(PROCESS[191].Ptr) + 1)) & 7;
    PspUnlockProcessExclusive((__int64)PROCESS);
  }
  if ( (*(_DWORD *)v2 & 4) != 0 )
  {
    PspLockProcessExclusive((__int64)PROCESS, (__int64)KeGetCurrentThread());
    if ( (BYTE3(PROCESS[191].Ptr) & 0x38u) < 0x38 )
      BYTE3(PROCESS[191].Ptr) ^= (BYTE3(PROCESS[191].Ptr) ^ (BYTE3(PROCESS[191].Ptr) + 8)) & 0x38;
    PspUnlockProcessExclusive((__int64)PROCESS);
  }
  if ( (*(_DWORD *)v2 & 8) != 0 )
  {
    PspLockProcessExclusive((__int64)PROCESS, (__int64)KeGetCurrentThread());
    BYTE3(PROCESS[191].Ptr) |= 0x40u;
    PspUnlockProcessExclusive((__int64)PROCESS);
  }
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(PROCESS, KeGetCurrentThread());
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
  return 0LL;
}
