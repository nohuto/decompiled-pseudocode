/*
 * XREFs of ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400A13B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x140016220 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043F1C (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z @ 0x1400A1768 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400C0A60 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_HEAP::Free(VIDMM_PROCESS_HEAP *this, char *Entry)
{
  __int64 v4; // rbx
  int v5; // ecx
  __int64 *v6; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v8; // eax
  _QWORD *v9; // rcx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

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
      v6 = (__int64 *)(Entry + 56);
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
      v6 = (__int64 *)(Entry + 56);
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) -= *v6;
    *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *v6;
    --*(_DWORD *)(*((_QWORD *)this + 1) + 156LL);
    v8 = *((_DWORD *)Entry + 6);
    v9 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v8 == 1 )
    {
      v9[20] -= *v6;
      *(_QWORD *)(*((_QWORD *)this + 1) + 168LL) -= *v6;
    }
    else
    {
      v10 = v8 == 2;
      v11 = *v6;
      if ( v10 )
      {
        v9[22] -= v11;
        *(_QWORD *)(*((_QWORD *)this + 1) + 184LL) -= *v6;
      }
      else
      {
        v9[24] -= v11;
        *(_QWORD *)(*((_QWORD *)this + 1) + 200LL) -= *v6;
      }
    }
    if ( (byte_140081241 & 0x10) != 0 )
    {
      if ( (unsigned int)(*((_DWORD *)Entry + 6) - 3) > 3 )
        v12 = *((_QWORD *)Entry + 1);
      else
        v12 = *((_QWORD *)Entry + 4);
      HIDWORD(v16) = HIDWORD(v12);
      v15 = *v6;
      McTemplateK0qxxx_EtwWriteTransfer();
    }
    if ( (byte_140081242 & 4) != 0 )
    {
      v13 = *((unsigned int *)Entry + 6);
      if ( (unsigned int)(v13 - 3) > 3 )
        v14 = *((_QWORD *)Entry + 1);
      else
        v14 = *((_QWORD *)Entry + 4);
      LODWORD(v16) = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
      LODWORD(v15) = *((_DWORD *)Entry + 6);
      McTemplateK0pxqqt_EtwWriteTransfer(v13, &EventDestroyProcessAllocation, *v6, v14, *v6, v15, v16, 0);
    }
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), Entry);
  }
  else
  {
    VIDMM_PROCESS_HEAP::FreeSmallAllocation(this, Entry);
  }
}
