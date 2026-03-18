/*
 * XREFs of ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1403E7524
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x140062E78 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall VIDPN_MGR::RequestPowerStateForTargets(VIDPN_MGR *this, const struct DMMVIDPN *a2)
{
  const struct DMMVIDPN *v2; // r8
  char *v3; // rdi
  char *v5; // rsi
  DMMVIDEOPRESENTTARGET *v6; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  char *v8; // rax

  v2 = (const struct DMMVIDPN *)*((_QWORD *)a2 + 15);
  v3 = 0LL;
  if ( v2 != (const struct DMMVIDPN *)((char *)a2 + 120) )
    v3 = (char *)v2 - 8;
  if ( v3 )
  {
    v5 = (char *)a2 + 120;
    do
    {
      v6 = *(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)v3 + 12) + 96LL);
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
      DMMVIDEOPRESENTTARGET::SetPowerState(v6, ContainingAdapter, 1u);
      v8 = (char *)*((_QWORD *)v3 + 1);
      v3 = v8 - 8;
      if ( v8 == v5 )
        v3 = 0LL;
    }
    while ( v3 );
  }
}
