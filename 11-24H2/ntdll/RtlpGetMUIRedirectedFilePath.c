/*
 * XREFs of RtlpGetMUIRedirectedFilePath @ 0x180077E08
 * Callers:
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800766F0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     GetOverlayFilePathUsingChecksum @ 0x1800B25C0 (GetOverlayFilePathUsingChecksum.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        char a5,
        char a6,
        void *a7)
{
  int *v11; // rbx
  int OverlayFilePathUsingChecksum; // eax
  int MUIRedirectedFilePathInternal; // edi
  __int64 Heap; // rax
  _DWORD v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v18[132]; // [rsp+50h] [rbp-B0h] BYREF

  memset_thunk_772440563353939046(v18, 0, 0x208uLL);
  v16[0] = 520;
  v11 = v18;
  if ( !a6 )
    goto LABEL_5;
  OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(*(_QWORD *)(a1 + 8), a2, 0LL, 0LL, v16, v18);
  if ( OverlayFilePathUsingChecksum == -1073741789 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v16[0]);
    v11 = (int *)Heap;
    if ( !Heap )
    {
LABEL_5:
      *(_OWORD *)v17 = *(_OWORD *)a1;
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal((const void **)v17, a2, a3, a4, a5, a7);
      goto LABEL_6;
    }
    OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(*(_QWORD *)(a1 + 8), a2, 0LL, 0LL, v16, Heap);
  }
  if ( OverlayFilePathUsingChecksum < 0 )
    goto LABEL_5;
  *(_OWORD *)v17 = *(_OWORD *)a1;
  MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal((const void **)v17, (__int64)v11, a3, a4, a5, a7);
  if ( MUIRedirectedFilePathInternal < 0 )
    goto LABEL_5;
LABEL_6:
  if ( v11 != v18 && v11 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v11);
  return (unsigned int)MUIRedirectedFilePathInternal;
}
