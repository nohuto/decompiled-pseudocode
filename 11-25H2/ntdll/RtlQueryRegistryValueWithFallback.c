/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x180121CA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValueWithFallback(
        HANDLE PrimaryHandle,
        HANDLE FallbackHandle,
        PUNICODE_STRING ValueName,
        ULONG ValueLength,
        PULONG ValueType,
        PVOID ValueData,
        PULONG ResultLength)
{
  ULONG Length; // r15d
  ULONG *Heap; // rdi
  int v14; // ebx
  ULONG v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0;
  if ( __PAIR128__((unsigned __int64)PrimaryHandle, (unsigned __int64)FallbackHandle) == 0 )
    return -1073741811;
  if ( ValueLength >= 0xFFFFFFF0 )
    return -1073741675;
  Length = ValueLength + 16;
  Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ValueLength + 16);
  if ( Heap )
  {
    v14 = -1073741772;
    if ( !PrimaryHandle
      || (v14 = NtQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v15),
          v14 == -1073741772) )
    {
      if ( !FallbackHandle )
      {
LABEL_19:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v14;
      }
      v14 = NtQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v15);
    }
    if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
    {
      if ( ValueType )
        *ValueType = Heap[1];
      if ( v14 >= 0 )
      {
        if ( ValueLength < Heap[2] )
          v14 = -2147483643;
        else
          memmove(ValueData, Heap + 3, Heap[2]);
      }
      *ResultLength = Heap[2];
    }
    goto LABEL_19;
  }
  return -1073741801;
}
