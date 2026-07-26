/*
 * XREFs of WPP_RECORDER_SF__guid_L @ 0x1400C9898
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1401479DC (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x140148598 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF__guid_L(__int64 a1, unsigned __int8 a2, int a3, int a4, struct _GUID *a5, __int64 a6, ...)
{
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v7 = a2;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= a2 )
    ndisWppFastTraceMessage(a5, 0x1Au, a6, 16LL, va, 4LL, 0LL);
  LOWORD(v9) = 26;
  return WppAutoLogTrace(a1, v7, 22LL, a5, v9, a6, 16LL, va, 4LL, 0LL);
}
