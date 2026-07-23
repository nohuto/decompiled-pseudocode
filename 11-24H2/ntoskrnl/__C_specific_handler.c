/*
 * XREFs of __C_specific_handler @ 0x1404F9000
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x1406A6884 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 *     KeCheckStackAndTargetAddress @ 0x14042A370 (KeCheckStackAndTargetAddress.c)
 *     _NLG_Notify @ 0x1404FB500 (_NLG_Notify.c)
 *     __NLG_Return2 @ 0x1404FB530 (__NLG_Return2.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  DWORD64 ImageBase; // r15
  unsigned __int64 v9; // rbp
  DWORD *HandlerData; // rbx
  DWORD ScopeIndex; // edi
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v15; // rsi
  DWORD i; // ecx
  __int64 v17; // rcx
  DWORD v18; // r8d
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF

  KeCheckStackAndTargetAddress(ContextRecord->Rip, ContextRecord->Rsp);
  ImageBase = DispatcherContext->ImageBase;
  v9 = DispatcherContext->ControlPc - ImageBase;
  HandlerData = (DWORD *)DispatcherContext->HandlerData;
  ScopeIndex = DispatcherContext->ScopeIndex;
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    v15 = DispatcherContext->TargetIp - ImageBase;
    while ( 1 )
    {
      v18 = *HandlerData;
      if ( ScopeIndex >= *HandlerData )
        break;
      if ( v9 >= HandlerData[4 * ScopeIndex + 1] && v9 < HandlerData[4 * ScopeIndex + 2] )
      {
        if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
        {
          for ( i = 0; i < v18; ++i )
          {
            if ( v15 >= HandlerData[4 * i + 1]
              && v15 < HandlerData[4 * i + 2]
              && HandlerData[4 * i + 4] == HandlerData[4 * ScopeIndex + 4]
              && HandlerData[4 * i + 3] == HandlerData[4 * ScopeIndex + 3] )
            {
              break;
            }
          }
          if ( i != *HandlerData )
            return 1;
        }
        v17 = HandlerData[4 * ScopeIndex + 4];
        if ( (_DWORD)v17 )
        {
          if ( v15 == v17 )
            return 1;
        }
        else
        {
          DispatcherContext->ScopeIndex = ScopeIndex + 1;
          LODWORD(v17) = 1;
          ((void (__fastcall *)(__int64, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(v17, EstablisherFrame);
        }
      }
      ++ScopeIndex;
    }
  }
  else
  {
    v19[0] = ExceptionRecord;
    v19[1] = ContextRecord;
    while ( ScopeIndex < *HandlerData )
    {
      if ( v9 >= HandlerData[4 * ScopeIndex + 1]
        && v9 < HandlerData[4 * ScopeIndex + 2]
        && HandlerData[4 * ScopeIndex + 4] )
      {
        v12 = HandlerData[4 * ScopeIndex + 3];
        if ( (_DWORD)v12 == 1 )
          goto LABEL_9;
        v13 = ((__int64 (__fastcall *)(_QWORD *, void *))(ImageBase + v12))(v19, EstablisherFrame);
        if ( v13 < 0 )
          return 0;
        if ( v13 > 0 )
        {
LABEL_9:
          NLG_Notify(ImageBase + HandlerData[4 * ScopeIndex + 4], EstablisherFrame, 1LL);
          RtlUnwindEx(
            EstablisherFrame,
            (PVOID)(ImageBase + HandlerData[4 * ScopeIndex + 4]),
            ExceptionRecord,
            (PVOID)ExceptionRecord->ExceptionCode,
            DispatcherContext->ContextRecord,
            DispatcherContext->HistoryTable);
          _NLG_Return2();
        }
      }
      ++ScopeIndex;
    }
  }
  return 1;
}
