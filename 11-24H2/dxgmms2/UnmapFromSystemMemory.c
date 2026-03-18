/*
 * XREFs of UnmapFromSystemMemory @ 0x1400F9C18
 * Callers:
 *     ?Unlock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1400E8504 (-Unlock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     UnlockParavirtualizedAllocationOnHost @ 0x14009666C (UnlockParavirtualizedAllocationOnHost.c)
 */

void __fastcall UnmapFromSystemMemory(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  v4 = *a1;
  if ( (*(_DWORD *)(*a1 + 28) & 0x4000) != 0 )
  {
    UnlockParavirtualizedAllocationOnHost(*a1);
  }
  else
  {
    v6 = **(unsigned int **)(v4 + 392);
    if ( (v6 & 0x40000) != 0 )
    {
      if ( (v6 & 0x20000000) != 0 )
      {
        v7 = a1[2];
        CurrentProcess = PsGetCurrentProcess(v6, v4, a3, a4);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(CurrentProcess, v7);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v4 + 240) + 80LL))(
          *(_QWORD *)(v4 + 240),
          *(_QWORD *)(v4 + 248),
          a1[2]);
      }
      a1[2] = 0LL;
    }
  }
}
