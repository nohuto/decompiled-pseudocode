/*
 * XREFs of sub_1400294F4 @ 0x1400294F4
 * Callers:
 *     sub_140049A7C @ 0x140049A7C (sub_140049A7C.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010380 @ 0x140010380 (sub_140010380.c)
 */

__int64 __fastcall sub_1400294F4(__int64 a1, char **a2)
{
  NTSTATUS v3; // ebx
  char *Pool2; // rax
  char *v5; // rdi
  unsigned __int64 v6; // r14
  char *v7; // rax
  char *v8; // rsi
  ULONG ReturnLength; // [rsp+20h] [rbp-30h] BYREF
  _DWORD SystemInformation[6]; // [rsp+28h] [rbp-28h] BYREF

  SystemInformation[4] = 0;
  SystemInformation[3] = 0;
  ReturnLength = 0;
  SystemInformation[1] = 1;
  SystemInformation[0] = 1094930505;
  SystemInformation[2] = 1346584902;
  if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength) == -1073741789 )
  {
    Pool2 = (char *)ExAllocatePool2(256LL, ReturnLength, 1919119952LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1094930505;
      *((_DWORD *)Pool2 + 1) = 1;
      *((_DWORD *)Pool2 + 2) = 1346584902;
      *((_DWORD *)Pool2 + 3) = ReturnLength - 16;
      v3 = ZwQuerySystemInformation(SystemFirmwareTableInformation, Pool2, ReturnLength, &ReturnLength);
      if ( v3 < 0 )
      {
        v3 = -1073741823;
      }
      else
      {
        v6 = *((unsigned int *)v5 + 3);
        v7 = (char *)ExAllocatePool2(256LL, v6, 1919119952LL);
        v8 = v7;
        if ( v7 )
        {
          sub_140010380(v7, v5 + 16, v6);
          *a2 = v8;
        }
        else
        {
          v3 = -1073741670;
        }
      }
      ExFreePoolWithTag(v5, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
