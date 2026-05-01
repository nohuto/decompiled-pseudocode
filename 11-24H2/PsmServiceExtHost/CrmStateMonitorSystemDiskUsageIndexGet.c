/*
 * XREFs of CrmStateMonitorSystemDiskUsageIndexGet @ 0x18007AB50
 * Callers:
 *     CrmStateMonitorSystemDiskUsageStart @ 0x18007AD40 (CrmStateMonitorSystemDiskUsageStart.c)
 * Callees:
 *     StringCbPrintfW @ 0x18002D818 (StringCbPrintfW.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageIndexGet(_DWORD *a1)
{
  unsigned __int16 *NtSystemRoot; // rax
  HANDLE FileW; // rdi
  DWORD LastError; // ebx
  signed int v5; // eax
  DWORD OutBuffer; // [rsp+48h] [rbp-C0h] BYREF
  DWORD OutBuffer_4; // [rsp+4Ch] [rbp-BCh] BYREF
  __int128 OutBuffer_8; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A8h]
  int v11; // [rsp+68h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+78h] [rbp-90h] BYREF
  UUID *v13; // [rsp+98h] [rbp-70h]
  int v14; // [rsp+A0h] [rbp-68h]
  int v15; // [rsp+A4h] [rbp-64h]
  DWORD *p_OutBuffer_4; // [rsp+A8h] [rbp-60h]
  int v17; // [rsp+B0h] [rbp-58h]
  int v18; // [rsp+B4h] [rbp-54h]
  wchar_t pszDest[264]; // [rsp+B8h] [rbp-50h] BYREF

  OutBuffer = 0;
  OutBuffer_8 = 0LL;
  v10 = 0LL;
  v11 = 0;
  NtSystemRoot = (unsigned __int16 *)RtlGetNtSystemRoot();
  StringCbPrintfW(pszDest, 0x208uLL, L"\\\\.\\%wc:", *NtSystemRoot);
  FileW = CreateFileW(pszDest, 0x100080u, 7u, 0LL, 3u, 0x80u, 0LL);
  if ( FileW == (HANDLE)-1LL )
  {
    if ( (int)GetLastError() <= 0 )
    {
      LastError = GetLastError();
      goto LABEL_9;
    }
    LOWORD(v5) = GetLastError();
LABEL_8:
    LastError = (unsigned __int16)v5 | 0xC0070000;
    goto LABEL_9;
  }
  if ( DeviceIoControl(FileW, 0x560000u, 0LL, 0, &OutBuffer_8, 0x20u, &OutBuffer, 0LL)
    || (v5 = GetLastError(), LastError = v5, v5 == 234) )
  {
    LastError = 0;
    *a1 = DWORD2(OutBuffer_8);
LABEL_15:
    CloseHandle(FileW);
    return LastError;
  }
  if ( v5 > 0 )
    goto LABEL_8;
LABEL_9:
  if ( (LastError & 0x80000000) != 0 && (unsigned int)dword_1800E82E8 > 5 )
  {
    v15 = 0;
    v18 = 0;
    v13 = &Uuid;
    v17 = 4;
    p_OutBuffer_4 = &OutBuffer_4;
    v14 = 16;
    OutBuffer_4 = LastError;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E82E8, byte_1800D2F3E, 0LL, 0LL, 4u, &v12);
  }
  if ( FileW != (HANDLE)-1LL )
    goto LABEL_15;
  return LastError;
}
