/*
 * XREFs of ?VerifyBudgetGroups@VIDMM_GLOBAL@@QEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1400F022C
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DCBA4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBUVIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x14010CD74 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBU.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifyBudgetGroups(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_VERIFY_BUDGET_GROUPS *a5)
{
  __int64 v5; // r10
  __int64 v6; // rsi
  unsigned int v9; // r11d
  __int64 v10; // rbx
  __int64 v11; // r9
  unsigned int i; // edx
  unsigned __int8 v13; // cl
  int v14; // eax
  int v15; // r11d
  int v16; // edx
  __int64 v17; // r9
  int v18; // r10d
  __int64 v19; // rbx
  __int64 v20; // rcx
  bool v22; // zf

  v5 = 0LL;
  v6 = a2;
  v9 = a3;
  v10 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
  if ( (~*(_DWORD *)(v10 + 60) & a3) == 0 )
  {
    while ( v9 )
    {
      if ( (v9 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 1648) + 8 * v5) + 104LL) & 0x80000) != 0 )
      {
        LOBYTE(v5) = 1;
        goto LABEL_7;
      }
      v9 >>= 1;
      v5 = (unsigned int)(v5 + 1);
    }
    LOBYTE(v5) = 0;
LABEL_7:
    v11 = 0LL;
    for ( i = a3; i; i >>= 1 )
    {
      if ( (i & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 1648) + 8 * v11) + 104LL) & 0x100000) != 0 )
      {
        v13 = 1;
        goto LABEL_13;
      }
      v11 = (unsigned int)(v11 + 1);
    }
  }
  v13 = 0;
LABEL_13:
  if ( a4 )
  {
    v14 = *((_DWORD *)a4 + 26);
    if ( (v14 & 0x80000) != 0 )
    {
LABEL_15:
      v15 = 0;
      v16 = 2 * v13;
      goto LABEL_16;
    }
    v22 = (v14 & 0x100000) == 0;
  }
  else
  {
    if ( (_BYTE)v5 )
      goto LABEL_15;
    v22 = v13 == 0;
  }
  if ( v22 )
  {
    v16 = 3;
    v15 = 2;
    goto LABEL_26;
  }
  v15 = 1;
  v16 = (unsigned __int8)v5 + 1;
LABEL_16:
  if ( v16 != 3 )
  {
    v17 = 0LL;
    v18 = 0;
    v19 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v6);
    if ( (~*(_DWORD *)(v19 + 60) & a3) != 0 )
      goto LABEL_24;
    if ( a3 )
    {
      do
      {
        if ( (a3 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 1648) + 8 * v17) + 104LL) & 0x180000) == 0 )
          v18 |= 1 << v17;
        v17 = (unsigned int)(v17 + 1);
        a3 >>= 1;
      }
      while ( a3 );
      if ( v18 )
      {
LABEL_24:
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 12457;
        DxgkLogInternalTriageEvent(v20, 0x40000LL);
        return 0;
      }
    }
  }
LABEL_26:
  if ( a5 )
    *(_DWORD *)a5 = v15 | (16 * v16) | *(_DWORD *)a5 & 0xFFFFFF00;
  return 1;
}
