/*
 * XREFs of ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_K0@Z @ 0x1400181F0
 * Callers:
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14000C3A4 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 * Callees:
 *     McTemplateK0xx_EtwWriteTransfer @ 0x1400161A4 (McTemplateK0xx_EtwWriteTransfer.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140018324 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 */

__int64 __fastcall VIDSCH_VSYNC_SMOOTHER::GetSmoothenedFrameTimeQpc(
        VIDSCH_VSYNC_SMOOTHER *this,
        int a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 a5)
{
  unsigned int v7; // ebp
  unsigned int v8; // r9d
  double v9; // xmm1_8
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  double v14; // xmm0_8
  __int64 result; // rax

  v7 = _mm_getcsr();
  v8 = 0;
  _mm_setcsr(v7 | 1);
  v9 = (double)(a2 - *((_DWORD *)this + 10)) * *((double *)this + 3)
     + (double)(int)*((_QWORD *)this + 6)
     + *((double *)this + 2)
     + 0.5;
  v10 = (int)v9;
  if ( v9 < 0.0 )
    v10 = (int)((double)(1 - v10) + v9) - (1 - v10);
  v11 = (unsigned int)(int)(double)v10;
  v12 = a3 - v11;
  *a4 = v11;
  v13 = -v12;
  if ( v12 > 0 )
    v13 = v12;
  if ( v13 > a5 >> 1 )
  {
    if ( (byte_140081244 & 4) != 0 )
      McTemplateK0xx_EtwWriteTransfer();
    if ( (a5 & 0x8000000000000000uLL) != 0LL )
      v14 = (double)(int)(a5 & 1 | (a5 >> 1)) + (double)(int)(a5 & 1 | (a5 >> 1));
    else
      v14 = (double)(int)a5;
    *((double *)this + 4) = v14;
    LinearFitT<256>::Reset(this);
    *a4 = 0LL;
    v8 = -1073741823;
  }
  result = v8;
  _mm_setcsr(v7);
  return result;
}
