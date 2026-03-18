/*
 * XREFs of LockParavirtualizedAllocationOnHost @ 0x140095B64
 * Callers:
 *     MapInSystemMemory @ 0x1400D9420 (MapInSystemMemory.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1400A8C34 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F7E30 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall LockParavirtualizedAllocationOnHost(struct VIDMM_GLOBAL_ALLOC **a1)
{
  struct VIDMM_GLOBAL_ALLOC *v1; // rbx
  void **v2; // rdi
  VIDMM_PROCESS *v3; // rsi
  struct _MDL *FullMDL; // rax
  int v5; // edi
  __int64 v7; // rcx

  v1 = *a1;
  v2 = (void **)((char *)*a1 + 424);
  if ( *v2 )
    return 0LL;
  v3 = a1[1];
  FullMDL = VidMmGetFullMDL(*a1, 0LL);
  if ( FullMDL )
  {
    v5 = VIDMM_PROCESS::MapHostAddressesToGuest(v3, FullMDL, *((_QWORD *)v1 + 52), v2, (unsigned __int64 *)v1 + 54);
    if ( v5 >= 0 )
      return 0LL;
  }
  else
  {
    v5 = -1073741823;
  }
  WdLogSingleEntry1(1LL, v5);
  WdLogGlobalForLineNumber = 8060;
  DxgkLogInternalTriageEvent(v7, 0x40000LL);
  return (unsigned int)v5;
}
