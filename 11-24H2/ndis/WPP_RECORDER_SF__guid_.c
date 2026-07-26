/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1400657A0
 * Callers:
 *     ndisLwmIoctlIrpHandler @ 0x14002C6B0 (ndisLwmIoctlIrpHandler.c)
 *     KLoaderReferenceModule @ 0x1400656D0 (KLoaderReferenceModule.c)
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14006E990 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     NdisFRegisterFilterDriver @ 0x14009AD80 (NdisFRegisterFilterDriver.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400C939C (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     ndisIfCreateCompartment @ 0x1400CA194 (ndisIfCreateCompartment.c)
 *     ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1400CB028 (-ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z.c)
 *     ?ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z @ 0x1400CB0F8 (-ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z.c)
 *     ?KLoaderReferenceModuleForCreateIrp@@YAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1400DC674 (-KLoaderReferenceModuleForCreateIrp@@YAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUK.c)
 *     ?FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z @ 0x140135A50 (-FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1401479DC (ndisIfUpdateIfBlockFromPersistedState.c)
 *     GetModuleParameters @ 0x14014AE30 (GetModuleParameters.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x14014B0A8 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015BAD0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x14015BF80 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x14015C0E0 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x140168BA0 (-ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        __int64 a6)
{
  unsigned __int64 v8; // rdi
  unsigned int v10; // esi
  unsigned __int16 v11; // r8
  int v12; // eax
  int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+48h] [rbp-10h]

  v8 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v11 = a3 - 1;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v8 + (v11 >> 5) + 11);
  if ( _bittest(&v12, v11 & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v8 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, a6, 16LL, 0LL);
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v14, a6, 16LL, 0LL, v15, v16);
}
