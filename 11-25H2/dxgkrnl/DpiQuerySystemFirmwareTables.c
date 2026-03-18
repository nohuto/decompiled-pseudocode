/*
 * XREFs of DpiQuerySystemFirmwareTables @ 0x140243CF4
 * Callers:
 *     DpiEnumSystemFirmwareTables @ 0x140243330 (DpiEnumSystemFirmwareTables.c)
 *     DpiReadSystemFirmwareTable @ 0x140243F30 (DpiReadSystemFirmwareTable.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DpiQuerySystemFirmwareTables(int a1, int a2, int a3, unsigned int a4, void *a5, unsigned int *a6)
{
  _DWORD *Pool2; // rdi
  __int64 v11; // r9
  unsigned int v12; // ebx
  ULONG v13; // ebx
  NTSTATUS v14; // eax
  unsigned int v15; // eax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE SystemInformation[128]; // [rsp+30h] [rbp-B8h] BYREF

  Pool2 = SystemInformation;
  ReturnLength[0] = 0;
  if ( KeGetCurrentIrql() )
  {
    v12 = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4530;
  }
  else if ( a5 || !a4 )
  {
    if ( a6 )
    {
      v13 = a4 + 16;
      if ( a4 + 16 <= 0x80 || (Pool2 = (_DWORD *)ExAllocatePool2(256LL, v13, 1953656900LL, v11)) != 0LL )
      {
        Pool2[1] = a1;
        *Pool2 = a2;
        Pool2[2] = a3;
        Pool2[3] = a4;
        v14 = ZwQuerySystemInformation(SystemFirmwareTableInformation, Pool2, v13, ReturnLength);
        v12 = v14;
        if ( v14 < 0 )
        {
          if ( v14 == -1073741789 && ReturnLength[0] >= 0x10 )
          {
            *a6 = Pool2[3];
          }
          else
          {
            *a6 = 0;
            WdLogSingleEntry1(2LL, v14);
            WdLogGlobalForLineNumber = 4649;
          }
        }
        else
        {
          v15 = Pool2[3];
          *a6 = v15;
          if ( v15 <= a4 )
            a4 = v15;
          if ( a5 )
            memmove(a5, Pool2 + 4, a4);
        }
      }
      else
      {
        v12 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 4587;
      }
      if ( Pool2 != (_DWORD *)SystemInformation )
        ExFreePoolWithTag(Pool2, 0x74727044u);
    }
    else
    {
      v12 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 4563;
    }
  }
  else
  {
    v12 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4548;
  }
  return v12;
}
