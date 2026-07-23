/*
 * XREFs of RtlpNtQueryValueKey @ 0x1800EDEF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpNtQueryValueKey(HANDLE KeyHandle, _DWORD *a2, void *a3, int *a4)
{
  int v4; // eax
  _DWORD *Heap; // rax
  _DWORD *v10; // rbx
  NTSTATUS v11; // eax
  int v12; // edi
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-30h] BYREF
  ULONG Length; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  ValueName = 0LL;
  if ( a4 )
    v4 = *a4;
  Length = v4 + 12;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v4 + 12));
  v10 = Heap;
  if ( Heap )
  {
    v11 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &Length);
    if ( v11 == -1073741772 )
    {
      v12 = 0;
      v10[2] = 0;
      v10[1] = 0;
    }
    else
    {
      v12 = v11;
      if ( v11 < 0 && v11 != -2147483643 )
      {
LABEL_13:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
        return (unsigned int)v12;
      }
    }
    if ( a4 )
      *a4 = v10[2];
    if ( a2 )
      *a2 = v10[1];
    if ( v12 >= 0 )
    {
      if ( a3 )
        memmove(a3, v10 + 3, (unsigned int)v10[2]);
    }
    goto LABEL_13;
  }
  return 3221225626LL;
}
