/*
 * XREFs of WPP_RECORDER_SF_Ii @ 0x1400C96A8
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140088780 (ndisIfCreateInterfaceFromPersistentStore.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Ii(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids, 0xFu, va, 8LL, va1, 8LL, 0LL);
  LOWORD(v7) = 15;
  return WppAutoLogTrace(
           a1,
           4LL,
           22LL,
           &WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
