/*
 * XREFs of RtlpFcUpdateLocalConfiguration @ 0x1800D18C0
 * Callers:
 *     RtlpFcWnfCallback @ 0x1800D1470 (RtlpFcWnfCallback.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x1800D173C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 * Callees:
 *     RtlTryAcquireSRWLockExclusive @ 0x180048350 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1800D1890 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcMapSingleBuffer @ 0x1800D1B20 (RtlpFcMapSingleBuffer.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1800D1BCC (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlBackoff @ 0x1800D1E40 (RtlBackoff.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     NtQuerySystemInformationEx @ 0x180162E00 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     RtlpFcSectionTypeToBufferType @ 0x18017053C (RtlpFcSectionTypeToBufferType.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFcUpdateLocalConfiguration(PRTL_SRWLOCK SRWLock, unsigned __int64 a2, char a3)
{
  __int64 v6; // r14
  NTSTATUS v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  PVOID *v10; // rdi
  __int64 v11; // rsi
  HANDLE *v12; // rdi
  PRTL_SRWLOCK v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 Value; // rtt
  unsigned int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // r11
  int v20; // r9d
  _QWORD *v21; // r10
  int v22[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 InputBuffer; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v24; // [rsp+50h] [rbp-B0h]
  _QWORD SystemInformation[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v26; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v28; // [rsp+D8h] [rbp-28h] BYREF

  InputBuffer = 0LL;
  v24 = 0LL;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x68uLL);
  memset_thunk_772440563353939046(v27, 0, 0x60uLL);
  v6 = 4LL;
  if ( byte_1801D1908 )
  {
    v7 = -1073741058;
  }
  else
  {
    if ( a3 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
    }
    else if ( !RtlTryAcquireSRWLockExclusive(SRWLock) )
    {
      v7 = -1073741608;
      goto LABEL_9;
    }
    v14 = SRWLock + 1;
    if ( SRWLock[(SRWLock[1].Value & 1) + 28].Value >= a2 )
    {
      v7 = 0;
    }
    else
    {
      v22[0] = 0;
      while ( 1 )
      {
        _m_prefetchw(v14);
        v15 = v14->Value & 1 | ((v14->Value & 0xFFFFFFFFFFFFFFFEuLL) + 2);
        if ( v15 < 2 )
          __fastfail(0xEu);
        Value = v14->Value;
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)v14, v15, v14->Value) )
          break;
        RtlBackoff(v22);
      }
      InputBuffer = 0LL;
      v17 = 0;
      v24 = 0LL;
      do
      {
        v18 = (unsigned int)RtlpFcSectionTypeToBufferType(v17);
        v17 = v20 + 1;
        *v21 = *(_QWORD *)(v19 + 24 * v18 + 24);
      }
      while ( v17 < 4 );
      RtlpFcBufferManagerDereferenceBuffers((__int64)&SRWLock[1], v19 + 24);
      v7 = NtQuerySystemInformationEx(
             SystemFeatureConfigurationSectionInformation,
             &InputBuffer,
             0x20u,
             SystemInformation,
             0x68u,
             0LL);
      if ( v7 >= 0 )
      {
        v8 = 0LL;
        while ( 1 )
        {
          v9 = RtlpFcSectionTypeToBufferType((unsigned int)v8);
          v7 = RtlpFcMapSingleBuffer(&SystemInformation[3 * v8 + 1], &v27[24 * v9]);
          if ( v7 < 0 )
            break;
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= 4 )
          {
            RtlpFcBufferManagerUpdateBuffers(&SRWLock[1], SystemInformation[0], v27);
            break;
          }
        }
      }
    }
    RtlReleaseSRWLockExclusive(SRWLock);
  }
LABEL_9:
  v10 = (PVOID *)&v28;
  v11 = 4LL;
  do
  {
    if ( *v10 )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v10);
    v10 += 3;
    --v11;
  }
  while ( v11 );
  v12 = (HANDLE *)&v26;
  do
  {
    if ( *v12 )
      NtClose(*v12);
    v12 += 3;
    --v6;
  }
  while ( v6 );
  return (unsigned int)v7;
}
