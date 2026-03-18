/*
 * XREFs of ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401ED4B0
 * Callers:
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1401ED6D8 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAX_N@Z @ 0x140078F78 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAX_N@Z.c)
 *     ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z @ 0x14021E6AC (-PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::PauseVmBusChannels(DXGVIRTUALMACHINE *this)
{
  char *v1; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 **v4; // rdi
  __int64 *i; // rbx

  v1 = (char *)this + 64;
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXGVIRTUALMACHINE *)((char *)this + 160), 1);
  Global = DXGGLOBAL::GetGlobal();
  HOSTVMMONITORMAPPING::RemoveMapping((struct DXGGLOBAL *)((char *)Global + 305312), (char *)this + 160);
  v4 = (__int64 **)((char *)this + 40);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 16) )
      DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXG_VMBUS_CHANNEL_BASE *)(i + 5), 1);
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
