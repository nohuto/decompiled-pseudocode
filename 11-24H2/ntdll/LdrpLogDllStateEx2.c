/*
 * XREFs of LdrpLogDllStateEx2 @ 0x180084174
 * Callers:
 *     LdrGetDllHandle @ 0x18000A780 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x18000A960 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x180059200 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x180065A30 (LdrpInitializeDllPath.c)
 *     LdrpGetDllPath @ 0x180083EF0 (LdrpGetDllPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlCreateUnicodeString @ 0x180028050 (RtlCreateUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpLogDllStateEx2(__int64 a1, const wchar_t *a2, const wchar_t *a3, unsigned __int16 a4)
{
  struct _PEB *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  char UnicodeString; // bl
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int128 v13; // [rsp+40h] [rbp-18h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  LODWORD(v7) = (unsigned int)RtlGetCurrentServiceSessionId();
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
      LODWORD(v7) = (unsigned int)RtlGetCurrentServiceSessionId();
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
          a2 = (const wchar_t *)&unk_18017EEFC;
        UnicodeString = RtlCreateUnicodeString((__int64)&v13, a2);
        LOBYTE(v7) = RtlCreateUnicodeString((__int64)&v12, a3);
        if ( UnicodeString )
        {
          if ( (_BYTE)v7 )
          {
            LOBYTE(v7) = LdrpLogEtwEvent(a4, 0, 0, 0, (__int64)&v12, (__int64)&v13);
            if ( *((_QWORD *)&v12 + 1) )
              LOBYTE(v7) = RtlpSysVolFree(*((__int64 *)&v12 + 1));
          }
          if ( *((_QWORD *)&v13 + 1) )
            LOBYTE(v7) = RtlpSysVolFree(*((__int64 *)&v13 + 1));
        }
      }
    }
  }
  return (char)v7;
}
