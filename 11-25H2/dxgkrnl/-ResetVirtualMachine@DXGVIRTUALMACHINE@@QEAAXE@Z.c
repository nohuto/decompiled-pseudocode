/*
 * XREFs of ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1401E7CDC
 * Callers:
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401E64A0 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1401E7C3C (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001428C (McTemplateK0p_EtwWriteTransfer.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x14003BEC4 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14003EB34 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401E7AB8 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1401E84D4 (-SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x140215BBC (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     UnmapGpadl @ 0x14022B970 (UnmapGpadl.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402DE404 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::ResetVirtualMachine(DXGVIRTUALMACHINE *this, char a2, __int64 a3)
{
  __int64 v5; // rcx
  char *v6; // rsi
  char *v7; // rax
  __int64 v8; // rcx
  char *v9; // r14
  __int64 v10; // rdx
  _BYTE v11[48]; // [rsp+28h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-50h] BYREF

  if ( !*((_BYTE *)this + 337) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventResetVirtualMachine, a3, this);
    DXGVIRTUALMACHINE::PauseVmBusChannels(this);
    v5 = *((_QWORD *)this + 7);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v5 + 56), &ApcState);
    if ( a2 )
      DXGVIRTUALMACHINE::SetVailObject(this, 0LL);
    v6 = (char *)this + 24;
    while ( 1 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 128));
      v7 = *(char **)v6;
      if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *(_QWORD *)v7, *(char **)(*(_QWORD *)v7 + 8LL) != v7) )
        __fastfail(3u);
      *(_QWORD *)v6 = v8;
      v9 = v7;
      *(_QWORD *)(v8 + 8) = v6;
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)this + 17) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 128, 0LL);
      KeLeaveCriticalRegion();
      if ( v9 == v6 )
        break;
      *((_QWORD *)v9 + 1) = 0LL;
      *(_QWORD *)v9 = 0LL;
      CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
        (CEnsureCurrentDxgProcess *)v11,
        (struct DXGPROCESS *)(v9 - 608),
        1u);
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)(v9 - 608));
      CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v11);
    }
    KeUnstackDetachProcess(&ApcState);
    v10 = *((unsigned int *)this + 76);
    if ( (_DWORD)v10 )
    {
      UnmapGpadl(*((_QWORD *)this + 7), v10, 2056LL, *((_QWORD *)this + 39));
      *((_DWORD *)this + 76) = 0;
      *((_QWORD *)this + 40) = 0LL;
      *((_QWORD *)this + 39) = 0LL;
    }
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGVIRTUALMACHINE *)((char *)this + 160));
    *(_WORD *)((char *)this + 337) = 257;
  }
}
