/*
 * XREFs of RtlpGetBootStatusPathFromRegistry @ 0x18013E774
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x18013E260 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpGetBootStatusPathFromRegistry(_QWORD *a1)
{
  int v2; // ebx
  int v3; // eax
  unsigned __int64 Heap; // rdi
  void *v5; // rax
  void *v6; // rsi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]
  __int128 v14; // [rsp+60h] [rbp-10h]
  unsigned int v15; // [rsp+A8h] [rbp+38h] BYREF
  int v16; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+48h] BYREF

  v16 = 0;
  v15 = 0;
  v13 = 0;
  Handle = 0LL;
  v9[1] = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  v10 = 0LL;
  p_DestinationString = &DestinationString;
  v9[0] = 48;
  v12 = 64;
  v14 = 0LL;
  v2 = NtOpenKey(&Handle, 131097LL, v9);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OsBootstatPath");
    v3 = NtQueryValueKey(Handle, &DestinationString, 2LL, 0LL, 0, &v15);
    v2 = v3;
    if ( v3 == -1073741789 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
      if ( Heap )
      {
        v2 = NtQueryValueKey(Handle, &DestinationString, 2LL, Heap, v15, &v16);
        if ( v2 >= 0 )
        {
          v5 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(unsigned int *)(Heap + 8));
          v6 = v5;
          if ( v5 )
          {
            memmove(v5, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
            *a1 = v6;
          }
          else
          {
            v2 = -1073741801;
          }
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v2 = -1073741801;
      }
    }
    else if ( v3 >= 0 )
    {
      v2 = -1073741823;
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v2;
}
