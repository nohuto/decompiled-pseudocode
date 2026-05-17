/*
 * XREFs of RtlpQueryPseudoEnvironmentVariable @ 0x1800ADF2C
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x1800AD560 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlStringCbPrintfExW @ 0x1800AF7C0 (RtlStringCbPrintfExW.c)
 *     RtlFindCharInUnicodeString @ 0x1800B3C00 (RtlFindCharInUnicodeString.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x180165FD0 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpQueryPseudoEnvironmentVariable(int a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  __int64 Heap; // rdi
  int v8; // ecx
  __int64 v9; // r9
  int v10; // ebx
  int Args; // r8d
  unsigned int i; // edx
  const wchar_t *Buffer; // rdx
  unsigned __int64 v14; // rbx
  size_t v15; // rbx
  _RTL_USER_PROCESS_PARAMETERS *v16; // rbx
  int CharInUnicodeString; // eax
  unsigned __int64 Length; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  char v21; // [rsp+40h] [rbp-98h]
  unsigned int v22; // [rsp+44h] [rbp-94h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-90h] BYREF
  int v24; // [rsp+4Ch] [rbp-8Ch] BYREF
  __int64 v25; // [rsp+50h] [rbp-88h]
  int v26; // [rsp+58h] [rbp-80h]
  unsigned int v27; // [rsp+5Ch] [rbp-7Ch]
  __int64 v28; // [rsp+60h] [rbp-78h]
  __int128 SystemInformation; // [rsp+68h] [rbp-70h] BYREF
  __int128 v30; // [rsp+78h] [rbp-60h]
  wchar_t Src[16]; // [rsp+88h] [rbp-50h] BYREF

  SystemInformation = 0LL;
  v30 = 0LL;
  LOWORD(v22) = 0;
  v24 = 0;
  v23 = 0;
  v28 = 0LL;
  v21 = 0;
  Heap = 0LL;
  v25 = 0LL;
  if ( !a1 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v21 = 1;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
    Heap = v25;
LABEL_23:
    v14 = Length >> 1;
    goto LABEL_10;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    v16 = NtCurrentPeb()->ProcessParameters;
    CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v16->ImagePathName, &RtlDosPathSeperatorsString, &v22);
    Buffer = v16->ImagePathName.Buffer;
    Heap = v25;
    if ( CharInUnicodeString >= 0 )
    {
      v14 = ((unsigned __int16)v22 >> 1) + 1;
      goto LABEL_10;
    }
    Length = v16->ImagePathName.Length;
    goto LABEL_23;
  }
  if ( v8 != 1 )
  {
    v10 = NtQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL);
    v22 = v10;
    if ( v10 < 0 )
      goto LABEL_28;
    if ( (_DWORD)v30 == 1 )
    {
      Buffer = L"Legacy";
      v14 = 6LL;
    }
    else
    {
      Buffer = L"UEFI";
      v14 = 4LL;
    }
LABEL_10:
    if ( a2 )
    {
      if ( v14 < a3 )
      {
        *a4 = v14;
        v15 = v14;
        memmove(a2, Buffer, v15 * 2);
        a2[v15] = 0;
        v10 = 0;
LABEL_13:
        v22 = v10;
        goto LABEL_28;
      }
      if ( a3 )
        *a2 = 0;
    }
    *a4 = v14 + 1;
    v10 = -1073741789;
    goto LABEL_13;
  }
  v24 = 4;
  v23 = 0;
  NtQuerySystemInformationEx(107LL, &v24, 4LL, 0LL, 0, &v23);
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v23);
  v25 = Heap;
  if ( !Heap )
  {
    v10 = -1073741801;
    goto LABEL_13;
  }
  v10 = NtQuerySystemInformationEx(107LL, &v24, 4LL, Heap, v23, &v23);
  v22 = v10;
  if ( v10 >= 0 )
  {
    Args = 0;
    v26 = 0;
    for ( i = 0; ; ++i )
    {
      v27 = i;
      if ( i >= *(unsigned __int16 *)(Heap + 10) )
        break;
      Args += *(unsigned __int8 *)(Heap + 48LL * i + 33);
      v26 = Args;
    }
    v10 = RtlStringCbPrintfExW(Src, 0, (wchar_t *)L"%u", Args);
    v22 = v10;
    if ( v10 >= 0 )
    {
      Buffer = Src;
      v14 = (v28 - (__int64)Src) >> 1;
      goto LABEL_10;
    }
  }
LABEL_28:
  if ( v21 )
    RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( Heap )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v25, v9);
    return v22;
  }
  return (unsigned int)v10;
}
