/*
 * XREFs of ?GetPagingProcessGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x140097D58
 * Callers:
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x140111EAC (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140035820 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::GetPagingProcessGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        char a4)
{
  __int64 **i; // rax
  __int64 *j; // rdx
  __int64 v11; // rbx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_BYTE *)a2 + 40936) & 2) == 0 )
    return 0LL;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12,
    (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 72),
    1);
  for ( i = (__int64 **)*((_QWORD *)this + 7); i != (__int64 **)((char *)this + 56); i = (__int64 **)*i )
  {
    if ( a2 == (struct VIDMM_GLOBAL *)i[6] )
    {
      for ( j = i[4]; j != (__int64 *)(i + 4); j = (__int64 *)*j )
      {
        if ( *((_QWORD *)a2 + 5048) == *(j - 1) && *((_DWORD *)j + 5) == 1 << a4 )
        {
          v11 = *(j - 5) + *((unsigned int *)a3 + 4);
          goto LABEL_14;
        }
      }
      break;
    }
  }
  v11 = 0LL;
LABEL_14:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12);
  return v11;
}
