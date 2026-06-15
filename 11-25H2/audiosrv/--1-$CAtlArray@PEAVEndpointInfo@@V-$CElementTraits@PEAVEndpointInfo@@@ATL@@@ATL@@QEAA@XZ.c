/*
 * XREFs of ??1?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800A1A8C
 * Callers:
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x1800A19F0 (--1CVolumeControlBase@@MEAA@XZ.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800E8FD0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x1801572A8 (--1CConstraintModel@@UEAA@XZ.c)
 *     ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x180157AE0 (-CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV-$CAtlArray@PEAV-$CAtlArray@PEAVEndpo.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18015876C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$1 @ 0x1801662F8 (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$1.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$11 @ 0x1801691F1 (_CConstraintModel--Initialize_--_1_--dtor$11.c)
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
