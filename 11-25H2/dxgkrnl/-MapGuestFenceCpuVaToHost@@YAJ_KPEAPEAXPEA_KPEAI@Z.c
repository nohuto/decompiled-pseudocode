/*
 * XREFs of ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x140217E84
 * Callers:
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401D57C0 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1402F9478 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14032CEE8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1403A0638 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035DA0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MapGuestFenceCpuVaToHost(unsigned __int64 a1, void **a2, unsigned __int64 *a3, unsigned int *a4)
{
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v9; // eax
  __int64 v10; // rdi
  struct _MDL *Mdl; // rsi
  unsigned int v12; // r8d
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  NTSTATUS v15; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v16; // rax
  ULONG_PTR Length; // [rsp+98h] [rbp+48h] BYREF
  PVOID VirtualAddress; // [rsp+A0h] [rbp+50h] BYREF

  Length = 4096LL;
  *a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0;
  VirtualAddress = 0LL;
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v9 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, ULONG_PTR *, int, int))VirtualMemoryInterface)(
         -1LL,
         &VirtualAddress,
         0LL,
         &Length,
         8392704,
         4);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 15620;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to allocate virtual memory, returning 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v10;
  }
  Mdl = IoAllocateMdl(0LL, Length, 0, 0, 0LL);
  if ( !Mdl )
  {
    LODWORD(v10) = -1073741801;
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 15627;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for CPU visible buffer, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_12:
    if ( VirtualAddress )
    {
      v16 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID *, ULONG_PTR *, __int64))v16 + 2))(
        -1LL,
        &VirtualAddress,
        &Length,
        0x8000LL);
    }
    return (unsigned int)v10;
  }
  v12 = 0;
  v13 = a1 >> 12;
  if ( (Length & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    v14 = 0LL;
    do
    {
      ++v12;
      *((_QWORD *)&Mdl[1].Next + v14) = v13++;
      v14 = v12;
    }
    while ( v12 < Length >> 12 );
  }
  v15 = MmRotatePhysicalView(VirtualAddress, &Length, Mdl, MmToFrameBufferNoCopy, 0LL, 0LL);
  v10 = v15;
  if ( v15 >= 0 )
  {
    *a2 = VirtualAddress;
    *a3 = a1;
    *a4 = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v15);
    WdLogGlobalForLineNumber = 15642;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"MmRotatePhysicalView failed 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  IoFreeMdl(Mdl);
  if ( (int)v10 < 0 )
    goto LABEL_12;
  return (unsigned int)v10;
}
