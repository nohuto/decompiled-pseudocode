/*
 * XREFs of LdrpLogDllStateEx2 @ 0x1800AC504
 * Callers:
 *     LdrLoadDll @ 0x180014E40 (LdrLoadDll.c)
 *     LdrGetDllHandle @ 0x180049620 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x180049800 (LdrGetDllHandleEx.c)
 *     LdrpGetDllPath @ 0x1800AC280 (LdrpGetDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800D1140 (LdrpInitializeDllPath.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlCreateUnicodeString @ 0x180082430 (RtlCreateUnicodeString.c)
 */

char __fastcall LdrpLogDllStateEx2(__int64 a1, const WCHAR *a2, const WCHAR *a3, __int16 a4)
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
          a2 = &word_18017D3FC;
        v10 = RtlCreateUnicodeString(&DestinationString, a2);
        LOBYTE(v7) = RtlCreateUnicodeString(&v12, a3);
        if ( v10 )
        {
          if ( (_BYTE)v7 )
          {
            LOBYTE(v7) = LdrpLogEtwEvent(a4, 0LL, 0, 0, &v12.Length, &DestinationString.Length);
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
