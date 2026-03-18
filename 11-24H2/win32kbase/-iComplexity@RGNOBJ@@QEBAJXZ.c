/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080
 * Callers:
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1400262A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14002A1F0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     GreGetRgnBox @ 0x14002B0D0 (GreGetRgnBox.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14002BA00 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreGetClipBox @ 0x140039310 (GreGetClipBox.c)
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140068B50 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401549C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140174490 (-bCompute@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 *     GreCopyVisRgn @ 0x140179AC0 (GreCopyVisRgn.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C0F70 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEBVRustAutoHotpatchLockSH@@AEAV1@1J@Z @ 0x1401C1700 (-iCombine@RGNOBJ@@QEAAJAEBVRustAutoHotpatchLockSH@@AEAV1@1J@Z.c)
 * Callees:
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14002A15C (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this, const struct REGION_CORE *a2)
{
  char *SystemArgument1; // rsi
  _DWORD *v3; // rdi
  unsigned int sizeScan; // ecx
  _DWORD *v5; // rcx
  unsigned int v6; // edi

  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v3 = *(_DWORD **)this;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
    v5 = v3 + 6;
    if ( !v3 )
      v5 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)SystemArgument1 + 72LL))(v5);
    ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
    KeLeaveCriticalRegion();
    return v6;
  }
  else if ( v3[12] == 1 )
  {
    return 1LL;
  }
  else
  {
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      sizeScan = Win32kRS::RegionCore_get_sizeScan((Win32kRS *)(v3 + 6), a2);
    else
      sizeScan = v3[10];
    return (unsigned int)(sizeScan > 0x38) + 2;
  }
}
