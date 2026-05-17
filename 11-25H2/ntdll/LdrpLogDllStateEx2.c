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

char __fastcall LdrpLogDllStateEx2(__int64 a1, const wchar_t *a2, const wchar_t *a3, __int16 a4)
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
          a2 = (const wchar_t *)&unk_18017D3FC;
        UnicodeString = RtlCreateUnicodeString((__int64)&v13, a2);
        LOBYTE(v7) = RtlCreateUnicodeString((__int64)&v12, a3);
        if ( UnicodeString )
        {
          if ( (_BYTE)v7 )
          {
            LOBYTE(v7) = (unsigned __int8)LdrpLogEtwEvent(
                                            a4,
                                            0LL,
                                            0,
                                            0,
                                            (unsigned __int16 *)&v12,
                                            (unsigned __int16 *)&v13);
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
