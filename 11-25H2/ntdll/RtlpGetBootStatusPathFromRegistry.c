/*
 * XREFs of RtlpGetBootStatusPathFromRegistry @ 0x18013FEA4
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x18013F990 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpGetBootStatusPathFromRegistry(_QWORD *a1)
{
  int v2; // ebx
  int v3; // eax
  __int64 Heap; // rdi
  __int64 v5; // r9
  void *v6; // rax
  void *v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]
  __int128 v15; // [rsp+60h] [rbp-10h]
  unsigned int v16; // [rsp+A8h] [rbp+38h] BYREF
  int v17; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+48h] BYREF

  v17 = 0;
  v16 = 0;
  v14 = 0;
  Handle = 0LL;
  v10[1] = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  v11 = 0LL;
  p_DestinationString = &DestinationString;
  v10[0] = 48;
  v13 = 64;
  v15 = 0LL;
  v2 = NtOpenKey(&Handle, 131097LL, v10);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OsBootstatPath");
    v3 = NtQueryValueKey(Handle, &DestinationString, 2LL, 0LL, 0, &v16);
    v2 = v3;
    if ( v3 == -1073741789 )
    {
      Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v16);
      if ( Heap )
      {
        v2 = NtQueryValueKey(Handle, &DestinationString, 2LL, Heap, v16, &v17);
        if ( v2 >= 0 )
        {
          v6 = (void *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, *(unsigned int *)(Heap + 8));
          v7 = v6;
          if ( v6 )
          {
            memmove(v6, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
            *a1 = v7;
          }
          else
          {
            v2 = -1073741801;
          }
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v5);
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
