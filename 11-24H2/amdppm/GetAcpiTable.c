/*
 * XREFs of GetAcpiTable @ 0x14002E584
 * Callers:
 *     CollectAcpiBiosInfo @ 0x1400435E4 (CollectAcpiBiosInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     memmove @ 0x14000E480 (memmove.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall GetAcpiTable(ULONG Handle, ULONG Signature, PCSTR OemId, PCSTR OemTableId)
{
  _QWORD *v4; // r15
  NTSTATUS v5; // ebx
  unsigned int *Pool2; // rax
  unsigned int *v7; // rdi
  size_t v8; // r14
  void *v9; // rax
  void *v10; // rsi
  ULONG ReturnLength; // [rsp+20h] [rbp-30h] BYREF
  _DWORD SystemInformation[6]; // [rsp+28h] [rbp-28h] BYREF

  SystemInformation[4] = 0;
  SystemInformation[3] = 0;
  ReturnLength = 0;
  v4 = *(_QWORD **)&Signature;
  SystemInformation[1] = 1;
  SystemInformation[0] = 1094930505;
  SystemInformation[2] = 1346584902;
  if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, (ULONG)20, &ReturnLength) == -1073741789 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, (unsigned int)ReturnLength, 1919119952LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1094930505;
      Pool2[1] = 1;
      Pool2[2] = 1346584902;
      Pool2[3] = ReturnLength - 16;
      v5 = ZwQuerySystemInformation(SystemFirmwareTableInformation, Pool2, ReturnLength, &ReturnLength);
      if ( v5 < 0 )
      {
        v5 = -1073741823;
      }
      else
      {
        v8 = v7[3];
        v9 = (void *)ExAllocatePool2(256LL, v8, 1919119952LL);
        v10 = v9;
        if ( v9 )
        {
          memmove(v9, v7 + 4, v8);
          *v4 = v10;
        }
        else
        {
          v5 = -1073741670;
        }
      }
      ExFreePoolWithTag(v7, (ULONG)1919119952);
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741823;
  }
  return (PVOID)(unsigned int)v5;
}
