/*
 * XREFs of RtlpResUltimateFallbackInfo @ 0x180089920
 * Callers:
 *     LdrResFallbackLangList @ 0x18008ADF0 (LdrResFallbackLangList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     LdrResGetRCConfig @ 0x1800A3B50 (LdrResGetRCConfig.c)
 */

__int64 __fastcall RtlpResUltimateFallbackInfo(PVOID DllHandle, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF

  v12[1] = L"RtlpResUltimateFallbackInfo Enter";
  v12[0] = 4456514LL;
  v13[1] = L"RtlpResUltimateFallbackInfo Exit";
  v13[0] = 4325440LL;
  v7 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v8 = 2147353477LL;
  v9 = 2147353476LL;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476LL;
    LdrpTraceLoadMUIDll(v12, *(unsigned __int8 *)v11);
  }
  if ( !DllHandle || !a3 || !a4 )
    return 3221225485LL;
  *a4 = 0;
  *a3 = 0LL;
  result = LdrResGetRCConfig(DllHandle, 1);
  if ( (int)result >= 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(v13, *(unsigned __int8 *)v9);
    }
    return 3221225473LL;
  }
  return result;
}
