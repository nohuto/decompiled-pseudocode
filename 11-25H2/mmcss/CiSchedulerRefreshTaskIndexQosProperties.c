/*
 * XREFs of CiSchedulerRefreshTaskIndexQosProperties @ 0x1C000430C
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0001800 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0001BB0 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerSleep @ 0x1C0001F80 (CiSchedulerSleep.c)
 *     CiSchedulerWait @ 0x1C0002650 (CiSchedulerWait.c)
 *     CiSchedulerTaskIndexYield @ 0x1C0003320 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0003D50 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerSetMultimediaMode @ 0x1C0004244 (CiSchedulerSetMultimediaMode.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x1C00010E0 (CiLogThreadBuffering.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0003BA0 (CiSystemUpdateMediaBufferingState.c)
 */

__int64 __fastcall CiSchedulerRefreshTaskIndexQosProperties(__int64 a1)
{
  __int64 result; // rax
  int v3; // esi
  int v4; // r12d
  unsigned int v5; // ebx
  char v6; // bp
  _QWORD *i; // rsi

  result = *(unsigned int *)(a1 + 184);
  v3 = *(_DWORD *)(a1 + 192);
  v4 = *(_DWORD *)(a1 + 184) & 4;
  if ( (result & 1) == 0 )
    goto LABEL_7;
  if ( (result & 0x20) != 0 )
  {
    v5 = 2;
LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
  if ( (result & 0x10) != 0 || (result & 2) == 0 )
  {
LABEL_7:
    v5 = 3;
    goto LABEL_8;
  }
  v5 = 1;
  v6 = 1;
LABEL_9:
  if ( !v4 && v6 )
  {
    ++CiTotalTasksBuffering;
    *(_DWORD *)(a1 + 184) = result | 4;
    result = CiSystemUpdateMediaBufferingState(a1);
  }
  if ( v5 != v3 )
  {
    *(_DWORD *)(a1 + 192) = v5;
    for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = (_QWORD *)*i )
    {
      if ( byte_1C00090D0 )
        CiLogThreadBuffering((__int64)(i - 10), v5 == 1);
      result = KeUpdateThreadTag(i[2], v5);
    }
  }
  if ( v4 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 184) &= ~4u;
      --CiTotalTasksBuffering;
      return CiSystemUpdateMediaBufferingState(a1);
    }
  }
  return result;
}
