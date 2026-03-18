/*
 * XREFs of ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x1400F77E4
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F515C (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x140037A68 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CleanupVadReference(VIDMM_GLOBAL *this, struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2)
{
  __int64 *v2; // rax
  __int64 v4; // rcx
  __int64 **v5; // rdx
  volatile signed __int32 *v6; // rcx

  v2 = (__int64 *)*((_QWORD *)a2 + 4);
  if ( v2 )
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( *(__int64 **)(v4 + 8) != v2 || (v5 = (__int64 **)v2[1], *v5 != v2) )
        __fastfail(3u);
      *v5 = (__int64 *)v4;
      *(_QWORD *)(v4 + 8) = v5;
      *v2 = 0LL;
      v2[1] = 0LL;
    }
    v6 = (volatile signed __int32 *)*((_QWORD *)a2 + 1);
    if ( _InterlockedExchangeAdd(v6 + 34, 0xFFFFFFFF) == 1 )
    {
      if ( v6 )
        VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((VIDMM_MAPPED_VA_RANGE *)v6);
    }
    operator delete(*((void **)a2 + 4));
    *((_QWORD *)a2 + 4) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
}
