/*
 * XREFs of ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C77D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800C70E0 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C7638 (-StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C7664 (-StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C7690 (-StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C76C0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C777C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::UpdateTransition(CIndirectTouchVisual *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  CBaseObject *v6; // rax

  v2 = *((_QWORD *)this + 39);
  if ( v2 )
  {
    v3 = (int)((float)*(double *)(v2 + 48) + 0.5);
    *((_DWORD *)this + 76) = v3;
    if ( v3 >= 0xF )
      *((_DWORD *)this + 76) = 14;
    if ( *(_BYTE *)(v2 + 72) )
      CIndirectTouchVisual::StopFrameTimeline(this);
  }
  v4 = *((_QWORD *)this + 41);
  if ( v4 )
  {
    *((float *)this + 75) = *(double *)(v4 + 48);
    if ( *(_BYTE *)(v4 + 72) )
      CIndirectTouchVisual::StopOpacityTimeline(this);
  }
  v5 = *((_QWORD *)this + 40);
  if ( v5 && *(_BYTE *)(v5 + 72) )
  {
    if ( *((float *)this + 74) == 0.0 )
      goto LABEL_15;
    v6 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
    if ( v6 )
      v6 = (CBaseObject *)CTimeline<float>::CTimeline<float>(
                            v6,
                            (float)(*((float *)this + 72) * *((float *)this + 74)),
                            *((float *)this + 75),
                            0.0,
                            0);
    *((_QWORD *)this + 41) = v6;
    if ( !v6 )
LABEL_15:
      *((_DWORD *)this + 75) = 0;
    CIndirectTouchVisual::StopTimeoutTimeline(this);
  }
  CIndirectTouchVisual::UpdateOpacityAndSource((CImage **)this);
  if ( !*((_QWORD *)this + 39) && !*((_QWORD *)this + 41) && !*((_QWORD *)this + 40) )
  {
    CIndirectTouchVisual::SetETWAnimation((__int64)this, 0);
    CIndirectTouchVisual::StopTimer(this);
  }
  return 0LL;
}
