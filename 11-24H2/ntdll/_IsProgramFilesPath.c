/*
 * XREFs of _IsProgramFilesPath @ 0x180086E7C
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x1800B25C0 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlQueryEnvironmentVariable @ 0x1800851D0 (RtlQueryEnvironmentVariable.c)
 *     _wcsnicmp @ 0x180122DB0 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall IsProgramFilesPath(wchar_t *String1, size_t *a2)
{
  wchar_t *v3; // rsi
  unsigned __int16 v5; // di
  int v6; // ebx
  void *ProcessHeap; // rcx
  int v8; // eax
  size_t v9; // rdi
  unsigned __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h]
  wchar_t *Heap; // [rsp+40h] [rbp-C0h]
  wchar_t String2[352]; // [rsp+50h] [rbp-B0h] BYREF

  *a2 = 0LL;
  v3 = String2;
  v11 = 0LL;
  v12 = 0LL;
  Heap = String2;
  v5 = 702;
  v6 = RtlQueryEnvironmentVariable(0LL, L"ProgramFiles", 0xCuLL, String2, 0x15FuLL, &v11);
  if ( v11 > 0x7FFF )
    return (unsigned int)-1073741801;
  if ( v6 != -1073741789 )
  {
    if ( v6 >= 0 )
      goto LABEL_7;
    return (unsigned int)v6;
  }
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  WORD1(v12) = 2 * (v11 - 1) + 2;
  Heap = (wchar_t *)RtlAllocateHeap((__int64)ProcessHeap, 8u, WORD1(v12));
  v3 = Heap;
  if ( Heap )
  {
    v5 = WORD1(v12);
LABEL_7:
    v11 = 0LL;
    v8 = RtlQueryEnvironmentVariable(0LL, L"ProgramFiles", 0xCuLL, v3, (unsigned __int64)v5 >> 1, &v11);
    v6 = v8;
    if ( v11 > 0x7FFF )
    {
      v6 = -1073741801;
    }
    else if ( v8 >= 0 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v3[v9] );
      if ( wcsnicmp(String1, v3, v9) )
        v6 = -1073741637;
      else
        *a2 = v9;
    }
    if ( v3 != String2 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
    return (unsigned int)v6;
  }
  return 3221225659LL;
}
