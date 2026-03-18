/*
 * XREFs of ?VidMmRemoveFromSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@@Z @ 0x140091098
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400BABD8 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D5D58 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmRemoveFromSuspendList(struct VIDMM_WORKER_THREAD2 *a1, struct VIDMM_DEVICE *a2)
{
  _OWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx

  v2 = (_OWORD *)((char *)a2 + 184);
  v3 = *((_QWORD *)a2 + 23);
  if ( *(struct VIDMM_DEVICE **)(v3 + 8) != (struct VIDMM_DEVICE *)((char *)a2 + 184)
    || (v4 = (_QWORD *)*((_QWORD *)a2 + 24), (_OWORD *)*v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *((_BYTE *)a2 + 312) &= 0xF8u;
  *v2 = 0LL;
}
