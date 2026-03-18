/*
 * XREFs of ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400D364C
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400D339C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x1400358FC (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1400914E4 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400B983C (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400B9DA4 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1400BF1F8 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::InitPagingProcess(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  VIDMM_PROCESS *v2; // rax
  unsigned int v5; // esi
  VIDMM_DEVICE *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  void *KmdProcessHandle; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax

  v2 = g_pVidMmSystemProcess;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = v2;
  v5 = -1073741823;
  v6 = (VIDMM_DEVICE *)operator new(400LL, 0x38306956u, 256LL);
  if ( v6 )
    v6 = VIDMM_DEVICE::VIDMM_DEVICE(v6, a2, 0LL);
  *((_QWORD *)this + 1) = v6;
  if ( !v6 )
  {
    _InterlockedIncrement(&dword_140081878);
    WdLogSingleEntry0(6LL);
    v8 = 262145LL;
    WdLogGlobalForLineNumber = 9573;
LABEL_16:
    DxgkLogInternalTriageEvent(v7, v8);
    VIDMM_PAGING_PROCESS::DestroyPagingProcess(this);
    return v5;
  }
  v9 = VIDMM_DEVICE::Init(v6, 1, 0LL);
  v5 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(1LL, v9);
    WdLogGlobalForLineNumber = 9582;
LABEL_15:
    v8 = 0x40000LL;
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 40936LL) & 0x10) != 0 )
  {
    KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(
                         *(DXGPROCESS **)(*(_QWORD *)this + 32LL),
                         *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL));
    v11 = 0LL;
    for ( *((_QWORD *)this + 3) = KmdProcessHandle;
          (unsigned int)v11 < *((_DWORD *)a2 + 1736);
          v11 = (unsigned int)(v11 + 1) )
    {
      v12 = *((_QWORD *)this + v11 + 4);
      if ( v12 )
        *(_QWORD *)(v12 + 104) = *((_QWORD *)this + 1);
    }
  }
  if ( !*((_BYTE *)a2 + 40939) )
  {
    v13 = VIDMM_PROCESS::OpenAdapter((struct _KTHREAD **)g_pVidMmSystemProcess, a2);
    v5 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(1LL, v13);
      WdLogGlobalForLineNumber = 9604;
      goto LABEL_15;
    }
    *((_BYTE *)a2 + 40939) = 1;
  }
  return 0LL;
}
