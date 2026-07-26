/*
 * XREFs of WPP_RECORDER_SF_qq_guid_qd @ 0x14006E260
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x14002D300 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qq_guid_qd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v6; // rbx
  int v8; // [rsp+20h] [rbp-68h]
  __int64 v9; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v11; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  __int64 v13; // [rsp+C8h] [rbp+40h]
  __int64 v14; // [rsp+D0h] [rbp+48h] BYREF
  va_list va2; // [rsp+D0h] [rbp+48h]
  va_list va3; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  v13 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  v6 = v13;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      0x9Cu,
      va,
      8LL,
      va1,
      8LL,
      v13,
      16LL,
      va2,
      8LL,
      va3,
      4LL,
      0LL);
  LOWORD(v8) = 156;
  return WppAutoLogTrace(
           a1,
           4LL,
           1LL,
           &WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
           v8,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v6);
}
