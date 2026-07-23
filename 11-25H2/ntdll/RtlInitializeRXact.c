/*
 * XREFs of RtlInitializeRXact @ 0x180108C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RXactpCommit @ 0x180109178 (RXactpCommit.c)
 *     RtlAbortRXact @ 0x180109340 (RtlAbortRXact.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     ZwCreateKey @ 0x1801635C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 *     NtDeleteKey @ 0x180164D90 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x180164DF0 (ZwDeleteValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __fastcall RtlInitializeRXact(void *a1, char a2, PVOID *a3)
{
  unsigned int v5; // r14d
  size_t v7; // rax
  NTSTATUS result; // eax
  _QWORD *Heap; // rax
  HANDLE v10; // rbx
  unsigned int *v11; // rax
  unsigned int *v12; // rsi
  NTSTATUS v13; // eax
  unsigned int *v14; // rcx
  NTSTATUS v15; // ebx
  size_t v16; // rax
  unsigned int *v17; // rbx
  NTSTATUS v18; // esi
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Disposition; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG Length; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING v23; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v24[2]; // [rsp+68h] [rbp-98h] BYREF
  int v25; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v26; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING v27; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING ValueName; // [rsp+B8h] [rbp-48h] BYREF
  __int64 Data; // [rsp+C8h] [rbp-38h] BYREF
  int v31; // [rsp+D0h] [rbp-30h]
  char KeyValueInformation[128]; // [rsp+E0h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Data = 0LL;
  v5 = 12;
  v31 = 0;
  Disposition = 0;
  ResultLength = 0;
  *(_DWORD *)(&v23.MaximumLength + 1) = 0;
  *(_QWORD *)&v27.Length = 0LL;
  v27.Buffer = 0LL;
  v25 = 0;
  v26 = L"RXACT";
  v7 = 2 * wcslen(L"RXACT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 192;
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  v24[0] = v7;
  v24[1] = v7 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v24;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x3001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( result < 0 )
    return result;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
  *a3 = Heap;
  if ( !Heap )
  {
    NtDeleteKey(KeyHandle);
    NtClose(KeyHandle);
    return -1073741801;
  }
  Heap[1] = KeyHandle;
  *Heap = a1;
  *((_BYTE *)Heap + 16) = 1;
  Heap[3] = 0LL;
  if ( Disposition == 1 )
  {
    LODWORD(Data) = 1;
    v15 = ZwSetValueKey(KeyHandle, &v27, 0, 0, &Data, 0xCu);
    if ( v15 >= 0 )
      return 1073741828;
    NtDeleteKey(KeyHandle);
    goto LABEL_12;
  }
  v10 = KeyHandle;
  Length = 24;
  ValueName = 0LL;
  v11 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
  v12 = v11;
  if ( !v11 )
  {
    v15 = -1073741670;
    goto LABEL_12;
  }
  v13 = NtQueryValueKey(v10, &ValueName, KeyValuePartialInformation, v11, Length, &Length);
  v14 = v12 + 2;
  if ( v13 == -1073741772 )
  {
    v15 = 0;
    *v14 = 0;
    v12[1] = 0;
  }
  else
  {
    v15 = v13;
    if ( v13 < 0 && v13 != -2147483643 )
      goto LABEL_11;
  }
  v5 = *v14;
  if ( v15 >= 0 )
    memmove(&Data, v12 + 3, v5);
LABEL_11:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  if ( v15 < 0 )
  {
LABEL_12:
    NtClose(KeyHandle);
LABEL_13:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a3);
    return v15;
  }
  if ( v5 != 12 || (_DWORD)Data != 1 )
  {
    v15 = -1073741736;
    goto LABEL_12;
  }
  *(_DWORD *)(&v23.MaximumLength + 1) = 0;
  v23.Buffer = (wchar_t *)L"Log";
  v16 = 2 * wcslen(L"Log");
  if ( v16 >= 0xFFFE )
    LOWORD(v16) = -4;
  v23.Length = v16;
  v23.MaximumLength = v16 + 2;
  if ( NtQueryValueKey(KeyHandle, &v23, KeyValueBasicInformation, KeyValueInformation, 0x80u, &ResultLength) < 0 )
    return 0;
  if ( !a2 )
    return -2147483624;
  result = NtQueryValueKey(KeyHandle, &v23, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( result == -1073741789 )
  {
    v17 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ResultLength);
    if ( v17 )
    {
      v18 = NtQueryValueKey(KeyHandle, &v23, KeyValueFullInformation, v17, ResultLength, &ResultLength);
      if ( v18 >= 0 )
      {
        *((_QWORD *)*a3 + 3) = (char *)v17 + v17[2];
        *((_BYTE *)*a3 + 16) = 0;
        v18 = RXactpCommit(*a3);
        if ( v18 >= 0 )
        {
          ZwDeleteValueKey(KeyHandle, &v23);
          *((_QWORD *)*a3 + 3) = v17;
          return RtlAbortRXact(*a3);
        }
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
      v15 = v18;
      goto LABEL_13;
    }
    return -1073741801;
  }
  return result;
}
