/*
 * XREFs of ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x140038794
 * Callers:
 *     ?StartALPCHandleServer@@YAJKPEAPEAVHandleSendReceiveServer@@PEAPEAG@Z @ 0x1400386AC (-StartALPCHandleServer@@YAJKPEAPEAVHandleSendReceiveServer@@PEAPEAG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140023938 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?SecurityCreateSecurityDescriptor@HandleSendReceiveServer@@AEAAJPEAPEAX@Z @ 0x140038B04 (-SecurityCreateSecurityDescriptor@HandleSendReceiveServer@@AEAAJPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 */

__int64 __fastcall HandleSendReceiveServer::Initialize(HandleSendReceiveServer *this, unsigned __int16 **a2)
{
  unsigned __int16 **v2; // rsi
  int v4; // r12d
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rdi
  ULONG v7; // eax
  ULONG v8; // r14d
  int v9; // ebx
  HandleSendReceiveServer *v10; // rcx
  int inited; // esi
  HLOCAL v12; // r15
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  int v16; // r12d
  ULONG v17; // eax
  char *Thread; // rax
  signed int v19; // eax
  signed int LastError; // eax
  LPDWORD lpThreadId; // [rsp+28h] [rbp-B1h]
  __int64 v23; // [rsp+30h] [rbp-A9h] BYREF
  int v24; // [rsp+38h] [rbp-A1h]
  int v25; // [rsp+3Ch] [rbp-9Dh]
  HLOCAL hMem; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int16 **v27; // [rsp+48h] [rbp-91h]
  __int128 v28; // [rsp+50h] [rbp-89h] BYREF
  __int128 v29; // [rsp+60h] [rbp-79h]
  __int128 v30; // [rsp+70h] [rbp-69h]
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v32[16]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-29h]

  v27 = a2;
  v2 = a2;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  memset_0(v32, 0, 0x48uLL);
  hMem = 0LL;
  DestinationString = 0LL;
  v4 = 0;
  v5 = (unsigned __int16 *)CoTaskMemAlloc(0x80uLL);
  v6 = v5;
  if ( v5 )
  {
    *v5 = 0;
    HIDWORD(v23) = MEMORY[0x7FFE0320];
    do
    {
      v7 = RtlRandomEx((PULONG)&v23 + 1);
      v8 = v7;
    }
    while ( !v7 );
    v9 = StringCchPrintfW(v6, 64LL, L"%ws%ws%ld", L"\\BaseNamedObjects\\", L"AudioEngineDuplicateHandleApiPort", v7);
    if ( v9 >= 0 )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, v6);
      if ( inited < 0 )
        goto LABEL_32;
      v9 = HandleSendReceiveServer::SecurityCreateSecurityDescriptor(v10, &hMem);
      if ( v9 >= 0 )
      {
        *((_QWORD *)&v28 + 1) = 0LL;
        v12 = hMem;
        *(_QWORD *)&v29 = &DestinationString;
        LODWORD(v28) = 48;
        v13 = 3;
        DWORD2(v29) = 64;
        v30 = (unsigned __int64)hMem;
        v33 = 48LL;
        while ( 1 )
        {
          v24 = v13 - 1;
          v14 = NtAlpcCreatePort((char *)this + 8, &v28, v32);
          inited = v14;
          if ( v14 != 0x40000000 && v14 != -1073741771 )
            break;
          v15 = v4 == -1;
          v16 = v4 + 1;
          LODWORD(v23) = 0;
          v25 = v16;
          if ( v15 )
          {
            LODWORD(v23) = MEMORY[0x7FFE0320];
            do
              v17 = RtlRandomEx((PULONG)&v23);
            while ( !v17 );
            v12 = hMem;
            v8 = v17;
          }
          else
          {
            if ( !v8 )
            {
              v9 = -2147024809;
              break;
            }
            v17 = v16 + v8;
          }
          LODWORD(lpThreadId) = v17;
          v9 = StringCchPrintfW(
                 v6,
                 64LL,
                 L"%ws%ws%ld",
                 L"\\BaseNamedObjects\\",
                 L"AudioEngineDuplicateHandleApiPort",
                 lpThreadId,
                 v23);
          if ( v9 < 0 )
            break;
          if ( RtlInitUnicodeStringEx(&DestinationString, v6) < 0 )
            break;
          *((_QWORD *)&v28 + 1) = 0LL;
          *(_QWORD *)&v29 = &DestinationString;
          v13 = v24;
          LODWORD(v28) = 48;
          DWORD2(v29) = 64;
          v30 = (unsigned __int64)v12;
          if ( v24 <= 0 )
            break;
          v4 = v25;
        }
        LocalFree(v12);
        if ( inited < 0 )
        {
LABEL_32:
          RtlSetLastWin32ErrorAndNtStatusFromNtStatus(inited);
          LastError = GetLastError();
          v9 = LastError;
          if ( LastError > 0 )
            v9 = (unsigned __int16)LastError | 0x80070000;
          CoTaskMemFree(v6);
          v6 = 0LL;
        }
      }
      v2 = v27;
    }
    if ( v9 < 0 )
      goto LABEL_13;
    Thread = (char *)CreateThread(0LL, 0LL, HandleSendReceiveServer::AeServerApiProc, this, 0, 0LL);
    *((_QWORD *)this + 5) = Thread;
    if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *v2 = v6;
      return (unsigned int)v9;
    }
    v19 = GetLastError();
    v9 = v19;
    if ( v19 > 0 )
      v9 = (unsigned __int16)v19 | 0x80070000;
    if ( v9 < 0 )
    {
LABEL_13:
      if ( v6 )
        CoTaskMemFree(v6);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
