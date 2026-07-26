/*
 * XREFs of WPP_RECORDER_SF_ld @ 0x1400CBBE8
 * Callers:
 *     ndisIfDeleteCompartment @ 0x1400CA980 (ndisIfDeleteCompartment.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ld(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    ndisWppFastTraceMessage(&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids, 0x24u, va, 4LL, va1, 4LL, 0LL);
  LOWORD(v7) = 36;
  return WppAutoLogTrace(
           a1,
           2LL,
           22LL,
           &WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
