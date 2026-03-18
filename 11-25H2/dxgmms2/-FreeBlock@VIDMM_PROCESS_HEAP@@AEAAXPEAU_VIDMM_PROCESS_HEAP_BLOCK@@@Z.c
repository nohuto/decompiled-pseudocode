/*
 * XREFs of ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1400A15E4
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEE@Z @ 0x1400A0F0C (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z @ 0x1400A1768 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043F1C (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x14004CA30 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400C0A60 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeBlock(VIDMM_PROCESS_HEAP *this, struct _VIDMM_PROCESS_HEAP_BLOCK *a2)
{
  char *v2; // rax
  __int64 v4; // r8
  char **v6; // rdx
  int v7; // ecx
  __int64 *v8; // rdi
  void *v9; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v11; // eax
  _QWORD *v12; // rcx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  VIDMM_LINEAR_POOL *v17; // rcx

  v2 = (char *)a2 + 8;
  v4 = *((_QWORD *)a2 + 1);
  if ( *(struct _VIDMM_PROCESS_HEAP_BLOCK **)(v4 + 8) != (struct _VIDMM_PROCESS_HEAP_BLOCK *)((char *)a2 + 8)
    || (v6 = (char **)*((_QWORD *)a2 + 2), *v6 != v2) )
  {
    __fastfail(3u);
  }
  *v6 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = *((_DWORD *)a2 + 20);
  if ( (unsigned int)(v7 - 3) > 3 )
  {
    v9 = (void *)*((_QWORD *)a2 + 7);
    if ( v9 )
      MmUnsecureVirtualMemory(v9);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v8 = (__int64 *)((char *)a2 + 40);
    (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)a2 + 32,
      (char *)a2 + 40,
      0x8000LL);
  }
  else
  {
    if ( (unsigned int)(v7 - 5) <= 1 )
      MmUnmapViewInSystemSpace(*((PVOID *)a2 + 4));
    ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
    VidMmDereferenceObjectAsync(*((PVOID *)a2 + 11));
    v8 = (__int64 *)((char *)a2 + 40);
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) -= *v8;
  --*(_DWORD *)(*((_QWORD *)this + 1) + 152LL);
  v11 = *((_DWORD *)a2 + 20);
  v12 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v11 == 1 )
  {
    v12[21] -= *v8;
  }
  else
  {
    v13 = v11 == 2;
    v14 = *v8;
    if ( v13 )
      v12[23] -= v14;
    else
      v12[25] -= v14;
  }
  if ( (byte_140081242 & 4) != 0 )
  {
    v15 = *((unsigned int *)a2 + 20);
    if ( (unsigned int)(v15 - 3) > 3 )
      v16 = *((_QWORD *)a2 + 4);
    else
      v16 = *((_QWORD *)a2 + 11);
    McTemplateK0pxqqt_EtwWriteTransfer(
      v15,
      &EventDestroyProcessAllocation,
      *v8,
      v16,
      *v8,
      *((_DWORD *)a2 + 20),
      *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
      1);
  }
  v17 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 9);
  if ( v17 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v17);
  operator delete(a2);
}
