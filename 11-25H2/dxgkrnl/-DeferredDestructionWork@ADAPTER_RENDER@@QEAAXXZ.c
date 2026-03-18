/*
 * XREFs of ?DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ @ 0x140359410
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1403593D0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x14003BEC4 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14003EB34 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1400431C8 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14033AFE0 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x140395328 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z @ 0x140396C2C (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z.c)
 */

void __fastcall ADAPTER_RENDER::DeferredDestructionWork(struct _EX_RUNDOWN_REF *this)
{
  struct _EX_RUNDOWN_REF *v2; // rbp
  struct DXGTERMINATIONTRACKER *v3; // rbx
  ULONG_PTR *Count; // rcx
  struct _KPROCESS *v5; // rcx
  struct DXGPROCESS *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  DXGDEVICE *v9; // rcx
  _BYTE v10[48]; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  v2 = this + 164;
  while ( 1 )
  {
    v3 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v2[1].Count = (ULONG_PTR)KeGetCurrentThread();
    Count = (ULONG_PTR *)this[163].Count;
    if ( Count )
    {
      v3 = (struct DXGTERMINATIONTRACKER *)(Count - 7);
      this[163].Count = *Count;
    }
    else
    {
      LOBYTE(this[171].Count) = 0;
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v2[1].Count = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( !v3 )
      break;
    v5 = (struct _KPROCESS *)*((_QWORD *)v3 + 2);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v5, &ApcState);
    v6 = *(struct DXGPROCESS **)(*((_QWORD *)v3 + 3) + 40LL);
    CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v10, 0LL, 0);
    if ( (*((_DWORD *)v6 + 102) & 0x100) != 0 )
      CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)v10, v6, 1u);
    v9 = (DXGDEVICE *)*((_QWORD *)v3 + 3);
    if ( *(_QWORD *)v3 )
    {
      DXGDEVICE::DestroyDeferredAllocations(v9, v3, v7, v8);
      if ( *(_QWORD *)v3 )
        DXGRESOURCE::`scalar deleting destructor'(*(DXGRESOURCE **)v3);
    }
    else
    {
      DXGDEVICE::DestroyDeferredAllocations(v9, v3, v7, v8);
    }
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v10);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(*((PVOID *)v3 + 2));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[174], 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    this[175].Count = (ULONG_PTR)KeGetCurrentThread();
    this[172].Count -= *((_QWORD *)v3 + 5);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    this[175].Count = 0LL;
    ExReleasePushLockExclusiveEx(&this[174], 0LL);
    KeLeaveCriticalRegion();
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)this, v3);
  }
  ExReleaseRundownProtection(this + 173);
}
