/*
 * XREFs of CrmStateMonitorSystemDiskUsageIdleTimeGet @ 0x18002C9A0
 * Callers:
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x18006DAB0 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 * Callees:
 *     StringCbPrintfW @ 0x18002D818 (StringCbPrintfW.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageIdleTimeGet(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  HANDLE FileW; // rbx
  unsigned int LastError; // edi
  unsigned int v7; // [rsp+40h] [rbp-2D8h] BYREF
  __int64 InBuffer; // [rsp+48h] [rbp-2D0h] BYREF
  _OWORD OutBuffer[3]; // [rsp+50h] [rbp-2C8h] BYREF
  __int128 v10; // [rsp+80h] [rbp-298h]
  __int128 v11; // [rsp+90h] [rbp-288h]
  __int64 v12; // [rsp+A0h] [rbp-278h]
  char v13[32]; // [rsp+B0h] [rbp-268h] BYREF
  UUID *v14; // [rsp+D0h] [rbp-248h]
  __int64 v15; // [rsp+D8h] [rbp-240h]
  unsigned int *v16; // [rsp+E0h] [rbp-238h]
  __int64 v17; // [rsp+E8h] [rbp-230h]
  wchar_t pszDest[264]; // [rsp+F0h] [rbp-228h] BYREF

  v2 = *(unsigned int *)(a1 + 96);
  v12 = 0LL;
  InBuffer = 0LL;
  memset(OutBuffer, 0, sizeof(OutBuffer));
  v10 = 0LL;
  v11 = 0LL;
  StringCbPrintfW(pszDest, 0x208uLL, L"\\\\.\\PhysicalDrive%u", v2);
  FileW = CreateFileW(pszDest, 0, 3u, 0LL, 3u, 0, 0LL);
  if ( FileW == (HANDLE)-1LL )
  {
    if ( (int)GetLastError() > 0 )
    {
LABEL_10:
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
      goto LABEL_5;
    }
  }
  else
  {
    InBuffer = 8LL;
    if ( DeviceIoControl(FileW, 0x70224u, &InBuffer, 8u, OutBuffer, 0x58u, 0LL, 0LL) )
    {
      *a2 = *((_QWORD *)&v10 + 1);
      LastError = 0;
LABEL_7:
      CloseHandle(FileW);
      return LastError;
    }
    if ( (int)GetLastError() > 0 )
      goto LABEL_10;
  }
  LastError = GetLastError();
LABEL_5:
  if ( (LastError & 0x80000000) != 0 && (unsigned int)dword_1800E82E8 > 5 )
  {
    v15 = 16LL;
    v14 = &Uuid;
    v7 = LastError;
    v16 = &v7;
    v17 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D2CFA, 0LL, 0LL, 4, v13);
  }
  if ( FileW != (HANDLE)-1LL )
    goto LABEL_7;
  return LastError;
}
