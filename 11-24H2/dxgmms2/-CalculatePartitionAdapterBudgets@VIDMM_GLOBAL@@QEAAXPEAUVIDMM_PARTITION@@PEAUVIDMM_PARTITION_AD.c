/*
 * XREFs of ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x14009C5A4
 * Callers:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x14009C6B0 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x14010CB84 (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CalculatePartitionAdapterBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_PARTITION *a2,
        struct VIDMM_PARTITION_ADAPTER_INFO *a3)
{
  __int64 v3; // r10
  unsigned int v4; // edi
  unsigned __int64 v5; // r11
  unsigned __int64 v8; // r10
  __int64 v9; // r10
  unsigned __int64 v10; // rbx

  v3 = (unsigned int)dword_140081630;
  v4 = 0;
  v5 = *((_QWORD *)a2 + 6);
  if ( *((_DWORD *)a2 + 8) )
    v3 = (unsigned int)dword_140081634;
  v8 = v5 * v3 / 0x64;
  if ( v8 < (unsigned int)dword_140081628 )
  {
    if ( v5 > (unsigned int)dword_14008162C )
    {
      v8 = (v5 - (unsigned int)dword_14008162C) >> 1;
      if ( (unsigned int)dword_140081628 > v8 )
        v8 = (unsigned int)dword_140081628;
    }
    else
    {
      v8 = (unsigned int)dword_140081628;
    }
  }
  *((_QWORD *)a3 + 2) = v8;
  if ( !*((_DWORD *)a2 + 8) )
  {
    v9 = v8 - *((_QWORD *)this + 872);
    *((_QWORD *)a3 + 2) = v9;
    qword_140081620 = v9;
  }
  v10 = *((_QWORD *)a3 + 2);
  if ( qword_1400814E0 && v10 >= qword_1400814E0 )
    v10 = qword_1400814E0;
  if ( *((_DWORD *)this + 1736) )
  {
    do
    {
      VIDMM_GLOBAL::InitializeSegmentGroupState(
        this,
        v4,
        (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                       + *((_QWORD *)a2 + 5)
                                                       + 24)
                                           + 344LL * v4),
        v10);
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 1736) );
  }
}
