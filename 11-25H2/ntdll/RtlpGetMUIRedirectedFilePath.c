/*
 * XREFs of RtlpGetMUIRedirectedFilePath @ 0x1800A1CE0
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18006BF80 (GetOverlayFilePathUsingChecksum.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800A1E80 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePath(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6, void *a7)
{
  int *v11; // rbx
  int OverlayFilePathUsingChecksum; // eax
  int MUIRedirectedFilePathInternal; // edi
  __int64 v14; // r9
  int *Heap; // rax
  unsigned int v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v19[264]; // [rsp+50h] [rbp-B0h] BYREF

  memset_thunk_772440563353939046(v19, 0, 0x208uLL);
  v17[0] = 520;
  v11 = (int *)v19;
  if ( !a6 )
    goto LABEL_5;
  OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(*(_QWORD *)(a1 + 8), a2, 0LL, 0LL, v17, v19);
  if ( OverlayFilePathUsingChecksum == -1073741789 )
  {
    Heap = (int *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v17[0]);
    v11 = Heap;
    if ( !Heap )
    {
LABEL_5:
      *(_OWORD *)v18 = *(_OWORD *)a1;
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal((int)v18, a2, a3, a4, a5, a7);
      goto LABEL_6;
    }
    OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(*(_QWORD *)(a1 + 8), a2, 0LL, 0LL, v17, Heap);
  }
  if ( OverlayFilePathUsingChecksum < 0 )
    goto LABEL_5;
  *(_OWORD *)v18 = *(_OWORD *)a1;
  MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal((int)v18, (int)v11, a3, a4, a5, a7);
  if ( MUIRedirectedFilePathInternal < 0 )
    goto LABEL_5;
LABEL_6:
  if ( v11 != (int *)v19 && v11 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v11, v14);
  return (unsigned int)MUIRedirectedFilePathInternal;
}
