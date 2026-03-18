/*
 * XREFs of ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401EBBE0
 * Callers:
 *     ?DestroyVmWpProcess@DXGPROCESSVMWP@@QEAAXXZ @ 0x140077B60 (-DestroyVmWpProcess@DXGPROCESSVMWP@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x140077B38 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 *     McTemplateK0pppj_EtwWriteTransfer @ 0x140077D18 (McTemplateK0pppj_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1401ED6D8 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403CBAC8 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::DestroyVirtualMachine(DXGVIRTUALMACHINE *this)
{
  char *v2; // rdi
  char *v3; // rax
  __int64 v4; // rcx
  char *v5; // rsi
  char *v6; // r14
  __int64 VirtualGpuManager; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _BYTE v12[24]; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v13[24]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v14[24]; // [rsp+78h] [rbp-80h] BYREF
  _BYTE v15[64]; // [rsp+90h] [rbp-68h] BYREF

  v2 = (char *)this + 40;
  while ( 1 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 96));
    v3 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *(_QWORD *)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    v5 = v3;
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
    KeLeaveCriticalRegion();
    if ( v5 == v2 )
      break;
    *(_QWORD *)v5 = 0LL;
    v6 = v5 - 136;
    *((_QWORD *)v5 + 1) = 0LL;
    if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305620) )
    {
      (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)v6 + 176LL))((_QWORD *)v5 - 17);
    }
    else
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, (struct _KTHREAD **)this + 8);
      COREACCESS::COREACCESS((COREACCESS *)v15, *((struct DXGADAPTER *const *)v6 + 2));
      COREACCESS::AcquireShared((COREACCESS *)v15, 0LL);
      VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(*((_QWORD *)v6 + 1), v6[152] != 0);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v13,
        (struct _KTHREAD **)(VirtualGpuManager + 40));
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, (struct _KTHREAD **)v6 + 7);
      LOBYTE(v8) = 1;
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*(_QWORD *)v6 + 16LL))((_QWORD *)v5 - 17, 0LL, v8);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
      COREACCESS::~COREACCESS((COREACCESS *)v15, v9);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    }
  }
  DXGVIRTUALMACHINE::ResetVirtualMachine(this, 1u);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pppj_EtwWriteTransfer(
      v10,
      &EventDestroyVirtualMachine,
      v11,
      this,
      *((_QWORD *)this + 7),
      *((_QWORD *)this + 34),
      (char *)this + 288);
  if ( this )
    DXGVIRTUALMACHINE::`scalar deleting destructor'(this);
}
