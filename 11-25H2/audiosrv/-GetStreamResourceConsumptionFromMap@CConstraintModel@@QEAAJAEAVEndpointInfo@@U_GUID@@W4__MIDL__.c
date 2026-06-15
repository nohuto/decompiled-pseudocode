/*
 * XREFs of ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1801586C4
 * Callers:
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18009190C (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ?GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800778A8 (-GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_Resource.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??0StreamResourceConsumer@@QEAA@AEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180157108 (--0StreamResourceConsumer@@QEAA@AEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ??1StreamResourceConsumer@@UEAA@XZ @ 0x18015731C (--1StreamResourceConsumer@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModel::GetStreamResourceConsumptionFromMap(
        CConstraintModel *this,
        struct EndpointInfo *a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        unsigned int *a5,
        struct _ResourceInfo **a6)
{
  unsigned int ResourceConsumptionFromMap; // ebx
  struct _GUID v9; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v10[176]; // [rsp+30h] [rbp-C8h] BYREF

  *a6 = 0LL;
  *a5 = 0;
  v9 = *a3;
  StreamResourceConsumer::StreamResourceConsumer((StreamResourceConsumer *)v10, a2, &v9, a4);
  ResourceConsumptionFromMap = CConstraintModel::GetResourceConsumptionFromMap(
                                 this,
                                 (struct ResourceConsumer *)v10,
                                 a5,
                                 a6);
  StreamResourceConsumer::~StreamResourceConsumer((StreamResourceConsumer *)v10);
  return ResourceConsumptionFromMap;
}
