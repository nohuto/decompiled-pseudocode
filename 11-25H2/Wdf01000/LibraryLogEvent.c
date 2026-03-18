/*
 * XREFs of LibraryLogEvent @ 0x14008E914
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x14004F6F8 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     LibraryRegisterClient @ 0x140077460 (LibraryRegisterClient.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x14008E380 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 * Callees:
 *     memset @ 0x1400AC740 (memset.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

void __fastcall LibraryLogEvent(
        _DRIVER_OBJECT *DriverObject,
        int ErrorCode,
        int FinalStatus,
        wchar_t *ErrorInsertionString,
        void *RawDataBuf,
        unsigned __int16 RawDataLen)
{
  size_t v9; // rbp
  __int64 v10; // rax
  size_t v11; // r15
  _WORD *ErrorLogEntry; // rax
  _WORD *v13; // rbx

  v9 = 0LL;
  if ( ErrorInsertionString )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( ErrorInsertionString[v10] );
    v9 = 2 * v10 + 2;
  }
  v11 = v9 + RawDataLen + 48LL;
  if ( v11 <= 0xF0 )
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(DriverObject, (unsigned __int8)v9 + (unsigned __int8)RawDataLen + 48);
    v13 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      memset(ErrorLogEntry, 0, v11);
      v13[1] = RawDataLen;
      *((_DWORD *)v13 + 3) = ErrorCode;
      *((_DWORD *)v13 + 5) = FinalStatus;
      v13[2] = ErrorInsertionString != 0LL;
      v13[3] = RawDataLen + 40;
      if ( RawDataBuf )
        memmove(v13 + 20, RawDataBuf, RawDataLen);
      if ( ErrorInsertionString )
        memmove((char *)v13 + RawDataLen + 40, ErrorInsertionString, v9);
      IoWriteErrorLogEntry(v13);
    }
  }
}
