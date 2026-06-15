/*
 * XREFs of ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180068548
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800895AC (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x180089BC0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800E7120 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800E77D8 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800E811C (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800E86D0 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXAEAUResourceHandleInfo@@@Z @ 0x1800E9718 (-MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXAEAUResourceHandleInfo@@@Z.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800E9938 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EA1D0 (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800EA384 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EA4AC (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EA8B8 (-Shutdown@CConstraintModelResourceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  EnterCriticalSection(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
