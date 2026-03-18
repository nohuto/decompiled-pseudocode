/*
 * XREFs of ??1DXGK_LOG@@QEAA@XZ @ 0x14004BB8C
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092750 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGK_LOG::~DXGK_LOG(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    operator delete(v2);
    *this = 0LL;
  }
}
