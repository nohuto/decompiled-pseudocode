/*
 * XREFs of RtlpResUltimateFallbackInfo @ 0x180089920
 * Callers:
 *     LdrResFallbackLangList @ 0x18008ADF0 (LdrResFallbackLangList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     LdrResGetRCConfig @ 0x1800A3B50 (LdrResGetRCConfig.c)
 */

__int64 __fastcall RtlpResUltimateFallbackInfo(__int64 a1, int a2, _QWORD *a3, _DWORD *a4, int a5)
{
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // r9d
  __int64 result; // rax
  _DWORD *v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v20; // [rsp+80h] [rbp+30h] BYREF

  v20 = 0LL;
  v18[1] = L"RtlpResUltimateFallbackInfo Enter";
  v18[0] = 4456514LL;
  v19[1] = L"RtlpResUltimateFallbackInfo Exit";
  v19[0] = 4325440LL;
  v9 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v10 = 2147353477LL;
  v11 = 2147353476LL;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v17 = 2147353476LL;
    LdrpTraceLoadMUIDll(v18, *(unsigned __int8 *)v17);
  }
  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  v12 = a5;
  *a4 = 0;
  *a3 = 0LL;
  result = LdrResGetRCConfig(a1, a2, (unsigned int)&v20, v12, 1);
  if ( (int)result >= 0 )
  {
    v14 = v20;
    if ( (unsigned __int64)v20 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v20[31] && v20[32] && (v15 = v20[6]) != 0 )
    {
      *a4 = v15;
      *a3 = (char *)v14 + (unsigned int)v14[31];
      v16 = 0;
    }
    else
    {
      v16 = -1073741823;
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(v19, *(unsigned __int8 *)v11);
    }
    return v16;
  }
  return result;
}
