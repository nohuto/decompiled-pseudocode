/*
 * XREFs of WPP_RECORDER_SF_l_guid_Lq @ 0x1400CB9E8
 * Callers:
 *     ndisIfCreateCompartment @ 0x1400CA194 (ndisIfCreateCompartment.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_l_guid_Lq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rbx
  int v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v11; // [rsp+B0h] [rbp+38h]
  __int64 v12; // [rsp+B8h] [rbp+40h] BYREF
  va_list va1; // [rsp+B8h] [rbp+40h]
  va_list va2; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v5 = v11;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      0x1Bu,
      va,
      4LL,
      v11,
      16LL,
      va1,
      4LL,
      va2,
      8LL,
      0LL);
  LOWORD(v8) = 27;
  return WppAutoLogTrace(
           a1,
           4LL,
           22LL,
           &WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
           v8,
           (__int64 *)va,
           4LL,
           v5,
           16LL,
           (__int64 *)va1);
}
