/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1401C1AE8
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1401C1C54 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401C1C98 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // [rsp+40h] [rbp-38h]
  unsigned int v12; // [rsp+88h] [rbp+10h] BYREF
  __int64 ProcessImageFileName; // [rsp+90h] [rbp+18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 2236LL) & 0x20) == 0 )
  {
    v3 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
    v11 = v3;
    v4 = v3;
    LOBYTE(v4) = v3 & 0xF;
    if ( (v3 & 0xF) == 2 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
      if ( CurrentProcessWin32Process )
      {
        v4 = -*(_QWORD *)CurrentProcessWin32Process;
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      }
      v6 = *(_QWORD *)(CurrentProcessWin32Process + 328);
      while ( v6 )
      {
        v4 = **(unsigned int **)(v6 + 520);
        if ( (v4 & 0x20000000) != 0 )
        {
          v3 = 128;
          break;
        }
        v6 = *(_QWORD *)(v6 + 704);
        v3 = v11;
      }
    }
    if ( (unsigned int)dword_140398BB8 > 5
      && (qword_140398BC8 & 0x400000000000LL) != 0
      && (qword_140398BD0 & 0x400000000000LL) == qword_140398BD0 )
    {
      v12 = v3;
      v7 = PsGetCurrentProcessWin32Process(v4);
      if ( v7 )
        v7 &= -(__int64)(*(_QWORD *)v7 != 0LL);
      ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)v7);
      v14 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v8,
        (unsigned int)&unk_1403684B0,
        v9,
        v10,
        (__int64)&v14,
        (__int64)&ProcessImageFileName,
        (__int64)&v12);
    }
  }
}
