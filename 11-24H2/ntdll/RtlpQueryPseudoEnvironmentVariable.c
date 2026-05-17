/*
 * XREFs of RtlpQueryPseudoEnvironmentVariable @ 0x180085B9C
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x1800851D0 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlStringCbPrintfExW @ 0x180087430 (RtlStringCbPrintfExW.c)
 *     RtlFindCharInUnicodeString @ 0x18008AC70 (RtlFindCharInUnicodeString.c)
 *     NtQuerySystemInformation @ 0x180162350 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x180164A40 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpQueryPseudoEnvironmentVariable(int a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  __int64 Heap; // rdi
  int v8; // ecx
  NTSTATUS v9; // ebx
  int Args; // r8d
  unsigned int i; // edx
  const wchar_t *Buffer; // rdx
  unsigned __int64 v13; // rbx
  size_t v14; // rbx
  _RTL_USER_PROCESS_PARAMETERS *v15; // rbx
  int CharInUnicodeString; // eax
  unsigned __int64 Length; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  char v20; // [rsp+40h] [rbp-98h]
  unsigned int v21; // [rsp+44h] [rbp-94h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-90h] BYREF
  int v23; // [rsp+4Ch] [rbp-8Ch] BYREF
  __int64 v24; // [rsp+50h] [rbp-88h]
  int v25; // [rsp+58h] [rbp-80h]
  unsigned int v26; // [rsp+5Ch] [rbp-7Ch]
  __int64 v27; // [rsp+60h] [rbp-78h]
  __int128 SystemInformation; // [rsp+68h] [rbp-70h] BYREF
  __int128 v29; // [rsp+78h] [rbp-60h]
  wchar_t Src[16]; // [rsp+88h] [rbp-50h] BYREF

  SystemInformation = 0LL;
  v29 = 0LL;
  LOWORD(v21) = 0;
  v23 = 0;
  v22 = 0;
  v27 = 0LL;
  v20 = 0;
  Heap = 0LL;
  v24 = 0LL;
  if ( !a1 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v20 = 1;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
    Heap = v24;
LABEL_23:
    v13 = Length >> 1;
    goto LABEL_10;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    v15 = NtCurrentPeb()->ProcessParameters;
    CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v15->ImagePathName, &RtlDosPathSeperatorsString, &v21);
    Buffer = v15->ImagePathName.Buffer;
    Heap = v24;
    if ( CharInUnicodeString >= 0 )
    {
      v13 = ((unsigned __int16)v21 >> 1) + 1;
      goto LABEL_10;
    }
    Length = v15->ImagePathName.Length;
    goto LABEL_23;
  }
  if ( v8 != 1 )
  {
    v9 = NtQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL);
    v21 = v9;
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
        v21 = v9;
        goto LABEL_28;
      }
      if ( a3 )
        *a2 = 0;
    }
    *a4 = v13 + 1;
    v9 = -1073741789;
    goto LABEL_13;
  }
  v23 = 4;
  v22 = 0;
  NtQuerySystemInformationEx(107LL, &v23, 4LL, 0LL, 0, &v22);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v22);
  v24 = Heap;
  if ( !Heap )
  {
    v9 = -1073741801;
    goto LABEL_13;
  }
  v9 = NtQuerySystemInformationEx(107LL, &v23, 4LL, Heap, v22, &v22);
  v21 = v9;
  if ( v9 >= 0 )
  {
    Args = 0;
    v25 = 0;
    for ( i = 0; ; ++i )
    {
      v26 = i;
      if ( i >= *(unsigned __int16 *)(Heap + 10) )
        break;
      Args += *(unsigned __int8 *)(Heap + 48LL * i + 33);
      v25 = Args;
    }
    v9 = RtlStringCbPrintfExW(Src, 0, (wchar_t *)L"%u", Args);
    v21 = v9;
    if ( v9 >= 0 )
    {
      Buffer = Src;
      v13 = (v27 - (__int64)Src) >> 1;
      goto LABEL_10;
    }
  }
LABEL_28:
  if ( v20 )
    RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( Heap )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v24);
    return v21;
  }
  return (unsigned int)v9;
}
