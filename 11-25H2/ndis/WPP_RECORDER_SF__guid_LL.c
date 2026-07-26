/*
 * XREFs of WPP_RECORDER_SF__guid_LL @ 0x1400D5F4C
 * Callers:
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x140153264 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF__guid_LL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v9 = va_arg(va1, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids, 0x1Bu, a6, 16LL, va, 4LL, va1, 4LL, 0LL);
  LOWORD(v8) = 27;
  return WppAutoLogTrace(a1, 4LL, 22LL, &WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids, v8, a6, 16LL, (__int64 *)va);
}
