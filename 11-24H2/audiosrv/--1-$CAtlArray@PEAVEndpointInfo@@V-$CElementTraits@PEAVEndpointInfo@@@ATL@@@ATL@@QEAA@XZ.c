/*
 * XREFs of ??1?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800A035C
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800EDCA8 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x180112A64 (--1CVolumeControlBase@@MEAA@XZ.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x180160058 (--1CConstraintModel@@UEAA@XZ.c)
 *     ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x180160890 (-CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV-$CAtlArray@PEAV-$CAtlArray@PEAVEndpo.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18016151C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     _CVolumeControlBase::CVolumeControlBase_::_1_::dtor$3 @ 0x18016C8CA (_CVolumeControlBase--CVolumeControlBase_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$1 @ 0x18016F982 (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$1.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$11 @ 0x180172AB7 (_CConstraintModel--Initialize_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>::~CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
