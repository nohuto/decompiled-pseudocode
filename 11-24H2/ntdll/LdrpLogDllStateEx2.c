/*
 * XREFs of LdrpLogDllStateEx2 @ 0x180006024
 * Callers:
 *     LdrpGetDllPath @ 0x180005DA0 (LdrpGetDllPath.c)
 *     LdrGetDllHandle @ 0x180037180 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x180037360 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x18006EDE0 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x1800AD900 (LdrpInitializeDllPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     RtlCreateUnicodeString @ 0x180054A50 (RtlCreateUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 */

char __fastcall LdrpLogDllStateEx2(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned __int16 a4)
{
  struct _PEB *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  BOOLEAN v10; // bl
  _UNICODE_STRING v12; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v12 = 0LL;
  LODWORD(v7) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v7 )
  {
    v7 = NtCurrentPeb();
    v8 = (__int64)v7->SharedData + 554;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    v7 = NtCurrentPeb();
    if ( (v7->TracingFlags & 4) != 0 )
    {
      LODWORD(v7) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v7 )
      {
        v7 = NtCurrentPeb();
        v9 = (__int64)v7->SharedData + 555;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
      {
        if ( !a2 )
          a2 = &SourceString;
        v10 = RtlCreateUnicodeString(&DestinationString, a2);
        LOBYTE(v7) = RtlCreateUnicodeString(&v12, a3);
        if ( v10 )
        {
          if ( (_BYTE)v7 )
          {
            LOBYTE(v7) = LdrpLogEtwEvent(a4, 0, 0, 0, (__int64)&v12, (__int64)&DestinationString);
            if ( v12.Buffer )
              LOBYTE(v7) = RtlpSysVolFree(v12.Buffer);
          }
          if ( DestinationString.Buffer )
            LOBYTE(v7) = RtlpSysVolFree(DestinationString.Buffer);
        }
      }
    }
  }
  return (char)v7;
}
