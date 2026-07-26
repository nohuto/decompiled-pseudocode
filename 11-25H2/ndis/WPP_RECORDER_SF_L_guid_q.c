/*
 * XREFs of WPP_RECORDER_SF_L_guid_q @ 0x1400D2C44
 * Callers:
 *     ndisIfCreateCompartmentBlock @ 0x1400D18DC (ndisIfCreateCompartmentBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_L_guid_q(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  __int64 v6; // rbx
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, _QWORD);
  v6 = v11;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids, 0xDu, va, 4LL, v11, 16LL, va1, 8LL, 0LL);
  LOWORD(v8) = 13;
  return WppAutoLogTrace(a1, 4LL, 22LL, &WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids, v8, (__int64 *)va, 4LL, v6);
}
