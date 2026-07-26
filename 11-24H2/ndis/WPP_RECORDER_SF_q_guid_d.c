/*
 * XREFs of WPP_RECORDER_SF_q_guid_d @ 0x140062C30
 * Callers:
 *     ndisWdfOpenConfigurationKey @ 0x14015B3C0 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015BAD0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_q_guid_d(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        __int64 a7,
        ...)
{
  __int64 v7; // r14
  unsigned __int64 v10; // rdi
  unsigned int v12; // esi
  unsigned __int16 v13; // r8
  int v14; // eax
  int v16; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = a7;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a2;
  v13 = a3 - 1;
  v14 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (v13 >> 5) + 11);
  if ( _bittest(&v14, v13 & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, a7, 16LL, va, 4LL, 0LL);
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, v12, a3, a5, v16, &a6, 8LL, v7, 16LL, va);
}
