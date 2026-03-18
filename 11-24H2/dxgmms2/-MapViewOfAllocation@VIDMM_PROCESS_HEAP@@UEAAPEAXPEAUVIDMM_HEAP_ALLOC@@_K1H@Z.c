/*
 * XREFs of ?MapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K1H@Z @ 0x1400A3490
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
char *__fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 *v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  __int64 CurrentProcess; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  char *v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rcx
  ULONG_PTR v21; // rax
  __int64 v22; // rbx
  NTSTATUS v23; // eax
  char *v24; // r14
  __int64 v25; // rcx
  PVOID Section; // [rsp+60h] [rbp-18h]
  __int64 v28; // [rsp+68h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+C0h] [rbp+48h] BYREF
  PVOID MappedBase; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v31; // [rsp+D0h] [rbp+58h]
  __int64 v32; // [rsp+D8h] [rbp+60h] BYREF

  v32 = a4;
  v31 = a3;
  v5 = (__int64 *)*((_QWORD *)this + 1);
  v6 = 0LL;
  MappedBase = 0LL;
  v7 = a3;
  v9 = *v5;
  if ( PsGetCurrentProcess() != v9 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  v10 = *(_DWORD *)a2;
  LODWORD(ViewSize) = 4;
  if ( (v10 & 1) != 0 )
  {
    v11 = v7;
    Section = (PVOID)*((_QWORD *)a2 + 4);
    LODWORD(ViewSize) = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  }
  else
  {
    v12 = *((_QWORD *)a2 + 1);
    v11 = v7 + *((_QWORD *)a2 + 2);
    Section = *(PVOID *)(v12 + 88);
    if ( ((*(_DWORD *)(v12 + 80) - 4) & 0xFFFFFFFD) != 0 )
      LODWORD(ViewSize) = 1028;
  }
  v28 = v11;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1400817C0);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2335;
    DxgkLogInternalTriageEvent(v13, 262145LL);
    v14 = -1073741823;
  }
  else
  {
    v15 = v32;
    CurrentProcess = PsGetCurrentProcess();
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v14 = (*((__int64 (__fastcall **)(PVOID, __int64, PVOID *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, _DWORD))VirtualMemoryInterface
           + 3))(
            Section,
            CurrentProcess,
            &MappedBase,
            0LL,
            v15,
            &v28,
            &v32,
            2,
            0,
            ViewSize);
    if ( v14 >= 0 )
    {
      v18 = (char *)MappedBase;
      *(_DWORD *)a2 |= 2u;
      v19 = v11 - v28;
      *((_QWORD *)a2 + 11) = v18;
      return &v18[v19];
    }
    v7 = v31;
  }
  _InterlockedIncrement(&dword_1400817C0);
  WdLogSingleEntry2(6LL, a5, v14);
  WdLogGlobalForLineNumber = 2381;
  DxgkLogInternalTriageEvent(v20, 262145LL);
  if ( a5 )
    return (char *)MappedBase;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v21 = *((_QWORD *)a2 + 7);
    v22 = 0LL;
  }
  else
  {
    v22 = *((_QWORD *)a2 + 2);
    v21 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 40LL);
  }
  ViewSize = v21;
  v23 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
  if ( v23 < 0 )
  {
    _InterlockedIncrement(&dword_1400817C0);
    WdLogSingleEntry1(6LL, v23);
    WdLogGlobalForLineNumber = 2431;
    DxgkLogInternalTriageEvent(v25, 262145LL);
  }
  else
  {
    v24 = (char *)MappedBase;
    *(_DWORD *)a2 |= 4u;
    *((_QWORD *)a2 + 11) = v24;
    return &v24[v22 + v7];
  }
  return (char *)v6;
}
