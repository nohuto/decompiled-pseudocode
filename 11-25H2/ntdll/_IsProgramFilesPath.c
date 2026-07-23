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
  WCHAR *v3; // rsi
  unsigned __int16 v5; // di
  NTSTATUS v6; // ebx
  void *ProcessHeap; // rcx
  NTSTATUS v8; // eax
  size_t v9; // rdi
  ULONG_PTR ReturnLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID BaseAddress[2]; // [rsp+38h] [rbp-C8h]
  WCHAR Value[352]; // [rsp+50h] [rbp-B0h] BYREF

  *a2 = 0LL;
  v3 = Value;
  ReturnLength = 0LL;
  BaseAddress[0] = 0LL;
  BaseAddress[1] = Value;
  v5 = 702;
  v6 = RtlQueryEnvironmentVariable(0LL, L"ProgramFiles", 0xCuLL, Value, 0x15FuLL, &ReturnLength);
  if ( ReturnLength > 0x7FFF )
    return (unsigned int)-1073741801;
  if ( v6 != -1073741789 )
  {
    if ( v6 >= 0 )
      goto LABEL_7;
    return (unsigned int)v6;
  }
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  WORD1(BaseAddress[0]) = 2 * (ReturnLength - 1) + 2;
  BaseAddress[1] = RtlAllocateHeap(ProcessHeap, 8u, WORD1(BaseAddress[0]));
  v3 = (WCHAR *)BaseAddress[1];
  if ( BaseAddress[1] )
  {
    v5 = WORD1(BaseAddress[0]);
LABEL_7:
    ReturnLength = 0LL;
    v8 = RtlQueryEnvironmentVariable(0LL, L"ProgramFiles", 0xCuLL, v3, (unsigned __int64)v5 >> 1, &ReturnLength);
    v6 = v8;
    if ( ReturnLength > 0x7FFF )
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
    if ( v3 != Value )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
    return (unsigned int)v6;
  }
  return 3221225659LL;
}
