/*
 * XREFs of ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x140039B14
 * Callers:
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x14004B4EC (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?GetVaAllocator@VIDMM_SCH_LOG@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140039C40 (-GetVaAllocator@VIDMM_SCH_LOG@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?RemoveSchLog@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SCH_LOG@@@Z @ 0x140043EC8 (-RemoveSchLog@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SCH_LOG@@@Z.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004B3B0 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400BB46C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAFC (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_SCH_LOG::~VIDMM_SCH_LOG(VIDMM_SCH_LOG *this)
{
  struct CVirtualAddressAllocator *VaAllocator; // rax
  VIDMM_GLOBAL *v3; // rcx
  bool v4; // r8
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rdx
  _QWORD v9[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( *((_QWORD *)this + 1) )
    VIDMM_GLOBAL::RemoveSchLog(*(VIDMM_GLOBAL **)this, this);
  if ( *((_QWORD *)this + 7) )
  {
    memset(v9, 0, 0x58uLL);
    VaAllocator = VIDMM_SCH_LOG::GetVaAllocator(this);
    HIDWORD(v9[0]) = *((_DWORD *)this + 6);
    v9[5] = *((_QWORD *)this + 12);
    v9[7] = *((_QWORD *)this + 7);
    v9[8] = *((_QWORD *)this + 4) >> 12;
    v3 = *(VIDMM_GLOBAL **)this;
    LODWORD(v9[0]) = 120;
    v9[6] = VaAllocator;
    LOBYTE(v9[9]) = 1;
    VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v3, (struct _VIDMM_SYSTEM_COMMAND *)v9, v4);
  }
  if ( *((_BYTE *)this + 89) )
    VIDMM_PROCESS::CloseAdapter(*((VIDMM_PROCESS **)this + 12), *(struct VIDMM_GLOBAL **)this);
  if ( *((_BYTE *)this + 88) )
    MmUnlockPages(*((PMDL *)this + 9));
  v5 = (void *)*((_QWORD *)this + 9);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (void *)*((_QWORD *)this + 6);
  if ( v6 )
    MmUnmapViewInSystemSpace(v6);
  v7 = (void *)*((_QWORD *)this + 5);
  if ( v7 )
    ObfDereferenceObject(v7);
  v8 = (void *)*((_QWORD *)this + 10);
  if ( v8 )
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 224LL), v8);
}
