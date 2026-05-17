/*
 * XREFs of RtlpFcUpdateLocalConfiguration @ 0x1800D6550
 * Callers:
 *     RtlpFcWnfCallback @ 0x1800D6100 (RtlpFcWnfCallback.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x1800D63CC (RtlpFcReferenceFeatureConfigurationBuffers.c)
 * Callees:
 *     RtlTryAcquireSRWLockExclusive @ 0x18001B950 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1800D6520 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcMapSingleBuffer @ 0x1800D67B0 (RtlpFcMapSingleBuffer.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1800D685C (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlBackoff @ 0x1800D6AD0 (RtlBackoff.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     NtQuerySystemInformationEx @ 0x180164A40 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     RtlpFcSectionTypeToBufferType @ 0x18017153C (RtlpFcSectionTypeToBufferType.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFcUpdateLocalConfiguration(__int64 a1, unsigned __int64 a2, char a3)
{
  volatile signed __int32 **v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // rdi
  int v11; // eax
  char *v12; // rdi
  __int64 v13; // rsi
  HANDLE *v14; // rdi
  __int64 *v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rtt
  unsigned int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // r11
  int v22; // r9d
  _QWORD *v23; // r10
  _DWORD v24[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+50h] [rbp-B0h]
  _QWORD v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v30; // [rsp+D8h] [rbp-28h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  memset_thunk_772440563353939046(v27, 0, 0x68uLL);
  memset_thunk_772440563353939046(v29, 0, 0x60uLL);
  v8 = 4LL;
  if ( byte_1801D2908 )
  {
    v9 = -1073741058;
  }
  else
  {
    if ( a3 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1, v6, v7);
    }
    else if ( !RtlTryAcquireSRWLockExclusive((volatile signed __int32 *)a1) )
    {
      v9 = -1073741608;
      goto LABEL_9;
    }
    v16 = (__int64 *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 8 + 8 * (*(_QWORD *)(a1 + 8) & 1LL) + 216) >= a2 )
    {
      v9 = 0;
    }
    else
    {
      v24[0] = 0;
      while ( 1 )
      {
        _m_prefetchw(v16);
        v17 = *v16 & 1 | ((*v16 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
        if ( v17 < 2 )
          __fastfail(0xEu);
        v18 = *v16;
        if ( v18 == _InterlockedCompareExchange64(v16, v17, *v16) )
          break;
        RtlBackoff(v24);
      }
      v25 = 0LL;
      v19 = 0;
      v26 = 0LL;
      do
      {
        v20 = (unsigned int)RtlpFcSectionTypeToBufferType(v19);
        v19 = v22 + 1;
        *v23 = *(_QWORD *)(v21 + 24 * v20 + 24);
      }
      while ( v19 < 4 );
      RtlpFcBufferManagerDereferenceBuffers(a1 + 8, v21 + 24);
      v9 = NtQuerySystemInformationEx(211LL, &v25, 32LL, v27, 104, 0LL);
      if ( v9 >= 0 )
      {
        v10 = 0LL;
        while ( 1 )
        {
          v11 = RtlpFcSectionTypeToBufferType((unsigned int)v10);
          v9 = RtlpFcMapSingleBuffer(&v27[3 * v10 + 1], &v29[24 * v11]);
          if ( v9 < 0 )
            break;
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= 4 )
          {
            RtlpFcBufferManagerUpdateBuffers(a1 + 8, v27[0], v29);
            break;
          }
        }
      }
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  }
LABEL_9:
  v12 = &v30;
  v13 = 4LL;
  do
  {
    if ( *(_QWORD *)v12 )
      NtUnmapViewOfSection(-1LL);
    v12 += 24;
    --v13;
  }
  while ( v13 );
  v14 = (HANDLE *)&v28;
  do
  {
    if ( *v14 )
      NtClose(*v14);
    v14 += 3;
    --v8;
  }
  while ( v8 );
  return (unsigned int)v9;
}
