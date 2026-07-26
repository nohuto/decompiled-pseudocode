/*
 * XREFs of WPP_RECORDER_SF_qS @ 0x1400A54B8
 * Callers:
 *     NdisMTriggerPDDrainNotification @ 0x1400A4F10 (NdisMTriggerPDDrainNotification.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  const wchar_t *v13; // rax
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-48h]

  v7 = a7;
  v8 = -1LL;
  v10 = 10LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v12 = 10LL;
    }
    v13 = a7;
    if ( !a7 )
      v13 = L"NULL";
    ndisWppFastTraceMessage(&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids, 0x20u, &a6, 8LL, v13, v12, 0LL);
  }
  v14 = v7 == 0LL;
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
    v10 = 2 * v8 + 2;
    v14 = v7 == 0LL;
  }
  if ( v14 )
    v7 = L"NULL";
  LOWORD(v16) = 32;
  return WppAutoLogTrace(a1, 5LL, 29LL, &WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids, v16, &a6, 8LL, v7, v10, 0LL);
}
