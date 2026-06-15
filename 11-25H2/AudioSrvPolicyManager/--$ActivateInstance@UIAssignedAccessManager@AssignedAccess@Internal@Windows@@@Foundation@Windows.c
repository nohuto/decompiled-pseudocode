/*
 * XREFs of ??$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIAssignedAccessManager@AssignedAccess@Internal@1@@Z @ 0x18004A8DC
 * Callers:
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x18004AAB8 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Internal::AssignedAccess::IAssignedAccessManager>(
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
    v4 = *(_QWORD *)&GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a,
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
