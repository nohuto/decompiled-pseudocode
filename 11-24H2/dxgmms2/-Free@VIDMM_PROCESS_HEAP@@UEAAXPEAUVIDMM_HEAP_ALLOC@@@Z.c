/*
 * XREFs of ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400A2C30
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14003C268 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140042B80 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z @ 0x1400A2FE8 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400C13C0 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_HEAP::Free(VIDMM_PROCESS_HEAP *this, char *Entry)
{
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // r8
  __int64 *v7; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v9; // eax
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

  v4 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess() != v4 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  if ( (*(_DWORD *)Entry & 1) != 0 )
  {
    v5 = *((_DWORD *)Entry + 6);
    if ( (unsigned int)(v5 - 3) > 3 )
    {
      MmUnsecureVirtualMemory(*((HANDLE *)Entry + 6));
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v7 = (__int64 *)(Entry + 56);
      (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
        -1LL,
        Entry + 8,
        Entry + 56,
        0x8000LL);
    }
    else
    {
      if ( (unsigned int)(v5 - 5) <= 1 )
        MmUnmapViewInSystemSpace(*((PVOID *)Entry + 1));
      ObCloseHandle(*((HANDLE *)Entry + 5), (*((_QWORD *)Entry + 5) & 0xFFFFFFFF80000000uLL) == 0);
      VidMmDereferenceObjectAsync(*((PVOID *)Entry + 4));
      v7 = (__int64 *)(Entry + 56);
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) -= *v7;
    *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *v7;
    --*(_DWORD *)(*((_QWORD *)this + 1) + 156LL);
    v9 = *((_DWORD *)Entry + 6);
    v10 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v9 == 1 )
    {
      v10[20] -= *v7;
      v11 = (_QWORD *)*((_QWORD *)this + 1);
      v11[21] -= *v7;
    }
    else
    {
      v12 = v9 == 2;
      v13 = *v7;
      if ( v12 )
      {
        v10[22] -= v13;
        v11 = (_QWORD *)*((_QWORD *)this + 1);
        v11[23] -= *v7;
      }
      else
      {
        v10[24] -= v13;
        v11 = (_QWORD *)*((_QWORD *)this + 1);
        v11[25] -= *v7;
      }
    }
    if ( (byte_140081241 & 0x10) != 0 )
    {
      if ( (unsigned int)(*((_DWORD *)Entry + 6) - 3) > 3 )
        v14 = *((_QWORD *)Entry + 1);
      else
        v14 = *((_QWORD *)Entry + 4);
      McTemplateK0qxxx_EtwWriteTransfer(
        (__int64)v11,
        &EventDestroyProcessAllocationDetails,
        v6,
        *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
        (char)Entry,
        *v7,
        v14);
    }
    if ( (byte_140081242 & 4) != 0 )
    {
      v15 = *((unsigned int *)Entry + 6);
      if ( (unsigned int)(v15 - 3) > 3 )
        v16 = *((_QWORD *)Entry + 1);
      else
        v16 = *((_QWORD *)Entry + 4);
      LODWORD(v18) = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
      LODWORD(v17) = *((_DWORD *)Entry + 6);
      McTemplateK0pxqqt_EtwWriteTransfer(v15, &EventDestroyProcessAllocation, *v7, v16, *v7, v17, v18, 0);
    }
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), Entry);
  }
  else
  {
    VIDMM_PROCESS_HEAP::FreeSmallAllocation(this, Entry);
  }
}
