/*
 * XREFs of ?DestroyCoreState@DXGDOORBELL@@IEAAXXZ @ 0x1401D2D9C
 * Callers:
 *     ?DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ @ 0x1401D2F90 (-DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035DA0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14003EB70 (-VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     ?VidMmUnmapCpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14004AA28 (-VidMmUnmapCpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DdiDestroyDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYDOORBELL@@@Z @ 0x1401A1ABC (-DdiDestroyDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYDOORBELL@@@Z.c)
 *     ?DdiDisconnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DISCONNECTDOORBELL@@@Z @ 0x1401A26D0 (-DdiDisconnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DISCONNECTDOORBELL@@@Z.c)
 */

void __fastcall DXGDOORBELL::DestroyCoreState(DXGDOORBELL *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  VIDMM_EXPORT *v6; // rcx
  __int64 v7; // rdx
  struct VIDMM_PROCESS *v8; // rdx
  struct VIDMM_MONITORED_FENCE_STORAGE *v9; // rdi
  _QWORD *v10; // rax
  struct DXGGLOBAL *Global; // rax
  void *v12; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v14; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v15; // rax
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 153) )
  {
    if ( *((_QWORD *)this + 1)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 16LL) + 16LL)
                   + 200LL) != 4 )
    {
      if ( (unsigned int)**((_QWORD **)this + 17) <= 1 )
      {
        v16[0] = *((_QWORD *)this + 1);
        v4 = *((_QWORD *)this + 2);
        v16[1] = 0LL;
        ADAPTER_RENDER::DdiDisconnectDoorbell(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 16LL),
          (struct _DXGKARG_DISCONNECTDOORBELL *)v16,
          a3);
      }
      v17 = *((_QWORD *)this + 1);
      ADAPTER_RENDER::DdiDestroyDoorbell(
        *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 16LL),
        (struct _DXGKARG_DESTROYDOORBELL *)&v17,
        a3);
      *((_QWORD *)this + 1) = 0LL;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 16LL)
                                                                       + 16LL)
                                                           + 736LL)
                                               + 8LL)
                                   + 1088LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL));
    if ( *((_QWORD *)this + 18) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      v6 = *(VIDMM_EXPORT **)(*(_QWORD *)(v5 + 16) + 760LL);
      v7 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
      if ( v7 )
        v8 = *(struct VIDMM_PROCESS **)(v7 + 8);
      else
        v8 = 0LL;
      v9 = (DXGDOORBELL *)((char *)this + 88);
      VIDMM_EXPORT::VidMmUnmapCpuVA(v6, v8, (DXGDOORBELL *)((char *)this + 88));
      *((_QWORD *)this + 18) = 0LL;
    }
    else
    {
      v9 = (DXGDOORBELL *)((char *)this + 88);
    }
    v10 = (_QWORD *)*((_QWORD *)this + 17);
    if ( v10 )
    {
      *v10 = 3LL;
      Global = DXGGLOBAL::GetGlobal();
      VIDMM_EXPORT::VidMmFreeFenceStorageSlot(*((VIDMM_EXPORT **)Global + 33), v9, 0);
      *((_QWORD *)this + 17) = 0LL;
    }
    v12 = (void *)*((_QWORD *)this + 8);
    if ( v12 )
    {
      MmUnsecureVirtualMemory(v12);
      *((_QWORD *)this + 8) = 0LL;
    }
    if ( *((_QWORD *)this + 7) )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
        -1LL,
        (char *)this + 56,
        (char *)this + 40,
        0x8000LL);
      *((_QWORD *)this + 7) = 0LL;
    }
    v14 = (void *)*((_QWORD *)this + 10);
    if ( v14 )
    {
      MmUnsecureVirtualMemory(v14);
      *((_QWORD *)this + 10) = 0LL;
    }
    if ( *((_QWORD *)this + 9) )
    {
      v15 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, char *, char *, __int64))v15 + 2))(
        -1LL,
        (char *)this + 72,
        (char *)this + 48,
        0x8000LL);
      *((_QWORD *)this + 9) = 0LL;
    }
    *((_BYTE *)this + 153) = 1;
  }
}
