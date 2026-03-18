/*
 * XREFs of ?SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x14027D0F0
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x14027E850 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmInitializePushLock@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x140064CCC (--$SmmInitializePushLock@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     ??$SmmInitializeSpinLock@$00@@YAXPEAU?$SYSMM_SPINLOCK@$00@@@Z @ 0x140092730 (--$SmmInitializeSpinLock@$00@@YAXPEAU-$SYSMM_SPINLOCK@$00@@@Z.c)
 */

void __fastcall SmmInitializeIommu(struct SYSMM_IOMMU *a1, const struct SYSMM_ADAPTER_CREATE_PARAMS *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  PMDL Mdl; // rax

  SmmInitializeSpinLock<1>((_DWORD *)a1 + 2);
  SmmInitializePushLock<1>((_QWORD *)a1 + 2);
  SmmInitializePushLock<1>(a1);
  v4 = *(_DWORD *)(v3 + 16) & 0x3F;
  *((_DWORD *)a1 + 8) = 0;
  *((_OWORD *)a1 + 16) = xmmword_140130B78;
  *((_DWORD *)a1 + 6) = v4;
  v5 = *(_DWORD *)(v3 + 12);
  *((_QWORD *)a1 + 6) = 0LL;
  *((_DWORD *)a1 + 10) = 1;
  *((_QWORD *)a1 + 38) = 0LL;
  *((_OWORD *)a1 + 17) = xmmword_140130B88;
  *((_OWORD *)a1 + 18) = xmmword_140130B98;
  if ( (v5 & 1) == 0 )
  {
    *((_QWORD *)a1 + 8) = 0LL;
    SmmInitializeSpinLock<1>((_DWORD *)a1 + 18);
    ExInitializeLookasideListEx(
      (PLOOKASIDE_LIST_EX)((char *)a1 + 80),
      0LL,
      0LL,
      (POOL_TYPE)512,
      0,
      0x28uLL,
      0x34737844u,
      0);
    v6 = 256;
    Mdl = IoAllocateMdl(0LL, 0x100000u, 0, 0, 0LL);
    *((_QWORD *)a1 + 22) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement(&dword_14015E630);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 2810;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate Iommu staging MDL",
        2810LL,
        0LL,
        0LL,
        0LL,
        0LL);
      *((_QWORD *)a1 + 22) = (char *)a1 + 184;
      v6 = 1;
    }
    *((_DWORD *)a1 + 60) = v6;
  }
}
