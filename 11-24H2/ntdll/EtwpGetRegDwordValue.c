/*
 * XREFs of EtwpGetRegDwordValue @ 0x180081BCC
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     StringCopyWorkerW @ 0x1801074CC (StringCopyWorkerW.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 */

__int64 __fastcall EtwpGetRegDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  wchar_t *Heap; // rsi
  size_t v5; // rax
  NTSTATUS v6; // ebx
  size_t v7; // rdx
  _DWORD *v8; // rdi
  size_t *v9; // r8
  const wchar_t *v10; // r9
  size_t v12; // rax
  size_t Length; // [rsp+20h] [rbp-60h]
  _WORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  int v15; // [rsp+34h] [rbp-4Ch]
  const wchar_t *v16; // [rsp+38h] [rbp-48h]
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp+38h] BYREF
  int v21; // [rsp+BCh] [rbp+3Ch]

  v21 = HIDWORD(a2);
  ResultLength = 0;
  KeyHandle = (HANDLE)-1LL;
  *(&ObjectAttributes.Length + 1) = 0;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( !Heap )
    return 3221225495LL;
  v15 = 0;
  v16 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control";
  v5 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v14[0] = v5;
  v14[1] = v5 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
  v6 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v8 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    if ( v8 )
    {
      StringCopyWorkerW(Heap, v7, v9, v10, Length);
      *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
      ValueName.Buffer = Heap;
      v12 = 2 * wcslen(Heap);
      if ( v12 >= 0xFFFE )
        LOWORD(v12) = -4;
      ValueName.Length = v12;
      ValueName.MaximumLength = v12 + 2;
      v6 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v8, 0x10u, &ResultLength);
      if ( v6 >= 0 )
        *a3 = v8[3];
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    }
    else
    {
      v6 = -1073741801;
    }
    NtClose(KeyHandle);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v6;
}
