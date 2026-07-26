/*
 * XREFs of WPP_RECORDER_SF_dd @ 0x14005AD40
 * Callers:
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x14006B640 (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x14008C660 (-ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z.c)
 *     ?ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z @ 0x14009A558 (-ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z.c)
 *     ndisIfDeleteCompartment @ 0x1400CA980 (ndisIfDeleteCompartment.c)
 *     ndisNsiClientParameterChangeHandler @ 0x140160430 (ndisNsiClientParameterChangeHandler.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_dd(__int64 a1, int a2, unsigned int a3, unsigned __int16 a4, struct _GUID *a5, char a6, ...)
{
  unsigned __int64 v8; // r10
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v8 + ((unsigned __int16)(a3 - 1) >> 5) + 11);
  if ( _bittest(&v10, ((_WORD)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v8 + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 4LL, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v12, &a6, 4LL, va, 4LL, 0LL);
}
