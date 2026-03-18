/*
 * XREFs of MapInSystemMemory @ 0x1400D9420
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z @ 0x1400D9100 (-LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     LockParavirtualizedAllocationOnHost @ 0x140095B64 (LockParavirtualizedAllocationOnHost.c)
 */

__int64 __fastcall MapInSystemMemory(struct VIDMM_GLOBAL_ALLOC **a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct VIDMM_GLOBAL_ALLOC *v4; // r14
  unsigned int v5; // ebp
  int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  int v10; // r15d
  _QWORD *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 CurrentProcess; // rax
  __int64 v24; // rsi
  __int64 v25; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v27; // [rsp+90h] [rbp+8h] BYREF
  __int64 v28; // [rsp+98h] [rbp+10h] BYREF

  v4 = *a1;
  v5 = 0;
  v6 = 0;
  v7 = *((_DWORD *)*a1 + 7);
  v8 = *(_QWORD *)*a1;
  if ( (v7 & 0x4000) != 0 )
    return (unsigned int)LockParavirtualizedAllocationOnHost(a1);
  if ( (v7 & 0x80u) != 0 )
    return v5;
  v10 = **((_DWORD **)v4 + 49);
  if ( (v10 & 0x40000) == 0 )
    return (unsigned int)-1073741823;
  v11 = a1 + 2;
  if ( (v10 & 0x20000000) != 0 )
  {
    v27 = *(_QWORD *)(v8 + 16);
    v22 = v27;
    v28 = 0LL;
    CurrentProcess = PsGetCurrentProcess(a1, a2, v8, a4);
    v24 = *((_QWORD *)v4 + 28);
    v25 = CurrentProcess;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v6 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, unsigned int))VirtualMemoryInterface
          + 3))(
           v24,
           v25,
           v11,
           0LL,
           v22,
           &v28,
           &v27,
           2,
           0,
           ~((_WORD)v10 << 8) & 0x400 | 4u);
  }
  else
  {
    *v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v4 + 30) + 72LL))(
             *((_QWORD *)v4 + 30),
             *((_QWORD *)v4 + 31),
             *(_QWORD *)(v8 + 16));
  }
  if ( *v11 )
    return v5;
  _InterlockedIncrement(&dword_1400817C0);
  v16 = PsGetCurrentProcess(v13, v12, v14, v15);
  WdLogSingleEntry3(6LL, v4, v16, v6);
  WdLogGlobalForLineNumber = 22443;
  PsGetCurrentProcess(v18, v17, v19, v20);
  DxgkLogInternalTriageEvent(v21, 262145LL);
  return 3221225495LL;
}
