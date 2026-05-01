/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x1800403A8
 * Callers:
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800400B4 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     memset_0 @ 0x180002E14 (memset_0.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003F7B8 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 */

__int64 __fastcall Common::GetProcessWorkingDirectoryByPID(
        DWORD dwProcessId,
        __int64 a2,
        unsigned int *a3,
        unsigned __int16 *a4)
{
  HANDLE v7; // rdi
  signed int LastError; // eax
  int v9; // ebx
  NTSTATUS InformationProcess; // eax
  signed int v12; // eax
  signed int v13; // eax
  SIZE_T v14; // r9
  signed int v15; // eax
  _OWORD ProcessInformation[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v17[56]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v18; // [rsp+A8h] [rbp-58h]
  LPCVOID v19; // [rsp+B0h] [rbp-50h]
  _BYTE Buffer[32]; // [rsp+4C0h] [rbp+3C0h] BYREF
  LPCVOID lpBaseAddress; // [rsp+4E0h] [rbp+3E0h]

  memset_0(Buffer, 0, 0x7D0uLL);
  memset_0(v17, 0, 0x448uLL);
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  if ( a3 && a4 )
  {
    *(_WORD *)a3 = 0;
    v7 = OpenProcess(0x1010u, 0, dwProcessId);
    if ( !v7 )
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError == 5 )
        return Common::GetProcessImageInfoByPID(dwProcessId, 0LL, 0LL, a3, a4);
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
    InformationProcess = NtQueryInformationProcess(v7, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
    v9 = InformationProcess | 0x10000000;
    if ( InformationProcess >= 0 )
      v9 = 0;
    if ( v9 >= 0 )
    {
      if ( ReadProcessMemory(v7, *((LPCVOID *)&ProcessInformation[0] + 1), Buffer, 0x7D0uLL, 0LL) )
        goto LABEL_36;
      v12 = GetLastError();
      v9 = v12;
      if ( v12 > 0 )
        v9 = (unsigned __int16)v12 | 0x80070000;
      if ( v9 >= 0 )
      {
LABEL_36:
        if ( ReadProcessMemory(v7, lpBaseAddress, v17, 0x448uLL, 0LL) )
        {
          v9 = 0;
        }
        else
        {
          v13 = GetLastError();
          v9 = v13;
          if ( v13 > 0 )
            v9 = (unsigned __int16)v13 | 0x80070000;
          if ( v9 < 0 )
            goto LABEL_30;
        }
        if ( v19 )
        {
          v14 = 2LL * *(unsigned int *)a4;
          if ( v18 < v14 )
          {
            if ( ReadProcessMemory(v7, v19, a3, v14, 0LL) )
            {
              v9 = 0;
            }
            else
            {
              v15 = GetLastError();
              v9 = v15;
              if ( v15 > 0 )
                v9 = (unsigned __int16)v15 | 0x80070000;
            }
          }
          else
          {
            v9 = -2147024774;
          }
          *(_DWORD *)a4 = (v18 >> 1) + 1;
        }
      }
    }
LABEL_30:
    if ( v7 )
      CloseHandle(v7);
    return (unsigned int)v9;
  }
  return 2147500035LL;
}
