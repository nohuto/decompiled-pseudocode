/*
 * XREFs of ?DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ @ 0x14034ED20
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x14034ECE0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x14003B884 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14003E524 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x140042EF8 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14038B360 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z @ 0x140391A8C (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1403AB220 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DeferredDestructionWork(struct _EX_RUNDOWN_REF *this)
{
  struct _EX_RUNDOWN_REF *v2; // rbp
  struct DXGTERMINATIONTRACKER *v3; // rdi
  ULONG_PTR *Count; // rcx
  struct _KPROCESS *v5; // rcx
  struct DXGPROCESS *v6; // rbx
  DXGDEVICE *v7; // rcx
  _BYTE v8[48]; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  v2 = this + 164;
  while ( 1 )
  {
    v3 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
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
    v2[1].Count = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( !v3 )
      break;
    v5 = (struct _KPROCESS *)*((_QWORD *)v3 + 2);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v5, &ApcState);
    v6 = *(struct DXGPROCESS **)(*((_QWORD *)v3 + 3) + 40LL);
    CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v8, 0LL, 0);
    if ( (*((_DWORD *)v6 + 102) & 0x100) != 0 )
      CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)v8, v6, 1u);
    v7 = (DXGDEVICE *)*((_QWORD *)v3 + 3);
    if ( *(_QWORD *)v3 )
    {
      DXGDEVICE::DestroyDeferredAllocations(v7, v3);
      if ( *(_QWORD *)v3 )
        DXGRESOURCE::`scalar deleting destructor'(*(DXGRESOURCE **)v3);
    }
    else
    {
      DXGDEVICE::DestroyDeferredAllocations(v7, v3);
    }
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v8);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(*((PVOID *)v3 + 2));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[174], 0LL);
    this[175].Count = (ULONG_PTR)KeGetCurrentThread();
    this[172].Count -= *((_QWORD *)v3 + 5);
    this[175].Count = 0LL;
    ExReleasePushLockExclusiveEx(&this[174], 0LL);
    KeLeaveCriticalRegion();
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)this, v3);
  }
  ExReleaseRundownProtection(this + 173);
}
