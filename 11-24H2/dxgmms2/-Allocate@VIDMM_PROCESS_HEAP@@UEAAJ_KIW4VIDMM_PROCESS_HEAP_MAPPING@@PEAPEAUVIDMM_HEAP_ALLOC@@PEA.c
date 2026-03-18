/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX3PEAEEE@Z @ 0x1400A1970
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140036C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1400371E0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14003C268 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140042B80 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEE@Z @ 0x1400A278C (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        __int64 a1,
        SIZE_T a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        _BYTE *a8,
        char a9)
{
  __int64 v10; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // r13
  _QWORD *v15; // rcx
  _BYTE *v16; // rbx
  SIZE_T v17; // rdx
  unsigned int SmallAllocation; // ebx
  _DWORD *v20; // rax
  _DWORD *v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  int v25; // edi
  int v26; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v27; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // ecx
  NTSTATUS inserted; // eax
  __int64 v34; // rdx
  NTSTATUS v35; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PVOID v37; // rcx
  _QWORD *v38; // rcx
  PVOID v39; // rax
  _QWORD *v40; // rcx
  PVOID v41; // r9
  PVOID v42; // rcx
  __int64 NewObject; // [rsp+20h] [rbp-79h]
  PHANDLE Handle; // [rsp+28h] [rbp-71h]
  PHANDLE Handlea; // [rsp+28h] [rbp-71h]
  __int64 v46; // [rsp+30h] [rbp-69h]
  __int64 v47; // [rsp+38h] [rbp-61h]
  PVOID Address; // [rsp+50h] [rbp-49h] BYREF
  PVOID Object; // [rsp+58h] [rbp-41h] BYREF
  int v50; // [rsp+60h] [rbp-39h]
  int v51; // [rsp+68h] [rbp-31h] BYREF
  __int64 v52; // [rsp+70h] [rbp-29h]
  char v53; // [rsp+78h] [rbp-21h]
  HANDLE v54; // [rsp+80h] [rbp-19h] BYREF
  HANDLE v55; // [rsp+88h] [rbp-11h]
  SIZE_T v56; // [rsp+90h] [rbp-9h] BYREF
  PPAGED_LOOKASIDE_LIST Lookaside; // [rsp+98h] [rbp-1h]
  int v58; // [rsp+E0h] [rbp+47h]
  SIZE_T Size; // [rsp+E8h] [rbp+4Fh] BYREF

  Size = a2;
  v51 = -1;
  v10 = a3;
  v52 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v53 = 1;
    v51 = 8004;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  Address = 0LL;
  Object = 0LL;
  v54 = 0LL;
  v58 = 0;
  v50 = 0;
  v55 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v12[3] = Size;
    v12[4] = v10;
    v12[5] = a1;
    WdLogGlobalForLineNumber = 283;
  }
  v13 = **(_QWORD **)(a1 + 8);
  if ( PsGetCurrentProcess() != v13 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  v14 = a5;
  v15 = a6;
  v16 = a8;
  v17 = Size;
  *a5 = 0LL;
  *v15 = 0LL;
  *v16 = 0;
  if ( v17 < (unsigned int)dword_140081458 )
  {
    SmallAllocation = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(a1, v17, (unsigned int)v10, a4, v14, v15, v16, a9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 )
    {
      if ( (byte_140081242 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
    }
    return SmallAllocation;
  }
  Lookaside = (PPAGED_LOOKASIDE_LIST)(a1 + 64);
  v20 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v21 = v20;
  if ( !v20 )
  {
    LODWORD(v22) = -1073741801;
    _InterlockedIncrement(&dword_140081704);
    WdLogSingleEntry0(6LL);
    Handle = 0LL;
    NewObject = 320LL;
    WdLogGlobalForLineNumber = 320;
LABEL_41:
    v34 = 262145LL;
    goto LABEL_42;
  }
  memset(v20, 0, 0x70uLL);
  switch ( a4 )
  {
    case 3u:
      goto LABEL_33;
    case 4u:
LABEL_32:
      v32 = 134479872;
LABEL_34:
      v56 = Size;
      LODWORD(v22) = MmCreateSection(&Object, 0LL, 0LL, &v56, 4, v32, -1LL, 0LL);
      if ( (int)v22 < 0 )
      {
        Object = 0LL;
        _InterlockedIncrement(&dword_1400817C4);
        WdLogSingleEntry0(6LL);
        Handle = 0LL;
        WdLogGlobalForLineNumber = 358;
        NewObject = 358LL;
        goto LABEL_41;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &v54);
      v22 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry2(1LL, Object, inserted);
        WdLogGlobalForLineNumber = 378;
        v34 = 0x40000LL;
        Handle = (PHANDLE)v22;
        NewObject = (__int64)Object;
LABEL_42:
        DxgkLogInternalTriageEvent(v23, v34);
        if ( a4 != 3 && a4 != 4 )
        {
          if ( a4 != 5 && a4 != 6 )
          {
LABEL_46:
            if ( Address )
            {
              VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
              (*((void (__fastcall **)(__int64, PVOID *, SIZE_T *, __int64, __int64, PHANDLE, _QWORD, _QWORD))VirtualMemoryInterface
               + 2))(
                -1LL,
                &Address,
                &Size,
                0x8000LL,
                NewObject,
                Handle,
                0LL,
                0LL);
            }
LABEL_54:
            if ( v21 )
              ExFreeToPagedLookasideList(Lookaside, v21);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
            if ( v53 && (byte_140081242 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer();
            return (unsigned int)v22;
          }
          if ( Address )
            MmUnmapViewInSystemSpace(Address);
        }
        v37 = Object;
        if ( Object )
        {
          if ( v54 )
          {
            ObCloseHandle(v54, ((unsigned __int64)v54 & 0xFFFFFFFF80000000uLL) == 0);
            v37 = Object;
          }
          ObfDereferenceObject(v37);
        }
        goto LABEL_54;
      }
      if ( a4 - 5 <= 1 )
      {
        v35 = MmMapViewInSystemSpace(Object, &Address, &Size);
        v22 = v35;
        if ( v35 < 0 )
        {
          _InterlockedIncrement(&dword_1400817C0);
          WdLogSingleEntry1(6LL, v35);
          WdLogGlobalForLineNumber = 391;
          Handle = 0LL;
          NewObject = v22;
          goto LABEL_41;
        }
      }
      goto LABEL_60;
    case 5u:
LABEL_33:
      v32 = 1208221696;
      goto LABEL_34;
    case 6u:
      goto LABEL_32;
  }
  v24 = 4;
  v25 = 8400896;
  if ( a4 != 2 )
    v24 = 1028;
  v58 = v24;
  v26 = 12288;
  if ( a4 != 2 )
    v26 = 8400896;
  if ( !a9 )
    v25 = v26;
  v50 = v25;
  v27 = DxgkGetVirtualMemoryInterface();
  if ( (*(int (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v27)(-1LL, &Address, 0LL, &Size, v25, v58) < 0 )
  {
    v50 = 12288;
    v28 = DxgkGetVirtualMemoryInterface();
    LODWORD(v22) = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v28)(
                     -1LL,
                     &Address,
                     0LL,
                     &Size,
                     12288,
                     v58);
    if ( (int)v22 < 0 )
    {
      Address = 0LL;
      _InterlockedIncrement(&dword_14008179C);
      WdLogSingleEntry0(6LL);
      v30 = 438LL;
LABEL_31:
      Handle = 0LL;
      NewObject = v30;
      WdLogGlobalForLineNumber = v30;
      DxgkLogInternalTriageEvent(v29, 262145LL);
      goto LABEL_46;
    }
  }
  v55 = MmSecureVirtualMemory(Address, Size, 4u);
  if ( !v55 )
  {
    LODWORD(v22) = -1073741801;
    _InterlockedIncrement(&dword_14008179C);
    WdLogSingleEntry0(6LL);
    v30 = 456LL;
    goto LABEL_31;
  }
LABEL_60:
  *v21 |= 1u;
  v38 = a6;
  *((_QWORD *)v21 + 7) = Size;
  *((_QWORD *)v21 + 6) = v55;
  *((_BYTE *)v21 + 72) = 0;
  *((_QWORD *)v21 + 1) = Address;
  v21[4] = v58;
  v21[5] = v50;
  *((_QWORD *)v21 + 4) = Object;
  *((_QWORD *)v21 + 5) = v54;
  v21[6] = a4;
  *((_QWORD *)v21 + 10) = 0LL;
  v39 = Address;
  *v14 = v21;
  *v38 = v39;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += Size;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) += Size;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 156LL);
  v40 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v40[20] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) += Size;
  }
  else if ( a4 == 2 )
  {
    v40[22] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) += Size;
  }
  else
  {
    v40[24] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) += Size;
  }
  if ( (byte_140081242 & 4) != 0 )
  {
    v41 = Address;
    LODWORD(v47) = 0;
    if ( a4 - 3 <= 3 )
      v41 = Object;
    LODWORD(Handlea) = a4;
    LODWORD(v46) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    McTemplateK0pxqqt_EtwWriteTransfer(
      (unsigned int)v46,
      &EventCreateProcessAllocation,
      v31,
      v41,
      Size,
      Handlea,
      v46,
      v47);
  }
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v42 = Address;
    if ( a4 - 3 <= 3 )
      v42 = Object;
    McTemplateK0qxxx_EtwWriteTransfer(
      (__int64)v42,
      &EventCreateProcessAllocationDetails,
      v31,
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
      (char)v21,
      Size,
      (char)v42);
  }
  *v16 = 1;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 && (byte_140081242 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  return 0LL;
}
