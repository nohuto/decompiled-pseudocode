/*
 * XREFs of ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1401EBDCC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140038670 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     Feature_592146746__private_IsEnabledDeviceUsageNoInline @ 0x140077CC4 (Feature_592146746__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x140077DB0 (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 *     ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x14018C9D0 (-DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVM::DestroyVmProcess(DXGPROCESSVM *this)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // ebp
  int v8; // r14d
  __int64 ProcessID; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 v13; // r14
  int v14; // edi
  __int64 v15; // rbp
  int v16; // esi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // rcx
  unsigned int v25; // edx

  if ( (unsigned int)Feature_592146746__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = *((_QWORD *)this + 8);
    if ( v2 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v3 = *((_QWORD *)this + 78);
      v4 = *((_QWORD *)this + 75);
      v5 = *(_QWORD *)(v2 + 88);
      v6 = *(_QWORD *)(*((_QWORD *)this + 74) + 592LL);
      v7 = *((_DWORD *)this + 102);
      v8 = *((_DWORD *)this + 122);
      ProcessID = DXGPROCESS::GetProcessID(this);
      McTemplateK0ppqqpppz_EtwWriteTransfer(
        v10,
        &EventDestroyDxgProcessVm,
        v11,
        this,
        ProcessID,
        v8,
        v7,
        v5,
        v4,
        v6,
        v3);
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v12 = *((_QWORD *)this + 78);
    v13 = *((_QWORD *)this + 75);
    v14 = *((_DWORD *)this + 102);
    v15 = *(_QWORD *)(*((_QWORD *)this + 74) + 592LL);
    v16 = *((_DWORD *)this + 122);
    v17 = *(_QWORD *)(*((_QWORD *)this + 8) + 88LL);
    v18 = DXGPROCESS::GetProcessID(this);
    McTemplateK0ppqqpppz_EtwWriteTransfer(v19, &EventDestroyDxgProcessVm, v20, this, v18, v16, v14, v17, v13, v15, v12);
  }
  v21 = (_QWORD *)((char *)this + 608);
  v22 = *(_QWORD *)(*((_QWORD *)this + 74) + 592LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v22 + 128));
  v23 = *((_QWORD *)this + 76);
  if ( v23 )
  {
    if ( *(_QWORD **)(v23 + 8) != v21 || (v24 = (_QWORD *)*((_QWORD *)this + 77), (_QWORD *)*v24 != v21) )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    *((_QWORD *)this + 77) = 0LL;
    *v21 = 0LL;
  }
  *(_QWORD *)(v22 + 136) = 0LL;
  ExReleasePushLockExclusiveEx(v22 + 128, 0LL);
  KeLeaveCriticalRegion();
  v25 = *((_DWORD *)this + 159);
  if ( v25 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 74), v25);
    *((_DWORD *)this + 159) = 0;
  }
  DXGVIRTUALMACHINE::DecrementNumVmProcesses(*(DXGVIRTUALMACHINE **)(*((_QWORD *)this + 74) + 592LL));
  DXGPROCESS::ReleaseReference(*((DXGPROCESS **)this + 74));
  *((_QWORD *)this + 74) = 0LL;
}
