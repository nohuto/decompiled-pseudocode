/*
 * XREFs of WPP_RECORDER_SF_l_guid_d @ 0x1400CBAFC
 * Callers:
 *     ndisIfCreateCompartment @ 0x1400CA194 (ndisIfCreateCompartment.c)
 *     ndisIfCreateCompartmentBlock @ 0x1400CA640 (ndisIfCreateCompartmentBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_l_guid_d(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  __int64 v6; // rdi
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v12; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  v12 = va_arg(va1, _QWORD);
  v6 = v12;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    ndisWppFastTraceMessage(&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids, a4, va, 4LL, v12, 16LL, va1, 4LL, 0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           22LL,
           &WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
           v9,
           (__int64 *)va,
           4LL,
           v6,
           16LL,
           va1);
}
