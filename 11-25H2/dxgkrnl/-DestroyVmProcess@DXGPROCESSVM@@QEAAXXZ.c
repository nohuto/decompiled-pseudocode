/*
 * XREFs of ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x140182BA4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1400389E4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x140077318 (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 *     ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x14018A9E0 (-DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVM::DestroyVmProcess(DXGPROCESSVM *this)
{
  char *v1; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD *v6; // rcx
  unsigned int v7; // edx

  v1 = (char *)this + 592;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppqqpppz_EtwWriteTransfer(
      (__int64)this,
      &EventDestroyDxgProcessVm,
      *((_QWORD *)this + 8),
      this,
      *(_QWORD *)(*((_QWORD *)this + 8) + 80LL),
      *((_DWORD *)this + 122),
      *((_DWORD *)this + 102),
      *(_QWORD *)(*((_QWORD *)this + 8) + 88LL),
      *((_QWORD *)this + 75),
      *(_QWORD *)(*(_QWORD *)v1 + 592LL),
      *((_QWORD *)this + 78));
  v3 = (_QWORD *)((char *)this + 608);
  v4 = *(_QWORD *)(*(_QWORD *)v1 + 592LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v4 + 128));
  v5 = *((_QWORD *)this + 76);
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v3 || (v6 = (_QWORD *)*((_QWORD *)this + 77), (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *((_QWORD *)this + 77) = 0LL;
    *v3 = 0LL;
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v4 + 136) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 128, 0LL);
  KeLeaveCriticalRegion();
  v7 = *((_DWORD *)this + 159);
  if ( v7 )
  {
    DXGPROCESS::FreeResourceHandleNoRefSafe(*((DXGPROCESS **)this + 74), v7);
    *((_DWORD *)this + 159) = 0;
  }
  DXGVIRTUALMACHINE::DecrementNumVmProcesses(*(DXGVIRTUALMACHINE **)(*((_QWORD *)this + 74) + 592LL));
  DXGPROCESS::ReleaseReference(*((DXGPROCESS **)this + 74));
  *((_QWORD *)this + 74) = 0LL;
}
