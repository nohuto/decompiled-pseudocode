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

__int64 __fastcall RtlpGetMUIRedirectedFilePath(
        UNICODE_STRING *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        __int64 a4,
        char a5,
        char a6,
        void *a7)
{
  WCHAR *v10; // rbx
  NTSTATUS OverlayFilePathUsingChecksum; // eax
  int MUIRedirectedFilePathInternal; // edi
  WCHAR *Heap; // rax
  unsigned int Size[4]; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  _WORD BaseAddress[264]; // [rsp+50h] [rbp-B0h] BYREF

  memset_thunk_772440563353939046(BaseAddress, 0, 0x208uLL);
  Size[0] = 520;
  v10 = BaseAddress;
  if ( !a6 )
    goto LABEL_5;
  OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(a1->Buffer, a2, 0LL, 0LL, Size, BaseAddress);
  if ( OverlayFilePathUsingChecksum == -1073741789 )
  {
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size[0]);
    v10 = Heap;
    if ( !Heap )
    {
LABEL_5:
      Source = *a1;
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(&Source, a2, a3, a5, a7);
      goto LABEL_6;
    }
    OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(a1->Buffer, a2, 0LL, 0LL, Size, Heap);
  }
  if ( OverlayFilePathUsingChecksum < 0 )
    goto LABEL_5;
  Source = *a1;
  MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(&Source, v10, a3, a5, a7);
  if ( MUIRedirectedFilePathInternal < 0 )
    goto LABEL_5;
LABEL_6:
  if ( v10 != BaseAddress && v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return (unsigned int)MUIRedirectedFilePathInternal;
}
