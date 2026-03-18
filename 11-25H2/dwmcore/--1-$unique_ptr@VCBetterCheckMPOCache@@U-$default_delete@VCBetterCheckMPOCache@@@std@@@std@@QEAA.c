/*
 * XREFs of ??1?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@QEAA@XZ @ 0x1802C227C
 * Callers:
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x1801730FC (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1802C1858 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCh.c)
 * Callees:
 *     ??R?$default_delete@VCBetterCheckMPOCache@@@std@@QEBAXPEAVCBetterCheckMPOCache@@@Z @ 0x1802C235C (--R-$default_delete@VCBetterCheckMPOCache@@@std@@QEBAXPEAVCBetterCheckMPOCache@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CBetterCheckMPOCache>::~unique_ptr<CBetterCheckMPOCache>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CBetterCheckMPOCache>::operator()();
  return result;
}
