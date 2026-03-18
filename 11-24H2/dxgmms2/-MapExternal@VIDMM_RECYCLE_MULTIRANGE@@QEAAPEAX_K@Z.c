/*
 * XREFs of ?MapExternal@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K@Z @ 0x1401038EC
 * Callers:
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K@Z @ 0x140105380 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::MapExternal(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rdi
  __int64 v4; // rbp
  _DWORD *v6; // rax
  __int64 v7; // r15
  int v8; // esi
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+90h] [rbp+8h] BYREF
  __int64 v15; // [rsp+98h] [rbp+10h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 10);
  v3 = 0LL;
  v4 = *((_QWORD *)this + 6);
  v16 = a2;
  v14 = v4;
  v6 = *(_DWORD **)(v2 + 32);
  v7 = *(_QWORD *)(v2 + 56);
  v15 = 0LL;
  v8 = ((*v6 - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    v11 = -1073741823;
    goto LABEL_6;
  }
  CurrentProcess = PsGetCurrentProcess(this, a2, -((*v6 - 4) & 0xFFFFFFFD), v2);
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v11 = (*((__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
         + 3))(
          v7,
          CurrentProcess,
          &v15,
          0LL,
          a2,
          &v14,
          &v16,
          2,
          0,
          v8);
  if ( v11 < 0 )
  {
LABEL_6:
    _InterlockedIncrement(&dword_1400817C0);
    WdLogSingleEntry2(6LL, 1LL, v11);
    WdLogGlobalForLineNumber = 987;
    DxgkLogInternalTriageEvent(v13, 262145LL);
    return v3;
  }
  return v15 + v4 - v14;
}
