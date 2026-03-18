/*
 * XREFs of ??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKK_N@Z @ 0x14010553C
 * Callers:
 *     VidMmCreateDmaPool @ 0x14001C1E0 (VidMmCreateDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x140090678 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

VIDMM_DMA_POOL *__fastcall VIDMM_DMA_POOL::VIDMM_DMA_POOL(
        VIDMM_DMA_POOL *this,
        struct VIDMM_GLOBAL *a2,
        int a3,
        struct VIDMM_DEVICE *a4,
        struct DXGCONTEXT *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        bool a11)
{
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  VIDMM_DMA_POOL *result; // rax

  *((_DWORD *)this + 8) = a9;
  *((_DWORD *)this + 9) = a6;
  *((_DWORD *)this + 10) = a6;
  *((_DWORD *)this + 11) = a6;
  *((_DWORD *)this + 12) = a7;
  *((_DWORD *)this + 13) = a7;
  *((_DWORD *)this + 14) = a7;
  *((_DWORD *)this + 15) = a8;
  *((_DWORD *)this + 16) = a8;
  *((_DWORD *)this + 17) = a8;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 6) = a3;
  *((_DWORD *)this + 18) = a10;
  *((_QWORD *)this + 1) = a4;
  *((_QWORD *)this + 2) = a5;
  *((_DWORD *)this + 19) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  v12 = a11 & 0xFD | *((_DWORD *)this + 7) & 0xFFFFFFFC | 0xC;
  *((_DWORD *)this + 7) = v12;
  if ( !a5 || (v13 = 16, !*((_BYTE *)a5 + 430)) )
    v13 = 0;
  v14 = v13 | v12 & 0xFFFFFFEF;
  *((_DWORD *)this + 7) = v14;
  if ( !a5 || (v15 = 32, !*((_BYTE *)a5 + 431)) )
    v15 = 0;
  *((_DWORD *)this + 7) = v15 | v14 & 0xFFFFFFDF;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
