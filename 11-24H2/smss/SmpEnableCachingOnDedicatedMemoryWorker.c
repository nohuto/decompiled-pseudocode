/*
 * XREFs of SmpEnableCachingOnDedicatedMemoryWorker @ 0x140010D7C
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000F110 (SmpAsyncMemoryConfiguration.c)
 *     SmpDedicatedMemoryCachingCallback @ 0x140010C70 (SmpDedicatedMemoryCachingCallback.c)
 * Callees:
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 SmpEnableCachingOnDedicatedMemoryWorker()
{
  HANDLE v0; // r14
  int v1; // ebx
  unsigned int *Heap; // rax
  unsigned int *v3; // rsi
  int v4; // eax
  unsigned int *v5; // rdi
  unsigned int *v6; // r15
  unsigned __int64 v7; // r12
  SIZE_T Size; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h]
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  __int128 KeyValueInformation; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v16[4]; // [rsp+80h] [rbp-80h] BYREF
  int v17; // [rsp+84h] [rbp-7Ch]
  int v18; // [rsp+88h] [rbp-78h]
  unsigned __int64 v19; // [rsp+B0h] [rbp-50h]

  ResultLength = 0;
  memset_0(v16, 0, 0xF0uLL);
  v13 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&ValueName.Length = 3932218LL;
  LODWORD(Size) = 0;
  ValueName.Buffer = L"DisableDedicatedMemoryCaching";
  v0 = 0LL;
  v10 = 0LL;
  KeyValueInformation = 0LL;
  if ( NtQueryValueKey(
         SmpMmKey,
         &ValueName,
         KeyValuePartialInformationAlign64,
         &KeyValueInformation,
         0x10u,
         &ResultLength) >= 0
    && (_DWORD)KeyValueInformation == 4
    && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x100000004LL )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    while ( 1 )
    {
      v1 = NtManagePartition(-2LL, 0LL, 9LL, &Size, 4);
      if ( v1 != -1073741789 )
        break;
      Heap = (unsigned int *)RtlAllocateHeap(
                               *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                               0,
                               (unsigned int)Size);
      v3 = Heap;
      if ( !Heap )
        return (unsigned int)-1073741670;
      v4 = NtManagePartition(-2LL, 0LL, 9LL, Heap, Size);
      v1 = v4;
      if ( v4 >= 0 )
      {
        v5 = v3;
        v6 = 0LL;
        v7 = 0LL;
        while ( *v5 )
        {
          *((_QWORD *)&v10 + 1) = 0x1F000300000000LL;
          Handle = 0LL;
          *(_QWORD *)&v10 = *((_QWORD *)v5 + 3);
          if ( (int)NtManagePartition(-2LL, 0LL, 10LL, &v10, 24) >= 0 )
          {
            memset_0(v16, 0, 0xF0uLL);
            v17 = -1;
            v18 = -1;
            v1 = NtManagePartition(Handle, 0LL, 0LL, v16, 240);
            NtClose(Handle);
            if ( v1 < 0 )
              goto LABEL_22;
            if ( v19 > v7 )
            {
              v7 = v19;
              v6 = v5;
            }
          }
          v5 = (unsigned int *)((char *)v5 + *v5);
        }
        if ( v6 )
        {
          Handle = 0LL;
          v10 = 0LL;
          *(_QWORD *)&v10 = *((_QWORD *)v6 + 3);
          HIDWORD(v10) = 2031619;
          v1 = NtManagePartition(-2LL, 0LL, 10LL, &v10, 24);
          if ( v1 >= 0 )
          {
            v0 = Handle;
            v13 = 4LL;
            v1 = NtManagePartition(Handle, 0LL, 6LL, &v13, 8);
            if ( v1 >= 0 )
              v1 = 0;
          }
        }
        else
        {
          v1 = -1073741275;
        }
LABEL_22:
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
        if ( v0 )
          NtClose(v0);
        return (unsigned int)v1;
      }
      if ( v4 != -1073741789 )
        goto LABEL_22;
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
    }
  }
  return (unsigned int)v1;
}
