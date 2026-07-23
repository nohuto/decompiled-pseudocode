/*
 * XREFs of ExpSetTimeZoneInformation @ 0x1407B5C94
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140782578 (RtlpSetTimeZoneInformationWorker.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1407B6BF8 (ExpReadSiloTimeZoneMarker.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     RtlWriteRegistryValue @ 0x1409B6290 (RtlWriteRegistryValue.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A0C1B0 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A0C21C (ExReleaseTimeRefreshLockShared.c)
 */

NTSTATUS __fastcall ExpSetTimeZoneInformation(_OWORD *a1, int a2)
{
  char SiloTimeZoneMarker; // r14
  __int64 v5; // rdi
  _OWORD *v6; // rbx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  wchar_t *v10; // rax
  NTSTATUS result; // eax
  int v12; // ebx
  _DWORD ValueData[4]; // [rsp+30h] [rbp-398h] BYREF
  _OWORD v14[10]; // [rsp+40h] [rbp-388h] BYREF
  __int64 v15; // [rsp+E0h] [rbp-2E8h]
  int v16; // [rsp+E8h] [rbp-2E0h]
  _BYTE v17[260]; // [rsp+ECh] [rbp-2DCh] BYREF
  wchar_t v18[216]; // [rsp+1F0h] [rbp-1D8h] BYREF

  memset_0(v14, 0, 0x1B0uLL);
  memset_0(v18, 0, sizeof(v18));
  SiloTimeZoneMarker = 0;
  if ( a2 == 172 )
  {
    v5 = 3LL;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14[0] = *a1;
    v14[1] = a1[1];
    v14[2] = a1[2];
    v14[3] = a1[3];
    v14[4] = a1[4];
    v14[5] = a1[5];
    v14[6] = a1[6];
    v14[7] = a1[7];
    v6 = a1 + 8;
    v14[8] = *v6;
    v14[9] = v6[1];
    v15 = *((_QWORD *)v6 + 4);
    v16 = *((_DWORD *)v6 + 10);
    memset_0(v17, 0, 0x100uLL);
    v17[256] = 1;
  }
  else
  {
    if ( a2 != 432 )
      return -1073741820;
    v5 = 3LL;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = v14;
    v8 = 3LL;
    do
    {
      *v7 = *a1;
      v7[1] = a1[1];
      v7[2] = a1[2];
      v7[3] = a1[3];
      v7[4] = a1[4];
      v7[5] = a1[5];
      v7[6] = a1[6];
      v7 += 8;
      *(v7 - 1) = a1[7];
      a1 += 8;
      --v8;
    }
    while ( v8 );
    *v7 = *a1;
    v7[1] = a1[1];
    v7[2] = a1[2];
  }
  ExAcquireTimeRefreshLockShared();
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  v10 = v18;
  do
  {
    *(struct _LIST_ENTRY *)v10 = *Blink;
    *((struct _LIST_ENTRY *)v10 + 1) = Blink[1];
    *((struct _LIST_ENTRY *)v10 + 2) = Blink[2];
    *((struct _LIST_ENTRY *)v10 + 3) = Blink[3];
    *((struct _LIST_ENTRY *)v10 + 4) = Blink[4];
    *((struct _LIST_ENTRY *)v10 + 5) = Blink[5];
    *((struct _LIST_ENTRY *)v10 + 6) = Blink[6];
    v10 += 64;
    *((struct _LIST_ENTRY *)v10 - 1) = Blink[7];
    Blink += 8;
    --v5;
  }
  while ( v5 );
  *(struct _LIST_ENTRY *)v10 = *Blink;
  *((struct _LIST_ENTRY *)v10 + 1) = Blink[1];
  *((struct _LIST_ENTRY *)v10 + 2) = Blink[2];
  ExReleaseTimeRefreshLockShared();
  if ( !PsIsCurrentThreadInServerSilo()
    || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker()) != 0
    || (ValueData[0] = 1,
        result = RtlWriteRegistryValue(2u, L"TimeZoneInformation", L"SiloTimeZoneMarker", 4u, ValueData, 4u),
        result >= 0) )
  {
    v12 = RtlpSetTimeZoneInformationWorker((wchar_t *)v14, 0x1B0u);
    if ( v12 >= 0 )
      v12 = NtSetSystemTime(0LL, 0LL);
    if ( v12 < 0 )
    {
      RtlpSetTimeZoneInformationWorker(v18, 0x1B0u);
      if ( PsIsCurrentThreadInServerSilo() && !SiloTimeZoneMarker )
      {
        ValueData[0] = 0;
        RtlWriteRegistryValue(2u, L"TimeZoneInformation", L"SiloTimeZoneMarker", 4u, ValueData, 4u);
      }
    }
    return v12;
  }
  return result;
}
