/*
 * XREFs of ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x140268554
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038F310 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x140188460 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1402680D8 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x14031B3D8 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemovePathByTarget(CCD_TOPOLOGY *this, const struct _LUID *a2, int a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int i; // ebx
  __int64 v7; // rcx
  unsigned int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  result = CCD_TOPOLOGY::FindPathDescriptorByTarget(this, a2, a3, &v8);
  if ( (int)result >= 0 )
  {
    v5 = v8;
    if ( v8 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
    {
      CCD_TOPOLOGY::ClearModalitySetId(this);
      for ( i = v5 + 1; ; ++i )
      {
        v7 = *((_QWORD *)this + 8);
        if ( i >= *(unsigned __int16 *)(v7 + 20) )
          break;
        CCD_TOPOLOGY::SwapPathsDescriptors(this, i - 1, i);
      }
      --*(_WORD *)(v7 + 20);
    }
    return 0LL;
  }
  return result;
}
