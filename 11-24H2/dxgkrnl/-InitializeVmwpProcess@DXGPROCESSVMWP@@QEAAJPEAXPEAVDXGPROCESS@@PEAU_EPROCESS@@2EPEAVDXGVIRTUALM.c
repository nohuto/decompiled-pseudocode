/*
 * XREFs of ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1401ED268
 * Callers:
 *     DxgkDeviceIoctl @ 0x140070210 (DxgkDeviceIoctl.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x140216BD0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x14021A6C0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1401EB8A0 (--0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z.c)
 */

__int64 __fastcall DXGPROCESSVMWP::InitializeVmwpProcess(
        DXGPROCESSVMWP *this,
        void *a2,
        struct DXGPROCESS *a3,
        struct _EPROCESS *a4,
        struct _EPROCESS *Object,
        unsigned __int8 a6,
        struct DXGVIRTUALMACHINE *a7)
{
  DXGVIRTUALMACHINE *v11; // rax
  DXGVIRTUALMACHINE *v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !*((_BYTE *)this + 616) )
  {
    if ( a7 )
    {
      *((_QWORD *)this + 74) = a7;
      *((_QWORD *)a7 + 7) = this;
    }
    else
    {
      v11 = (DXGVIRTUALMACHINE *)operator new(0x210uLL, 0x4B677844u, 64LL);
      if ( v11 )
        v12 = DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(v11, this);
      else
        v12 = 0LL;
      *((_QWORD *)this + 74) = v12;
    }
    if ( !*((_QWORD *)this + 74) )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 5628;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate DXGVIRTUALMACHINE",
        5628LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    if ( a2 )
    {
      if ( *((_BYTE *)this + 616) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5634;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_bInitialized == FALSE", 5634LL, 0LL, 0LL, 0LL, 0LL);
      }
      v14 = *((_QWORD *)this + 74);
      *((_QWORD *)this + 75) = a3;
      *(_QWORD *)(v14 + 280) = a4;
      ObfReferenceObject(a4);
      if ( a6 )
        *(_BYTE *)(*((_QWORD *)this + 74) + 336LL) = 1;
      if ( Object )
      {
        v15 = *((_QWORD *)this + 74);
        *((_DWORD *)this + 102) |= 0x400u;
        *(_QWORD *)(v15 + 272) = Object;
        ObfReferenceObject(Object);
      }
      *((_BYTE *)this + 616) = 1;
    }
  }
  return 0LL;
}
