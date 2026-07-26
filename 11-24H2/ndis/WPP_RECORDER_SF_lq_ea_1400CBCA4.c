/*
 * XREFs of WPP_RECORDER_SF_lq @ 0x1400CBCA4
 * Callers:
 *     ndisIfDeleteCompartment @ 0x1400CA980 (ndisIfDeleteCompartment.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_lq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    ndisWppFastTraceMessage(&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids, a4, va, 4LL, va1, 8LL, 0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           22LL,
           &WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
           v8,
           (__int64 *)va,
           4LL,
           va1,
           8LL,
           0LL);
}
