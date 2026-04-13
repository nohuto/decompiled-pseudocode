/*
 * XREFs of ??$ActivateInstance@UIPackageManager@Deployment@Management@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIPackageManager@Deployment@Management@1@@Z @ 0x180024550
 * Callers:
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180024688 (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ?SetCrossDevicePackageStubPreference@MobilityExperienceSettings@ContentManagement@@QEAAJE@Z @ 0x18003AC90 (-SetCrossDevicePackageStubPreference@MobilityExperienceSettings@ContentManagement@@QEAAJE@Z.c)
 *     ?SetYourPhonePackageStubPreference@MobilityExperienceSettings@ContentManagement@@QEAAJE@Z @ 0x18003B318 (-SetYourPhonePackageStubPreference@MobilityExperienceSettings@ContentManagement@@QEAAJE@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Management::Deployment::IPackageManager>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v6 = 0LL;
  v3 = RoActivateInstance(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)&GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  return (unsigned int)v3;
}
