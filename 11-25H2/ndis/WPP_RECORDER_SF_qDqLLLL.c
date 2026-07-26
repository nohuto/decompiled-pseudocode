/*
 * XREFs of WPP_RECORDER_SF_qDqLLLL @ 0x14007E8D0
 * Callers:
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007E5A0 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDqLLLL(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-88h]
  __int64 v8; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  __int64 v10; // [rsp+E0h] [rbp+38h] BYREF
  va_list va1; // [rsp+E0h] [rbp+38h]
  __int64 v12; // [rsp+E8h] [rbp+40h] BYREF
  va_list va2; // [rsp+E8h] [rbp+40h]
  __int64 v14; // [rsp+F0h] [rbp+48h] BYREF
  va_list va3; // [rsp+F0h] [rbp+48h]
  __int64 v16; // [rsp+F8h] [rbp+50h] BYREF
  va_list va4; // [rsp+F8h] [rbp+50h]
  __int64 v18; // [rsp+100h] [rbp+58h] BYREF
  va_list va5; // [rsp+100h] [rbp+58h]
  va_list va6; // [rsp+108h] [rbp+60h] BYREF

  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v16 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v18 = va_arg(va6, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      0x104u,
      va,
      8LL,
      va1,
      4LL,
      va2,
      8LL,
      va3,
      4LL,
      va4,
      4LL,
      va5,
      4LL,
      va6,
      4LL,
      0LL);
  LOWORD(v7) = 260;
  return WppAutoLogTrace(
           a1,
           4LL,
           24LL,
           &WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           (__int64 *)va1);
}
