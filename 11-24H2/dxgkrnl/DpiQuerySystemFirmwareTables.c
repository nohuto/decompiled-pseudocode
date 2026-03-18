/*
 * XREFs of DpiQuerySystemFirmwareTables @ 0x14024AB04
 * Callers:
 *     DpiEnumSystemFirmwareTables @ 0x14024A140 (DpiEnumSystemFirmwareTables.c)
 *     DpiReadSystemFirmwareTable @ 0x14024AD40 (DpiReadSystemFirmwareTable.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DpiQuerySystemFirmwareTables(int a1, int a2, int a3, unsigned int a4, void *a5, unsigned int *a6)
{
  _DWORD *Pool2; // rdi
  unsigned int v11; // ebx
  ULONG v12; // ebx
  NTSTATUS v13; // eax
  unsigned int v14; // eax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE SystemInformation[128]; // [rsp+30h] [rbp-B8h] BYREF

  Pool2 = SystemInformation;
  ReturnLength[0] = 0;
  if ( KeGetCurrentIrql() )
  {
    v11 = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4533;
  }
  else if ( a5 || !a4 )
  {
    if ( a6 )
    {
      v12 = a4 + 16;
      if ( a4 + 16 <= 0x80 || (Pool2 = (_DWORD *)ExAllocatePool2(256LL, v12, 1953656900LL)) != 0LL )
      {
        Pool2[1] = a1;
        *Pool2 = a2;
        Pool2[2] = a3;
        Pool2[3] = a4;
        v13 = ZwQuerySystemInformation(SystemFirmwareTableInformation, Pool2, v12, ReturnLength);
        v11 = v13;
        if ( v13 < 0 )
        {
          if ( v13 == -1073741789 && ReturnLength[0] >= 0x10 )
          {
            *a6 = Pool2[3];
          }
          else
          {
            *a6 = 0;
            WdLogSingleEntry1(2LL, v13);
            WdLogGlobalForLineNumber = 4652;
          }
        }
        else
        {
          v14 = Pool2[3];
          *a6 = v14;
          if ( v14 <= a4 )
            a4 = v14;
          if ( a5 )
            memmove(a5, Pool2 + 4, a4);
        }
      }
      else
      {
        v11 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 4590;
      }
      if ( Pool2 != (_DWORD *)SystemInformation )
        ExFreePoolWithTag(Pool2, 0x74727044u);
    }
    else
    {
      v11 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 4566;
    }
  }
  else
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4551;
  }
  return v11;
}
