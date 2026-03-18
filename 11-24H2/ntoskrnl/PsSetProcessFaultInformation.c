/*
 * XREFs of PsSetProcessFaultInformation @ 0x14093B330
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     EtwTelemetryCoverageReport @ 0x140457F60 (EtwTelemetryCoverageReport.c)
 *     PspLockProcessExclusive @ 0x14045AB10 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404CA964 (TelemetryCoverageStringHashInternal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409393D4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PsSetProcessTelemetryAppState @ 0x1409394B0 (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r9
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  char *v8; // rdx
  int v9; // ecx
  char v10; // al
  int v11; // [rsp+38h] [rbp+10h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 1532));
    v6 = *(_DWORD *)(a1 + 1532);
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1532), v6 | 4, v6);
    }
    while ( v7 != v6 );
    if ( (v6 & 4) == 0 )
    {
      if ( (unsigned int)dword_140E08604 < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140E08600 )
        {
          v8 = off_140E085F8;
          v9 = -2128831035;
          v10 = *off_140E085F8;
          if ( !*off_140E085F8 )
            goto LABEL_19;
          do
          {
            ++v8;
            v9 = v10 + 16777619 * v9;
            v10 = *v8;
          }
          while ( *v8 );
          dword_140E08600 = 1;
          if ( v9 )
LABEL_19:
            dword_140E08600 = v9;
        }
        EtwTelemetryCoverageReport(&off_140E085F8);
      }
      PspRecordCrashedProcessIntoBlackbox(a1);
      PsSetProcessTelemetryAppState((PRKPROCESS)a1, 4);
    }
  }
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140E0861C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E08618 )
        dword_140E08618 = TelemetryCoverageStringHashInternal(off_140E08610, &v11);
      EtwTelemetryCoverageReport(&off_140E08610);
    }
    PspLockProcessExclusive(a1, (__int64)KeGetCurrentThread());
    if ( (*(_BYTE *)(a1 + 1531) & 7) != 7 )
      *(_BYTE *)(a1 + 1531) ^= (*(_BYTE *)(a1 + 1531) ^ (*(_BYTE *)(a1 + 1531) + 1)) & 7;
    PspUnlockProcessExclusive(a1);
  }
  if ( (*a2 & 4) != 0 )
  {
    PspLockProcessExclusive(a1, (__int64)KeGetCurrentThread());
    if ( (*(_BYTE *)(a1 + 1531) & 0x38u) < 0x38 )
      *(_BYTE *)(a1 + 1531) ^= (*(_BYTE *)(a1 + 1531) ^ (*(_BYTE *)(a1 + 1531) + 8)) & 0x38;
    PspUnlockProcessExclusive(a1);
  }
  if ( (*a2 & 8) != 0 )
  {
    PspLockProcessExclusive(a1, (__int64)KeGetCurrentThread());
    *(_BYTE *)(a1 + 1531) |= 0x40u;
    PspUnlockProcessExclusive(a1);
  }
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(a1, KeGetCurrentThread(), a2, v4);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
  return 0LL;
}
