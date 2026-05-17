/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x18003ED60
 * Callers:
 *     EtwpLogger @ 0x18008DC40 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x18015C218 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetSystemTimePrecise @ 0x18003D900 (RtlGetSystemTimePrecise.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x18003F0AC (EtwpAddReloggedHeaderExtensionEvents.c)
 *     EtwpAddProviderTrackingInfo @ 0x18003F17C (EtwpAddProviderTrackingInfo.c)
 *     EtwpWriteRemainingCompressedData @ 0x18003F1F8 (EtwpWriteRemainingCompressedData.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x18003F2BC (EtwpFinalizeRelogFileHeaderStats.c)
 *     NtReadFile @ 0x180161D50 (NtReadFile.c)
 *     NtWriteFile @ 0x180161D90 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x180162170 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1801625B0 (ZwQueryVolumeInformationFile.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v3; // zf
  unsigned int v6; // r15d
  unsigned __int64 Heap; // r14
  NTSTATUS v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // rdx
  int v14; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-21h] BYREF
  __int64 v16; // [rsp+60h] [rbp-19h] BYREF
  __int128 v17; // [rsp+68h] [rbp-11h] BYREF
  __int128 v18; // [rsp+78h] [rbp-1h] BYREF
  __int128 v19; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+98h] [rbp+1Fh]

  v2 = 0;
  v3 = (*(_DWORD *)(a1 + 308) & 0x4000000) == 0;
  v16 = 0LL;
  v20 = 0LL;
  LODWORD(v15) = 0;
  v17 = 0LL;
  v14 = 0;
  v19 = 0LL;
  if ( !v3 )
  {
    v8 = EtwpWriteRemainingCompressedData(a1, &v15, &v14);
    if ( v8 < 0 )
      goto LABEL_19;
    *(_DWORD *)(a1 + 376) += v15;
    *(_DWORD *)(a1 + 372) += v14;
  }
  if ( *(_QWORD *)(a1 + 448) != a1 + 448
    || *(_QWORD *)(a1 + 464) != a1 + 464
    || *(_QWORD *)(a1 + 504)
    || (*(_DWORD *)(a1 + 308) & 0x1000) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 192);
    goto LABEL_4;
  }
  v8 = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 128), &v17, &v19, 24LL, 3);
  if ( v8 >= 0 )
  {
    v6 = -HIDWORD(v20) & (HIDWORD(v20) + 7);
LABEL_4:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v6);
    if ( !Heap )
    {
      v8 = -1073741801;
      return RtlNtStatusToDosError(v8);
    }
    v8 = NtReadFile(*(_QWORD *)(a1 + 128), 0LL, 0LL, 0LL, &v17, Heap, v6, &v16, 0LL);
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
      v9 = *(_DWORD *)(a1 + 308);
      if ( (v9 & 0x10000) != 0 )
      {
        if ( (v9 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, Heap, v6, v15, v14);
      }
      else
      {
        *(_QWORD *)(Heap + 120) = RtlGetSystemTimePrecise();
      }
    }
    *(_DWORD *)(Heap + 48) = *(_DWORD *)(Heap + 4);
    EtwpAddReloggedHeaderExtensionEvents(a1, Heap, v6);
    EtwpAddProviderTrackingInfo(a1, Heap, v6);
    v10 = NtWriteFile(*(_QWORD *)(a1 + 128), 0LL, 0LL, 0LL, &v17, Heap, v6, &v16, 0LL);
    v8 = v10;
    if ( a2 )
      goto LABEL_18;
    if ( v10 < 0 )
      goto LABEL_18;
    v11 = *(_DWORD *)(a1 + 308);
    if ( (v11 & 0x4000020) == 0 )
      goto LABEL_18;
    v18 = 0LL;
    if ( (v11 & 0x4000000) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 344);
    }
    else
    {
      v12 = *(unsigned int *)(a1 + 192) * (unsigned __int64)*(unsigned int *)(a1 + 376);
      if ( v12 >= *(unsigned int *)(a1 + 304) * ((-(__int64)((v11 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
      {
LABEL_18:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        goto LABEL_19;
      }
    }
    v15 = v12;
    if ( v12 )
      v8 = ZwSetInformationFile(*(_QWORD *)(a1 + 128), &v18, &v15, 8LL, 20);
    goto LABEL_18;
  }
LABEL_19:
  if ( v8 )
    return RtlNtStatusToDosError(v8);
  return v2;
}
