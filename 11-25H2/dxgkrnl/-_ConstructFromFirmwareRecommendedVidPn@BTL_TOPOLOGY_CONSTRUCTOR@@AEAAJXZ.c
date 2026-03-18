/*
 * XREFs of ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1402653D8
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x140264B4C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402CE078 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x14036B178 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x140373EE8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(CCD_TOPOLOGY **this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rax
  struct CCD_BTL *v5; // rax
  int v6; // edi
  int v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int16 v11; // [rsp+40h] [rbp-28h]
  __int128 v12; // [rsp+48h] [rbp-20h]

  Global = DXGGLOBAL::GetGlobal();
  if ( (int)DXGGLOBAL::IterateAdaptersWithCallback(
              Global,
              BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology_0_1_,
              this,
              4LL) < 0 )
    return 3221226021LL;
  v3 = *((_QWORD *)*this + 8);
  if ( !(v3 ? *(_WORD *)(v3 + 20) : 0) )
    return 3221226021LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v11 = 0;
  v5 = CCD_BTL::Global();
  v6 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v5)(v5, &v8);
  if ( v6 >= 0 )
    v6 = CCD_TOPOLOGY::SetConnectivityHash(*this, (const struct CCD_SET_STRING_ID *)&v8);
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v8);
  return (unsigned int)v6;
}
