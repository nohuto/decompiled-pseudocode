/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K@Z @ 0x1400A1EF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocationExternal(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rdi
  __int64 CurrentProcess; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF
  __int64 v17; // [rsp+98h] [rbp+10h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+18h] BYREF

  v18 = a3;
  v16 = 0LL;
  v4 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess() != v4 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v5 = 0LL;
    v6 = *((_QWORD *)a2 + 4);
    v7 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  }
  else
  {
    v8 = *((_QWORD *)a2 + 1);
    v7 = 4;
    v5 = *((_QWORD *)a2 + 2);
    v6 = *(_QWORD *)(v8 + 88);
    if ( ((*(_DWORD *)(v8 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v7 = 1028;
  }
  v17 = v5;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1400817A0);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2550;
    DxgkLogInternalTriageEvent(v9, 262145LL);
    v10 = -1073741823;
LABEL_9:
    _InterlockedIncrement(&dword_1400817A0);
    WdLogSingleEntry1(6LL, v10);
    WdLogGlobalForLineNumber = 2574;
    DxgkLogInternalTriageEvent(v11, 262145LL);
    return v16;
  }
  v13 = v18;
  CurrentProcess = PsGetCurrentProcess();
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v10 = (*((__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
         + 3))(
          v6,
          CurrentProcess,
          &v16,
          0LL,
          v13,
          &v17,
          &v18,
          2,
          0,
          v7);
  if ( v10 < 0 )
    goto LABEL_9;
  return v5 - v17 + v16;
}
