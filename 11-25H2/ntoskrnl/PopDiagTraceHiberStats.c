/*
 * XREFs of PopDiagTraceHiberStats @ 0x140A594AC
 * Callers:
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     PpmConvertTime @ 0x1403E7C50 (PpmConvertTime.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1404A9304 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     PopComputeDerivedHiberStats @ 0x140A59C64 (PopComputeDerivedHiberStats.c)
 *     PopPotsLogHibernatePerformance @ 0x140A59D2C (PopPotsLogHibernatePerformance.c)
 *     PopQpcTimeInMs @ 0x140B5AA60 (PopQpcTimeInMs.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140B5D838 (PopSstDiagQueryResumeTimestamp.c)
 */

BOOLEAN __fastcall PopDiagTraceHiberStats(int a1)
{
  int v1; // eax
  HANDLE v2; // r14
  __int64 ResumeTimestamp; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 *v5; // r12
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // r15
  _BYTE *Data; // r13
  __int64 *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rax
  int v12; // ecx
  int v13; // esi
  ULONG DataSize; // ebx
  BOOLEAN result; // al
  HANDLE DestinationString[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h]
  __int64 v19; // [rsp+60h] [rbp-A8h]
  __int128 v20; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v21[480]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+258h] [rbp+150h] BYREF

  LODWORD(v17) = a1;
  v20 = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  v1 = PopOpenPowerKey((__int64)DestinationString);
  v2 = DestinationString[0];
  if ( v1 < 0 )
    v2 = 0LL;
  DestinationString[0] = v2;
  ResumeTimestamp = PopSstDiagQueryResumeTimestamp();
  v4 = qword_140F0B1B8;
  qword_140F0B1C0 = ResumeTimestamp;
  dword_140F0B2C4 = dword_140F0ADA4;
  dword_140F0B2C0 = dword_140F0AE38;
  v19 = qword_140F0B1B8;
  LODWORD(qword_140F0B270) = PopQpcTimeInMs(&qword_140F0B098, &qword_140F0B0A0);
  qword_140F0B120 = (unsigned int)PopQpcTimeInMs(&qword_140F0B068, &qword_140F0B128);
  PopComputeDerivedHiberStats(&qword_140F0B0D8, v4, &v20);
  v5 = (unsigned __int64 *)v21;
  v18 = 59LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v21;
  v8 = &qword_140003400;
  do
  {
    v9 = *(v8 - 1);
    if ( (*(_DWORD *)v8 & 0x40000000) != 0 )
      v10 = (unsigned __int64 *)&v21[v9 - 16];
    else
      v10 = (unsigned __int64 *)((char *)&qword_140F0B0D8 + v9);
    if ( (*(_DWORD *)v8 & 2) != 0 )
      v11 = *v10;
    else
      v11 = *(unsigned int *)v10;
    *v5 = v11;
    v12 = *(_DWORD *)v8;
    if ( *(int *)v8 < 0 )
    {
      v11 /= v4;
      *v5 = v11;
    }
    if ( (v12 & 0x10000000) != 0 )
      *v5 = PpmConvertTime(v11, PopQpcFrequency, 0x3E8uLL);
    v13 = *(_DWORD *)v8 & 0x20;
    DataSize = v13 != 0 ? 8 : 4;
    if ( v2 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], (PCWSTR)*(v8 - 2));
      ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, v13 != 0 ? 11 : 4, Data, DataSize);
    }
    *(_QWORD *)&p_Reserved[-3].Reserved = Data;
    p_Reserved[-1].Reserved = DataSize;
    Data += 8;
    v4 = v19;
    v8 += 3;
    p_Reserved->Reserved = 0;
    ++v5;
    p_Reserved += 4;
    --v18;
  }
  while ( v18 );
  qword_140F0B238 /= v4;
  qword_140F0B0E0 /= v4;
  qword_140F0B2C8 = 1000 * qword_140F0B1C0 / PopQpcFrequency
                  - (unsigned int)qword_140F0B130
                  - (unsigned int)dword_140F0B138;
  if ( v2 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"KernelResumeIoCpuTime");
    ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140F0B238, 4u);
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberIoCpuTime");
    ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140F0B0E0, 4u);
    if ( qword_140F0B260 )
    {
      dword_140F0AD84 += PopQpcTimeInMs(&qword_140F0B088, &qword_140F0B268);
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HybridBootAnimationTime");
      ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &dword_140F0AD84, 4u);
    }
    qword_140F0B2D0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ResumeCompleteTimestamp");
    ZwSetValueKey(DestinationString[0], (PUNICODE_STRING)&DestinationString[1], 0, 0xBu, &qword_140F0B2D0, 8u);
    ZwClose(DestinationString[0]);
  }
  result = PopPotsLogHibernatePerformance(&qword_140F0B0D8, (unsigned int)v17);
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_HIBER_STATS);
    if ( result )
      return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_HIBER_STATS, 0LL, 0x3Bu, &UserData);
  }
  return result;
}
