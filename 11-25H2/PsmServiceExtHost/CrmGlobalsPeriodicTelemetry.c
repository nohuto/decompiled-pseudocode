/*
 * XREFs of CrmGlobalsPeriodicTelemetry @ 0x180065D90
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     CrmGlobalsPollTelemetryRegistration @ 0x180066050 (CrmGlobalsPollTelemetryRegistration.c)
 *     CrmSystemTimeToTelemetryWindow @ 0x18006E65C (CrmSystemTimeToTelemetryWindow.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmGlobalsPeriodicTelemetry(__int64 a1, __int64 a2)
{
  struct _FILETIME v3; // rdi
  struct _FILETIME v4; // rbx
  unsigned __int64 v5; // r14
  unsigned int v6; // r12d
  unsigned int v7; // eax
  __int64 v9; // rcx
  char v10; // [rsp+30h] [rbp-89h] BYREF
  struct _FILETIME v11; // [rsp+38h] [rbp-81h] BYREF
  struct _FILETIME v12; // [rsp+40h] [rbp-79h]
  struct _FILETIME v13; // [rsp+48h] [rbp-71h] BYREF
  struct _FILETIME FileTime; // [rsp+50h] [rbp-69h] BYREF
  __int64 v15; // [rsp+58h] [rbp-61h] BYREF
  _SYSTEMTIME SystemTime; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+70h] [rbp-49h] BYREF
  __int64 v18; // [rsp+90h] [rbp-29h]
  int v19; // [rsp+98h] [rbp-21h]
  int v20; // [rsp+9Ch] [rbp-1Dh]
  char *v21; // [rsp+A0h] [rbp-19h]
  int v22; // [rsp+A8h] [rbp-11h]
  int v23; // [rsp+ACh] [rbp-Dh]
  __int64 v24; // [rsp+B0h] [rbp-9h]
  int v25; // [rsp+B8h] [rbp-1h]
  int v26; // [rsp+BCh] [rbp+3h]
  __int64 v27; // [rsp+C0h] [rbp+7h]
  int v28; // [rsp+C8h] [rbp+Fh]
  int v29; // [rsp+CCh] [rbp+13h]
  struct _FILETIME *v30; // [rsp+D0h] [rbp+17h]
  int v31; // [rsp+D8h] [rbp+1Fh]
  int v32; // [rsp+DCh] [rbp+23h]

  FileTime = 0LL;
  v11 = 0LL;
  SystemTime = 0LL;
  GetSystemTime(&SystemTime);
  SystemTimeToFileTime(&SystemTime, &FileTime);
  v13 = FileTime;
  SystemTimeToFileTime((const SYSTEMTIME *)(a2 + 752), &v11);
  v3 = v13;
  v12 = v11;
  v4 = v11;
  if ( *(_QWORD *)&v13 < *(unsigned __int64 *)&v11
    || (v5 = *(_QWORD *)&v13 - *(_QWORD *)&v11, *(_QWORD *)&v13 - *(_QWORD *)&v11 >= 0x430E234000uLL) )
  {
    if ( (unsigned int)dword_1800E72E8 > 5 && tlgKeywordOn((__int64)&dword_1800E72E8, 0x400000000004LL) )
    {
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v21 = &v10;
      v24 = a2 + 768;
      v27 = a2 + 836;
      v30 = &v13;
      v18 = a2 + 752;
      v19 = 16;
      v10 = 1;
      v22 = 1;
      v25 = 68;
      v28 = 68;
      v13 = (struct _FILETIME)0x2000000LL;
      v31 = 8;
      tlgWriteTransfer_EventWriteTransfer(v9, byte_1800D147F, 0LL, 0LL, 7u, &v17);
    }
    CrmSystemTimeToTelemetryWindow(&SystemTime, (LPSYSTEMTIME)(a2 + 752));
    SystemTimeToFileTime((const SYSTEMTIME *)(a2 + 752), &v11);
    v12 = v11;
    v4 = v11;
    v5 = *(_QWORD *)&v3 - *(_QWORD *)&v11;
    memset_0((void *)(a2 + 768), 0, 0x44uLL);
    memset_0((void *)(a2 + 836), 0, 0x44uLL);
  }
  v6 = 1 << (v5 / 0x218711A00LL);
  v7 = CrmGlobalsPollTelemetryRegistration(a2, *(_QWORD *)(a2 + 552), v6, 0LL);
  CrmGlobalsPollTelemetryRegistration(a2, *(_QWORD *)(a2 + 544), v6, v7);
  v15 = *(_QWORD *)&v4 + 9000000000LL * ((unsigned int)(v5 / 0x218711A00LL) + 1);
  RtlAcquireSRWLockShared(a2 + 448);
  if ( (unsigned int)TpIsTimerSet(*(_QWORD *)(a2 + 744)) )
    TpSetTimer(*(_QWORD *)(a2 + 744), &v15, 0LL, 0LL);
  return RtlReleaseSRWLockShared(a2 + 448);
}
