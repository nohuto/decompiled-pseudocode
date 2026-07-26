/*
 * XREFs of WPP_RECORDER_SF_IL @ 0x1400C95E8
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140088780 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x14008B160 (ndisIfUpdateInterfaceFromPersistentStore.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_IL(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids, a4, va, 8LL, va1, 4LL, 0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           22LL,
           &WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
           v8,
           (__int64 *)va,
           8LL,
           va1,
           4LL,
           0LL);
}
