/*
 * XREFs of ??0VIDMM_LINEAR_POOL@@QEAA@PEAX@Z @ 0x14009FA20
 * Callers:
 *     ?InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x140094C64 (-InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1400A20E8 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_H.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010AA20 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

VIDMM_LINEAR_POOL *__fastcall VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this, void *a2)
{
  *((_QWORD *)this + 3) = a2;
  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 18) = (char *)this + 144;
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), 0LL, 0LL, 0, 0x40uLL, 0x38316956u, 0);
  return this;
}
