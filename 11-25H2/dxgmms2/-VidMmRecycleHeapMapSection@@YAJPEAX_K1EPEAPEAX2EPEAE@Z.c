/*
 * XREFs of ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1400CE7D0
 * Callers:
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1400C4570 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEA.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1400CE718 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidMmRecycleHeapMapSection(
        PVOID Section,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        unsigned __int8 a7,
        unsigned __int8 *ViewSize)
{
  unsigned __int8 *v8; // r15
  int v11; // edi
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v15; // r14d
  char *v16; // rdx
  unsigned __int8 v18; // si
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  char *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+50h] BYREF

  v25 = a3;
  v8 = ViewSize;
  LOBYTE(a4) = -(char)a4;
  v23 = a2;
  v11 = (_BYTE)a4 != 0 ? 4 : 1028;
  MappedBase = 0LL;
  if ( ViewSize )
    *ViewSize = 0;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    v15 = -1073741823;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(Section, a2, a3, a4);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v15 = (*((__int64 (__fastcall **)(PVOID, __int64, PVOID *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
           + 3))(
            Section,
            CurrentProcess,
            &MappedBase,
            0LL,
            a3,
            &v23,
            &v25,
            2,
            0,
            v11);
    if ( v15 >= 0 )
    {
      v16 = (char *)MappedBase;
      *a6 = MappedBase;
      *a5 = &v16[a2 - v23];
      return (unsigned int)v15;
    }
  }
  _InterlockedIncrement(&dword_1400817A0);
  v18 = a7;
  WdLogSingleEntry2(6LL, a7, v15);
  WdLogGlobalForLineNumber = 987;
  DxgkLogInternalTriageEvent(v19, 262145LL);
  if ( !v18 )
  {
    ViewSize = 0LL;
    v20 = MmMapViewInSystemSpace(Section, &MappedBase, (PSIZE_T)&ViewSize);
    v15 = v20;
    if ( v20 < 0 )
    {
      _InterlockedIncrement(&dword_1400817A0);
      WdLogSingleEntry1(6LL, v20);
      WdLogGlobalForLineNumber = 1012;
      DxgkLogInternalTriageEvent(v22, 262145LL);
    }
    else
    {
      if ( v8 )
        *v8 = 1;
      v21 = (char *)MappedBase;
      *a6 = MappedBase;
      *a5 = &v21[a2];
    }
  }
  return (unsigned int)v15;
}
