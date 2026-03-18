/*
 * XREFs of ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@QEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1400EBA34
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DCBA4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBUVIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x14010CD74 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBU.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1400EBFB0 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        bool a7,
        struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *a8)
{
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v8; // r10
  unsigned int v10; // ebp
  __int64 v12; // r13
  unsigned int v13; // edx
  unsigned int v14; // r8d
  int v15; // r9d
  char v16; // r14
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned __int8 v19; // r11
  __int64 v20; // r13
  unsigned int v21; // edx
  unsigned int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int8 result; // al
  struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *v27; // rdx
  unsigned int v28; // r8d
  int v29; // r9d
  __int64 v30; // r10
  UINT Value; // ecx
  __int64 v32; // rcx
  unsigned int v33; // r8d
  unsigned int i; // edx
  __int64 v35; // rax
  __int64 v36; // [rsp+A0h] [rbp+8h]
  char v38; // [rsp+B0h] [rbp+18h]

  v8 = a4;
  v10 = a3;
  v36 = a2;
  v12 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
  if ( (~*(_DWORD *)(v12 + 60) & a3) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v25 = 12141;
    goto LABEL_26;
  }
  v13 = a3;
  v14 = 0;
  v15 = 0;
  if ( !v13 )
    goto LABEL_8;
  do
  {
    if ( (v13 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 1648) + 8LL * v14) + 104LL) & 0x1001) == 0 )
      v15 |= 1 << v14;
    ++v14;
    v13 >>= 1;
  }
  while ( v13 );
  v16 = 0;
  if ( !v15 )
LABEL_8:
    v16 = 1;
  v17 = v10;
  v18 = 0;
  while ( v17 )
  {
    if ( (v17 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 1648) + 8LL * v18) + 104LL) & 0x1001) != 0 )
    {
      v38 = 1;
      goto LABEL_15;
    }
    v17 >>= 1;
    ++v18;
  }
  v38 = 0;
LABEL_15:
  if ( (v8->Value & 0x40000) != 0 && !v16 )
  {
    WdLogSingleEntry0(1LL);
    v25 = 12155;
    goto LABEL_26;
  }
  if ( (v8->Value & 0x20000) == 0 )
  {
    v19 = v38;
LABEL_18:
    v20 = v36;
    goto LABEL_19;
  }
  if ( VIDMM_GLOBAL::VerifySegmentSet(this, a2, v10, 0x10000u, 0LL) )
  {
    v19 = v38;
    if ( v38 )
    {
      WdLogSingleEntry0(1LL);
      v25 = 12202;
      goto LABEL_26;
    }
    v33 = 0;
    for ( i = v10; i; i >>= 1 )
    {
      if ( (i & 1) != 0 )
      {
        v35 = *(_QWORD *)(*(_QWORD *)(v12 + 1648) + 8LL * v33);
        if ( a5 > *(_QWORD *)(v35 + 432) )
        {
          WdLogSingleEntry0(1LL);
          v25 = 12217;
          goto LABEL_26;
        }
        if ( (*(_DWORD *)(v35 + 104) & 0x20) != 0 )
        {
          WdLogSingleEntry0(1LL);
          v25 = 12222;
          goto LABEL_26;
        }
      }
      ++v33;
    }
    v8 = a4;
    goto LABEL_18;
  }
  v20 = v36;
  v32 = *(_QWORD *)(*((_QWORD *)this + 3) + 2992LL);
  if ( (*(_DWORD *)(344 * v36 + v32 + 16) & 0x10) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v25 = 12194;
    goto LABEL_26;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v32);
    WdLogGlobalForLineNumber = 12173;
  }
  v8 = a4;
  v19 = v38;
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 420LL) != 1297040209 )
    a4->Value &= ~0x20000u;
LABEL_19:
  v21 = v10;
  v22 = 0;
  v23 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v20);
  if ( (~*(_DWORD *)(v23 + 60) & v10) == 0 )
  {
    while ( v21 )
    {
      if ( (v21 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 1648) + 8LL * v22) + 104LL) & 0x20) != 0 )
      {
        if ( !a6 )
        {
          WdLogSingleEntry0(1LL);
          v25 = 12244;
          goto LABEL_26;
        }
        if ( a6 >= a5 )
        {
          v27 = a8;
          *(_DWORD *)a8 |= 4u;
          goto LABEL_29;
        }
        WdLogSingleEntry0(1LL);
        v25 = 12250;
        goto LABEL_26;
      }
      v21 >>= 1;
      ++v22;
    }
  }
  v27 = a8;
  *(_DWORD *)a8 &= ~4u;
LABEL_29:
  if ( (v8->Value & 0x800004) == 4 )
  {
    if ( *((_BYTE *)this + 7017) )
    {
      v28 = 0;
      v29 = 0;
      v30 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
      if ( (~*(_DWORD *)(v30 + 60) & v10) != 0 )
        goto LABEL_38;
      if ( v10 )
      {
        do
        {
          if ( (v10 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 1648) + 8LL * v28) + 104LL) & 0x10) == 0 )
            v29 |= 1 << v28;
          ++v28;
          v10 >>= 1;
        }
        while ( v10 );
        if ( v29 )
        {
LABEL_38:
          WdLogSingleEntry0(1LL);
          v25 = 12280;
LABEL_26:
          WdLogGlobalForLineNumber = v25;
          DxgkLogInternalTriageEvent(v24, 0x40000LL);
          return 0;
        }
      }
      v8 = a4;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 8) == 0 && !v16 )
    {
      WdLogSingleEntry0(1LL);
      v25 = 12287;
      goto LABEL_26;
    }
  }
  Value = v8->Value;
  if ( (v8->Value & 0x20000001) == 0x20000001 && !v16 && (Value & 0x200) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v25 = 12298;
    goto LABEL_26;
  }
  if ( (Value & 0x100000) != 0 && !v16 )
  {
    WdLogSingleEntry0(1LL);
    v25 = 12305;
    goto LABEL_26;
  }
  if ( (Value & 0x4000) != 0 && !v16 )
  {
    WdLogSingleEntry0(1LL);
    v25 = 12312;
    goto LABEL_26;
  }
  if ( a7 && (Value & 1) != 0 && !v16 )
  {
    WdLogSingleEntry0(1LL);
    v25 = 12324;
    goto LABEL_26;
  }
  result = 1;
  *(_DWORD *)v27 = (2 * v19) | v16 & 0xFD | *(_DWORD *)v27 & 0xFFFFFFFC;
  return result;
}
