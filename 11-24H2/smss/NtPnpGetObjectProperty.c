/*
 * XREFs of NtPnpGetObjectProperty @ 0x14001E870
 * Callers:
 *     NtPnpGetDeviceInterfaceList @ 0x14001E410 (NtPnpGetDeviceInterfaceList.c)
 * Callees:
 *     NtPnpInitializeInputPropertyData @ 0x14001EA04 (NtPnpInitializeInputPropertyData.c)
 *     memcpy_0 @ 0x14001EF87 (memcpy_0.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall NtPnpGetObjectProperty(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        void *a6,
        unsigned int *a7)
{
  unsigned int v11; // r15d
  __int64 v12; // rcx
  NTSTATUS v13; // edi
  ULONG OutputBufferLength; // edi
  _DWORD *OutputBuffer; // rax
  _DWORD *v16; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE InputBuffer[80]; // [rsp+60h] [rbp-98h] BYREF

  memset_0(InputBuffer, 0, 0x48uLL);
  v11 = *a7;
  IoStatusBlock = 0LL;
  v13 = NtPnpInitializeInputPropertyData(v12, a1, a2, a3, a4);
  if ( v13 >= 0 )
  {
    OutputBufferLength = *a7 + 20;
    OutputBuffer = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, OutputBufferLength);
    v16 = OutputBuffer;
    if ( OutputBuffer )
    {
      v13 = NtDeviceIoControlFile(
              NtPnpDeviceApiDriverHandle,
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              0x470813u,
              InputBuffer,
              0x48u,
              OutputBuffer,
              OutputBufferLength);
      if ( v13 >= 0 )
      {
        *a7 = v16[2];
        *a5 = v16[3];
        v13 = v16[1];
        if ( v13 >= 0 )
        {
          if ( v16[2] > v11 )
            v13 = -1073741789;
          else
            memcpy_0(a6, v16 + 4, (unsigned int)v16[2]);
        }
      }
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v16);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v13;
}
