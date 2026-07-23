/*
 * XREFs of RtlpQueryPseudoEnvironmentVariable @ 0x180007A4C
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1800092E0 (RtlStringCbPrintfExW.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlFindCharInUnicodeString @ 0x1800A6730 (RtlFindCharInUnicodeString.c)
 *     NtQuerySystemInformation @ 0x180160710 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x180162E00 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpQueryPseudoEnvironmentVariable(int a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  unsigned __int16 *Heap; // rdi
  int v8; // ecx
  NTSTATUS v9; // ebx
  int Args; // r8d
  unsigned int i; // edx
  const wchar_t *Buffer; // rdx
  unsigned __int64 v13; // rbx
  size_t v14; // rbx
  _RTL_USER_PROCESS_PARAMETERS *v15; // rbx
  NTSTATUS CharInUnicodeString; // eax
  unsigned __int64 Length; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  char v20; // [rsp+40h] [rbp-98h]
  USHORT NonInclusivePrefixLength[2]; // [rsp+44h] [rbp-94h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-90h] BYREF
  int InputBuffer; // [rsp+4Ch] [rbp-8Ch] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-88h]
  int v25; // [rsp+58h] [rbp-80h]
  unsigned int v26; // [rsp+5Ch] [rbp-7Ch]
  __int64 v27; // [rsp+60h] [rbp-78h]
  __int128 SystemInformation; // [rsp+68h] [rbp-70h] BYREF
  __int128 v29; // [rsp+78h] [rbp-60h]
  wchar_t Src[16]; // [rsp+88h] [rbp-50h] BYREF

  SystemInformation = 0LL;
  v29 = 0LL;
  NonInclusivePrefixLength[0] = 0;
  InputBuffer = 0;
  ReturnLength = 0;
  v27 = 0LL;
  v20 = 0;
  Heap = 0LL;
  BaseAddress = 0LL;
  if ( !a1 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    RtlEnterCriticalSection(&FastPebLock);
    v20 = 1;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
    Heap = (unsigned __int16 *)BaseAddress;
LABEL_23:
    v13 = Length >> 1;
    goto LABEL_10;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    v15 = NtCurrentPeb()->ProcessParameters;
    CharInUnicodeString = RtlFindCharInUnicodeString(
                            1u,
                            &v15->ImagePathName,
                            &RtlDosPathSeperatorsString,
                            NonInclusivePrefixLength);
    Buffer = v15->ImagePathName.Buffer;
    Heap = (unsigned __int16 *)BaseAddress;
    if ( CharInUnicodeString >= 0 )
    {
      v13 = (NonInclusivePrefixLength[0] >> 1) + 1;
      goto LABEL_10;
    }
    Length = v15->ImagePathName.Length;
    goto LABEL_23;
  }
  if ( v8 != 1 )
  {
    v9 = NtQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL);
    *(_DWORD *)NonInclusivePrefixLength = v9;
    if ( v9 < 0 )
      goto LABEL_28;
    if ( (_DWORD)v29 == 1 )
    {
      Buffer = L"Legacy";
      v13 = 6LL;
    }
    else
    {
      Buffer = L"UEFI";
      v13 = 4LL;
    }
LABEL_10:
    if ( a2 )
    {
      if ( v13 < a3 )
      {
        *a4 = v13;
        v14 = v13;
        memmove(a2, Buffer, v14 * 2);
        a2[v14] = 0;
        v9 = 0;
LABEL_13:
        *(_DWORD *)NonInclusivePrefixLength = v9;
        goto LABEL_28;
      }
      if ( a3 )
        *a2 = 0;
    }
    *a4 = v13 + 1;
    v9 = -1073741789;
    goto LABEL_13;
  }
  InputBuffer = 4;
  ReturnLength = 0;
  NtQuerySystemInformationEx(SystemLogicalProcessorAndGroupInformation, &InputBuffer, 4u, 0LL, 0, &ReturnLength);
  Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
  BaseAddress = Heap;
  if ( !Heap )
  {
    v9 = -1073741801;
    goto LABEL_13;
  }
  v9 = NtQuerySystemInformationEx(
         SystemLogicalProcessorAndGroupInformation,
         &InputBuffer,
         4u,
         Heap,
         ReturnLength,
         &ReturnLength);
  *(_DWORD *)NonInclusivePrefixLength = v9;
  if ( v9 >= 0 )
  {
    Args = 0;
    v25 = 0;
    for ( i = 0; ; ++i )
    {
      v26 = i;
      if ( i >= Heap[5] )
        break;
      Args += HIBYTE(Heap[24 * i + 16]);
      v25 = Args;
    }
    v9 = RtlStringCbPrintfExW(Src, 0, (wchar_t *)L"%u", Args);
    *(_DWORD *)NonInclusivePrefixLength = v9;
    if ( v9 >= 0 )
    {
      Buffer = Src;
      v13 = (v27 - (__int64)Src) >> 1;
      goto LABEL_10;
    }
  }
LABEL_28:
  if ( v20 )
    RtlLeaveCriticalSection(&FastPebLock);
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return *(unsigned int *)NonInclusivePrefixLength;
  }
  return (unsigned int)v9;
}
