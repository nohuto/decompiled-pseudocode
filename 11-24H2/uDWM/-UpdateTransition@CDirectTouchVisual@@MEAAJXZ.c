/*
 * XREFs of ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18000E380
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18000F708 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x1800120E0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x18001213C (-StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800121B8 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180012240 (-StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateTransition(CDirectTouchVisual *this)
{
  float v2; // xmm8_4
  float v3; // xmm6_4
  __int64 v4; // rax
  _BYTE *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  int v11; // ecx
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  void *v16; // rax
  int v17; // edx
  int v18; // r8d
  int v19; // r9d

  v2 = FLOAT_1_0;
  if ( *((_QWORD *)this + 44) )
    goto LABEL_2;
  v10 = *((_QWORD *)this + 42);
  if ( v10 )
  {
    v11 = *((_DWORD *)this + 82);
    if ( *(_BYTE *)(v10 + 72) )
    {
      if ( (v11 & 8) != 0 )
      {
        v3 = FLOAT_1_0;
        goto LABEL_14;
      }
    }
    else if ( (v11 & 1) != 0 )
    {
      v3 = (float)((float)*(double *)(v10 + 48) * (float)(1.0 - *((float *)this + 76))) + *((float *)this + 76);
LABEL_14:
      v12 = *((float *)this + 73);
      v13 = *((float *)this + 79);
      v14 = *(double *)(v10 + 48);
      if ( v12 >= v14 )
        v15 = (float)((float)(v13 - *((float *)this + 78)) * (float)(v14 / v12)) + *((float *)this + 78);
      else
        v15 = (float)((float)((float)(v14 - v12) / *((float *)this + 74)) * (float)(*((float *)this + 80) - v13)) + v13;
      CDirectTouchVisual::UpdateLocationWithScalar(
        this,
        (const struct tagPOINT *)this + 32,
        (const struct tagRECT *)((char *)this + 264),
        v15);
      goto LABEL_3;
    }
    v3 = 0.0;
    goto LABEL_14;
  }
  if ( (*((_BYTE *)this + 328) & 8) == 0 )
  {
LABEL_2:
    v3 = 0.0;
    goto LABEL_3;
  }
  v3 = FLOAT_1_0;
LABEL_3:
  v4 = *((_QWORD *)this + 43);
  v5 = (char *)this + 360;
  if ( v4 )
  {
    v2 = *(double *)(v4 + 48);
  }
  else if ( *v5 )
  {
    v2 = 0.0;
  }
  CVisual::SetOpacity(this, (float)(v2 * v3));
  v6 = *((_QWORD *)this + 42);
  if ( v6 && *(_BYTE *)(v6 + 72) )
    CDirectTouchVisual::StopDownTimeline(this);
  v7 = *((_QWORD *)this + 43);
  if ( v7 && *(_BYTE *)(v7 + 72) )
  {
    *v5 = 1;
    CDirectTouchVisual::StopFadeTimeline(this);
  }
  v8 = *((_QWORD *)this + 44);
  if ( v8 && *(_BYTE *)(v8 + 72) )
  {
    CDirectTouchVisual::StopDownDelayTimeline(this);
    v16 = DefaultHeap::AllocClear(0x78uLL);
    if ( v16 )
      v16 = (void *)CTimeline<float>::CTimeline<float>((_DWORD)v16, v17, v18, v19, 0);
    *((_QWORD *)this + 42) = v16;
  }
  if ( !*((_QWORD *)this + 42) && !*((_QWORD *)this + 43) && !*((_QWORD *)this + 44) )
    CDirectTouchVisual::StopTimer(this);
  return 0LL;
}
