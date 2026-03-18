/*
 * XREFs of ?SetRenderTransform@CCachedVisualImage@@IEAAJAEBU_D3DMATRIX@@@Z @ 0x18028D268
 * Callers:
 *     ?ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT_SETTRANSFORMMATRIX@@@Z @ 0x1802A9240 (-ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT_SETTRANSFO.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetRenderTransform(CCachedVisualImage *this, const struct _D3DMATRIX *a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // ebx
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  _DWORD *v8; // rax
  __int128 v10; // [rsp+30h] [rbp-48h]

  v2 = *(_OWORD *)&a2->_11;
  v3 = 0;
  v10 = *(_OWORD *)&a2->_11;
  v5 = *(_OWORD *)&a2->_21;
  v6 = *(_OWORD *)&a2->_31;
  v7 = *(_OWORD *)&a2->_41;
  v8 = (_DWORD *)*((_QWORD *)this + 20);
  if ( !v8 )
  {
    v8 = operator new(0x44uLL);
    if ( !v8 )
    {
      *((_QWORD *)this + 20) = 0LL;
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1EDu, 0LL);
      return v3;
    }
    v8[16] = 0;
    v2 = v10;
    *((_QWORD *)this + 20) = v8;
  }
  *(_OWORD *)v8 = v2;
  *((_OWORD *)v8 + 1) = v5;
  *((_OWORD *)v8 + 2) = v6;
  *((_OWORD *)v8 + 3) = v7;
  v8[16] = 0;
  return v3;
}
