/*
 * XREFs of WPP_RECORDER_SF_L_guid_qd @ 0x1400D2D34
 * Callers:
 *     ndisIfCreateCompartmentBlock @ 0x1400D18DC (ndisIfCreateCompartmentBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_L_guid_qd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
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
      &WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
      0x14u,
      va,
      4LL,
      v11,
      16LL,
      va1,
      8LL,
      va2,
      4LL,
      0LL);
  LOWORD(v8) = 20;
  return WppAutoLogTrace(a1, 4LL, 22LL, &WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids, v8, (__int64 *)va, 4LL, v5);
}
