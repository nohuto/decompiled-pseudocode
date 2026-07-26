/*
 * XREFs of WPP_RECORDER_SF_DDLqdL @ 0x140063220
 * Callers:
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x140063390 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_DDLqdL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-78h]
  __int64 v8; // [rsp+C8h] [rbp+30h] BYREF
  va_list va; // [rsp+C8h] [rbp+30h]
  __int64 v10; // [rsp+D0h] [rbp+38h] BYREF
  va_list va1; // [rsp+D0h] [rbp+38h]
  __int64 v12; // [rsp+D8h] [rbp+40h] BYREF
  va_list va2; // [rsp+D8h] [rbp+40h]
  __int64 v14; // [rsp+E0h] [rbp+48h] BYREF
  va_list va3; // [rsp+E0h] [rbp+48h]
  __int64 v16; // [rsp+E8h] [rbp+50h] BYREF
  va_list va4; // [rsp+E8h] [rbp+50h]
  va_list va5; // [rsp+F0h] [rbp+58h] BYREF

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
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      (const struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
      0x1Bu,
      va,
      4LL,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      8LL,
      va4,
      4LL,
      va5,
      4LL,
      0LL);
  LOWORD(v7) = 27;
  return WppAutoLogTrace(
           a1,
           4LL,
           14LL,
           WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1);
}
