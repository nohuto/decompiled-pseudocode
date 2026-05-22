/*
 * XREFs of ??$QueryInterface@VBamoComponentSiteInputObjectProxy@@UIComponentSiteInputObjectProxy@@@Util@BamoImpl@Microsoft@@YAJPEAVBamoComponentSiteInputObjectProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x180096F14
 * Callers:
 *     ?QueryInterface@BamoComponentSiteInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C430 (-QueryInterface@BamoComponentSiteInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::Util::QueryInterface<BamoComponentSiteInputObjectProxy,IComponentSiteInputObjectProxy>(
        void (__fastcall ***a1)(_QWORD),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  v3 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v3 )
  {
    v4 = *a2 - *(_QWORD *)&GUID_76d0682c_efad_f6c3_6b01_5b4201df35b4.Data1;
    if ( *a2 == *(_QWORD *)&GUID_76d0682c_efad_f6c3_6b01_5b4201df35b4.Data1 )
      v4 = a2[1] - *(_QWORD *)GUID_76d0682c_efad_f6c3_6b01_5b4201df35b4.Data4;
    if ( v4 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
  }
  v5 = (unsigned __int64)(a1 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64);
  *a3 = v5;
  if ( !v5 )
    return 2147500034LL;
  (**a1)(a1);
  return 0LL;
}
