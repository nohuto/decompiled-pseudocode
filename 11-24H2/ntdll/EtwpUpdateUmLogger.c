/*
 * XREFs of EtwpUpdateUmLogger @ 0x1800A8584
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x1800A8130 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlNtStatusToDosError @ 0x180049020 (RtlNtStatusToDosError.c)
 *     RtlFreeAnsiString @ 0x180081430 (RtlFreeAnsiString.c)
 *     EtwpQueryUmLogger @ 0x1800A8354 (EtwpQueryUmLogger.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x1800A92EC (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpGetPrivateLoggerContext @ 0x1800A95B4 (EtwpGetPrivateLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x1800A96A4 (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpUpdateUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  ULONG v9; // ebx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  __m128i v16; // xmm6
  NTSTATUS v17; // eax
  void *v18; // rcx
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  *a2 = 0;
  *a3 = 176;
  v19 = 0LL;
  if ( a1 < 0xB0 )
    return 234LL;
  result = EtwpGetPrivateLoggerContext(a4, &v19);
  v9 = result;
  if ( !(_DWORD)result )
  {
    v10 = v19;
    if ( (*(_BYTE *)(a4 + 64) & 2) != 0 && (*(_BYTE *)(v19 + 308) & 1) != 0
      || (*(_BYTE *)(a4 + 64) & 1) != 0 && (*(_BYTE *)(v19 + 308) & 2) != 0
      || (*(_DWORD *)(a4 + 64) & 0x100) != 0
      || (v11 = *(_DWORD *)(v19 + 308), (v11 & 0x400) != 0)
      || (v11 & 0x10000) != 0
      || *(_DWORD *)(a4 + 76) && *(_DWORD *)(a4 + 68) )
    {
      v9 = 87;
      goto LABEL_23;
    }
    v12 = *(unsigned __int16 *)(a4 + 146) + 176LL;
    *(_QWORD *)(a4 + 152) = a4 + 176;
    *(_QWORD *)(a4 + 136) = a4 + v12;
    if ( *(_DWORD *)(a4 + 68) )
      *(_QWORD *)(v10 + 328) = EtwpOneSecond * *(unsigned int *)(a4 + 68);
    v13 = *(_DWORD *)(a4 + 76);
    if ( v13 )
    {
      v14 = *(_DWORD *)(a4 + 76);
      v15 = *(_DWORD *)(v10 + 200) - *(_DWORD *)(v10 + 188) - 1;
      if ( v13 > v15 )
      {
        *(_DWORD *)(a4 + 76) = v15;
        v14 = v15;
      }
      v13 = v14;
      if ( v14 < 0 )
      {
        *(_DWORD *)(a4 + 76) = 0;
        v13 = 0;
      }
    }
    *(_DWORD *)(v10 + 352) = v13;
    if ( !*(_WORD *)(a4 + 128) )
      goto LABEL_22;
    v16 = *(__m128i *)(v10 + 152);
    v9 = EtwpAddInstanceIdToLogFileName(a4, *(unsigned int *)(v10 + 60), v10 + 152);
    if ( !v9 )
    {
      EtwpSynchronizeWithLogger(v10, 2LL);
      v17 = EtwpSynchronizeWithLogger(v10, 4LL);
      if ( !v17 )
      {
        v9 = 0;
        goto LABEL_20;
      }
      v9 = RtlNtStatusToDosError(v17);
      if ( !v9 )
      {
LABEL_20:
        v18 = (void *)_mm_srli_si128(v16, 8).m128i_u64[0];
        if ( v18 )
          RtlpSysVolFree(v18);
LABEL_22:
        EtwpQueryUmLogger(a1, a2, a3, a4);
LABEL_23:
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v10 + 20) + 8));
        return v9;
      }
      RtlFreeAnsiString((PUNICODE_STRING)(v10 + 152));
    }
    *(__m128i *)(v10 + 152) = v16;
    goto LABEL_23;
  }
  return result;
}
