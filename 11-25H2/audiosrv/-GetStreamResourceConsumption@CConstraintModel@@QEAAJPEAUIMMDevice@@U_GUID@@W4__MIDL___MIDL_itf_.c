/*
 * XREFs of ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18009190C
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800895AC (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800E7120 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800E811C (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800E9B10 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteris.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800E6708 (--1EndpointInfo@@QEAA@XZ.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z @ 0x180157F84 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z.c)
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1801586C4 (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL__.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModel::GetStreamResourceConsumption(
        CConstraintModel *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        unsigned int *a5,
        struct _ResourceInfo **a6)
{
  int EndpointInformationFromId; // ebx
  struct _GUID v11; // [rsp+30h] [rbp-89h] BYREF
  __int128 v12; // [rsp+40h] [rbp-79h] BYREF
  __m128i si128; // [rsp+50h] [rbp-69h]
  __int128 v14; // [rsp+60h] [rbp-59h]
  __m128i v15; // [rsp+70h] [rbp-49h]
  __int128 v16; // [rsp+80h] [rbp-39h]
  __m128i v17; // [rsp+90h] [rbp-29h]
  int v18; // [rsp+A0h] [rbp-19h]
  __int64 v19; // [rsp+A8h] [rbp-11h]
  __int128 v20; // [rsp+B0h] [rbp-9h]

  *a6 = 0LL;
  *a5 = 0;
  v12 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v12) = 0;
  v14 = 0LL;
  v15 = si128;
  LOWORD(v14) = 0;
  v16 = 0LL;
  v17 = si128;
  LOWORD(v16) = 0;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(this, a2, (struct EndpointInfo *)&v12);
  if ( EndpointInformationFromId >= 0 )
  {
    v11 = *a3;
    EndpointInformationFromId = CConstraintModel::GetStreamResourceConsumptionFromMap(
                                  this,
                                  (struct EndpointInfo *)&v12,
                                  &v11,
                                  a4,
                                  a5,
                                  a6);
  }
  EndpointInfo::~EndpointInfo((EndpointInfo *)&v12);
  return (unsigned int)EndpointInformationFromId;
}
