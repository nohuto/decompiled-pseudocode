/*
 * XREFs of PsSetProcessFaultInformation @ 0x140A5B7E0
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     EtwTelemetryCoverageReport @ 0x1404575C0 (EtwTelemetryCoverageReport.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404CAC28 (TelemetryCoverageStringHashInternal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x14091FBD4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PsSetProcessTelemetryAppState @ 0x14091FCB0 (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *v4; // rbx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  struct _KTHREAD *v8; // rbx
  char *v9; // rdx
  int v10; // ecx
  char v11; // al
  struct _KTHREAD *CurrentThread; // rbx
  int v13; // [rsp+38h] [rbp+10h] BYREF

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
      if ( (unsigned int)dword_140E08524 < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140E08520 )
        {
          v9 = off_140E08518;
          v10 = -2128831035;
          v11 = *off_140E08518;
          if ( !*off_140E08518 )
            goto LABEL_19;
          do
          {
            ++v9;
            v10 = v11 + 16777619 * v10;
            v11 = *v9;
          }
          while ( *v9 );
          dword_140E08520 = 1;
          if ( v10 )
LABEL_19:
            dword_140E08520 = v10;
        }
        EtwTelemetryCoverageReport(&off_140E08518);
      }
      PspRecordCrashedProcessIntoBlackbox(a1);
      PsSetProcessTelemetryAppState((PRKPROCESS)a1, 4);
    }
  }
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140E0853C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E08538 )
        dword_140E08538 = TelemetryCoverageStringHashInternal(off_140E08530, &v13);
      EtwTelemetryCoverageReport(&off_140E08530);
    }
    CurrentThread = KeGetCurrentThread();
    PspLockProcessExclusive(a1, (__int64)CurrentThread);
    if ( (*(_BYTE *)(a1 + 1531) & 7) != 7 )
      *(_BYTE *)(a1 + 1531) ^= (*(_BYTE *)(a1 + 1531) ^ (*(_BYTE *)(a1 + 1531) + 1)) & 7;
    PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
  }
  if ( (*a2 & 4) != 0 )
  {
    v8 = KeGetCurrentThread();
    PspLockProcessExclusive(a1, (__int64)v8);
    if ( (*(_BYTE *)(a1 + 1531) & 0x38u) < 0x38 )
      *(_BYTE *)(a1 + 1531) ^= (*(_BYTE *)(a1 + 1531) ^ (*(_BYTE *)(a1 + 1531) + 8)) & 0x38;
    PspUnlockProcessExclusive(a1, (__int64)v8);
  }
  if ( (*a2 & 8) != 0 )
  {
    v4 = KeGetCurrentThread();
    PspLockProcessExclusive(a1, (__int64)v4);
    *(_BYTE *)(a1 + 1531) |= 0x40u;
    PspUnlockProcessExclusive(a1, (__int64)v4);
  }
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
  return 0LL;
}
