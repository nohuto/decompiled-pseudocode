/*
 * XREFs of _IsProgramFilesPath @ 0x1800AF20C
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18006BF80 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlQueryEnvironmentVariable @ 0x1800AD560 (RtlQueryEnvironmentVariable.c)
 *     _wcsnicmp @ 0x180124890 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall IsProgramFilesPath(wchar_t *String1, size_t *a2)
{
  wchar_t *v3; // rsi
  unsigned __int16 v5; // di
  int v6; // ebx
  char *ProcessHeap; // rcx
  int v8; // eax
  __int64 v9; // r9
  size_t v10; // rdi
  unsigned __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h]
  wchar_t *Heap; // [rsp+40h] [rbp-C0h]
  wchar_t String2[352]; // [rsp+50h] [rbp-B0h] BYREF

  *a2 = 0LL;
  v3 = String2;
  v12 = 0LL;
  v13 = 0LL;
  Heap = String2;
  v5 = 702;
  v6 = RtlQueryEnvironmentVariable(0LL, L"ProgramFiles", 0xCuLL, String2, 0x15FuLL, &v12);
  if ( v12 > 0x7FFF )
    return (unsigned int)-1073741801;
  if ( v6 != -1073741789 )
  {
    if ( v6 >= 0 )
      goto LABEL_7;
    return (unsigned int)v6;
  }
  ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
  WORD1(v13) = 2 * (v12 - 1) + 2;
  Heap = (wchar_t *)RtlAllocateHeap(ProcessHeap, 8u, WORD1(v13));
  v3 = Heap;
  if ( Heap )
  {
    v5 = WORD1(v13);
LABEL_7:
    v12 = 0LL;
    v8 = RtlQueryEnvironmentVariable(0LL, L"ProgramFiles", 0xCuLL, v3, (unsigned __int64)v5 >> 1, &v12);
    v6 = v8;
    if ( v12 > 0x7FFF )
    {
      v6 = -1073741801;
    }
    else if ( v8 >= 0 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v3[v10] );
      if ( wcsnicmp(String1, v3, v10) )
        v6 = -1073741637;
      else
        *a2 = v10;
    }
    if ( v3 != String2 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v9);
    return (unsigned int)v6;
  }
  return 3221225659LL;
}
