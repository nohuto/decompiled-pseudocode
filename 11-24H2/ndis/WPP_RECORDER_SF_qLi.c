/*
 * XREFs of WPP_RECORDER_SF_qLi @ 0x1400B0E7C
 * Callers:
 *     ?ndisWdfNotifyStuckOperation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CX_STUCK_OPERATION_TYPE@@_K@Z @ 0x1400B0DA4 (-ndisWdfNotifyStuckOperation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CX_STUCK_OPERATION_TYPE@@_K@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qLi(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    ndisWppFastTraceMessage(&WPP_38c80a5c1c293fb2a854dfeb168e50db_Traceguids, 0xAu, va, 8LL, va1, 4LL, va2, 8LL, 0LL);
  LOWORD(v7) = 10;
  return WppAutoLogTrace(
           a1,
           3LL,
           13LL,
           &WPP_38c80a5c1c293fb2a854dfeb168e50db_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           va2);
}
