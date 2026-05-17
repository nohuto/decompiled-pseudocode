/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x180092750
 * Callers:
 *     EtwpLogger @ 0x1800B6AE0 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x18015D778 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlGetSystemTimePrecise @ 0x1800912F0 (RtlGetSystemTimePrecise.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180092A9C (EtwpAddReloggedHeaderExtensionEvents.c)
 *     EtwpAddProviderTrackingInfo @ 0x180092B6C (EtwpAddProviderTrackingInfo.c)
 *     EtwpWriteRemainingCompressedData @ 0x180092BE8 (EtwpWriteRemainingCompressedData.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x180092CAC (EtwpFinalizeRelogFileHeaderStats.c)
 *     NtReadFile @ 0x1801632E0 (NtReadFile.c)
 *     NtWriteFile @ 0x180163320 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x180163700 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x180163B40 (ZwQueryVolumeInformationFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v3; // zf
  unsigned int v6; // r15d
  __int64 Heap; // r14
  NTSTATUS v8; // esi
  __int64 v9; // r9
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  unsigned __int64 v13; // rdx
  int v15; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-21h] BYREF
  __int64 v17; // [rsp+60h] [rbp-19h] BYREF
  __int128 v18; // [rsp+68h] [rbp-11h] BYREF
  __int128 v19; // [rsp+78h] [rbp-1h] BYREF
  __int128 v20; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+98h] [rbp+1Fh]

  v2 = 0;
  v3 = (*(_DWORD *)(a1 + 308) & 0x4000000) == 0;
  v17 = 0LL;
  v21 = 0LL;
  LODWORD(v16) = 0;
  v18 = 0LL;
  v15 = 0;
  v20 = 0LL;
  if ( !v3 )
  {
    v8 = EtwpWriteRemainingCompressedData(a1, &v16, &v15);
    if ( v8 < 0 )
      goto LABEL_19;
    *(_DWORD *)(a1 + 376) += v16;
    *(_DWORD *)(a1 + 372) += v15;
  }
  if ( *(_QWORD *)(a1 + 448) != a1 + 448
    || *(_QWORD *)(a1 + 464) != a1 + 464
    || *(_QWORD *)(a1 + 504)
    || (*(_DWORD *)(a1 + 308) & 0x1000) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 192);
    goto LABEL_4;
  }
  v8 = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 128), &v18, &v20, 24LL, 3);
  if ( v8 >= 0 )
  {
    v6 = -HIDWORD(v21) & (HIDWORD(v21) + 7);
LABEL_4:
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v6);
    if ( !Heap )
    {
      v8 = -1073741801;
      return RtlNtStatusToDosError(v8);
    }
    v8 = NtReadFile(*(_QWORD *)(a1 + 128), 0LL, 0LL, 0LL, &v18, Heap, v6, &v17, 0LL);
    if ( v8 < 0 )
      goto LABEL_18;
    if ( v6 >= *(_DWORD *)Heap )
      v6 = *(_DWORD *)Heap;
    if ( !a2 )
    {
      *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 188);
      *(_DWORD *)(Heap + 140) = *(_DWORD *)(a1 + 376);
      *(_DWORD *)(Heap + 152) += *(_DWORD *)(a1 + 368);
      *(_DWORD *)(Heap + 380) += *(_DWORD *)(a1 + 372);
      v10 = *(_DWORD *)(a1 + 308);
      if ( (v10 & 0x10000) != 0 )
      {
        if ( (v10 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, Heap, v6, v16, v15);
      }
      else
      {
        *(_QWORD *)(Heap + 120) = RtlGetSystemTimePrecise();
      }
    }
    *(_DWORD *)(Heap + 48) = *(_DWORD *)(Heap + 4);
    EtwpAddReloggedHeaderExtensionEvents(a1, Heap, v6);
    EtwpAddProviderTrackingInfo(a1, Heap, v6);
    v11 = NtWriteFile(*(_QWORD *)(a1 + 128), 0LL, 0LL, 0LL, &v18, Heap, v6, &v17, 0LL);
    v8 = v11;
    if ( a2 )
      goto LABEL_18;
    if ( v11 < 0 )
      goto LABEL_18;
    v12 = *(_DWORD *)(a1 + 308);
    if ( (v12 & 0x4000020) == 0 )
      goto LABEL_18;
    v19 = 0LL;
    if ( (v12 & 0x4000000) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 344);
    }
    else
    {
      v13 = *(unsigned int *)(a1 + 192) * (unsigned __int64)*(unsigned int *)(a1 + 376);
      if ( v13 >= *(unsigned int *)(a1 + 304) * ((-(__int64)((v12 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
      {
LABEL_18:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v9);
        goto LABEL_19;
      }
    }
    v16 = v13;
    if ( v13 )
      v8 = ZwSetInformationFile(*(_QWORD *)(a1 + 128), &v19, &v16, 8LL, 20);
    goto LABEL_18;
  }
LABEL_19:
  if ( v8 )
    return RtlNtStatusToDosError(v8);
  return v2;
}
