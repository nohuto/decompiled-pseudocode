/*
 * XREFs of WPP_RECORDER_SF_DDDDDD @ 0x1400A49AC
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140160A60 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_DDDDDD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+28h] [rbp-51h]
  __int64 v8; // [rsp+D0h] [rbp+57h] BYREF
  va_list va; // [rsp+D0h] [rbp+57h]
  __int64 v10; // [rsp+D8h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+5Fh]
  __int64 v12; // [rsp+E0h] [rbp+67h] BYREF
  va_list va2; // [rsp+E0h] [rbp+67h]
  __int64 v14; // [rsp+E8h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+E8h] [rbp+6Fh]
  __int64 v16; // [rsp+F0h] [rbp+77h] BYREF
  va_list va4; // [rsp+F0h] [rbp+77h]
  va_list va5; // [rsp+F8h] [rbp+7Fh] BYREF

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
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      0x65u,
      va,
      4LL,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      4LL,
      va4,
      4LL,
      va5,
      4LL,
      0LL);
  LOWORD(v7) = 101;
  return WppAutoLogTrace(
           a1,
           4LL,
           6LL,
           &WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1);
}
