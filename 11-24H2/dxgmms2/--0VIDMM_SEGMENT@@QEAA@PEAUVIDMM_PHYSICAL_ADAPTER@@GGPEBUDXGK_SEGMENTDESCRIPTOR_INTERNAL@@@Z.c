/*
 * XREFs of ??0VIDMM_SEGMENT@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER@@GGPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x14009D730
 * Callers:
 *     InitializePhysicalAdapterSegments @ 0x14010BB70 (InitializePhysicalAdapterSegments.c)
 * Callees:
 *     <none>
 */

VIDMM_SEGMENT *__fastcall VIDMM_SEGMENT::VIDMM_SEGMENT(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ADAPTER *a2,
        __int16 a3,
        unsigned __int16 a4,
        const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a5)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  bool v9; // zf
  VIDMM_SEGMENT *result; // rax

  *(_QWORD *)this = &VIDMM_SEGMENT::`vftable';
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 6);
  *((_QWORD *)this + 4) = a2;
  *((_WORD *)this + 20) = a4;
  *((_QWORD *)this + 6) = *((_QWORD *)a5 + 1);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = *(_DWORD *)a5;
  *((_DWORD *)this + 27) = *((_DWORD *)a5 + 14);
  *((_DWORD *)this + 28) = *((_DWORD *)a5 + 23);
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = -1;
  *((_DWORD *)this + 37) = -1;
  *((_DWORD *)this + 38) = -1;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = *((_QWORD *)a5 + 4);
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 31) = *((_QWORD *)a5 + 3);
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 102) = -1;
  *((_BYTE *)this + 412) = 1;
  *((_DWORD *)this + 104) = 0;
  *((_WORD *)this + 210) = a3;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_WORD *)this + 244) = 1;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_WORD *)this + 256) = 0;
  *((_BYTE *)this + 514) = 1;
  *((_DWORD *)this + 129) = 2;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 24) = (char *)this + 192;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  *((_QWORD *)this + 41) = (char *)this + 320;
  *((_QWORD *)this + 40) = (char *)this + 320;
  *((_QWORD *)this + 43) = (char *)this + 336;
  *((_QWORD *)this + 42) = (char *)this + 336;
  *((_QWORD *)this + 22) = 0LL;
  *((_OWORD *)this + 22) = 0LL;
  *((_OWORD *)this + 23) = 0LL;
  *((_OWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *(_OWORD *)((char *)this + 456) = 0LL;
  *(_OWORD *)((char *)this + 472) = 0LL;
  v6 = *((_QWORD *)a5 + 2);
  v7 = dword_140081328[a4];
  if ( (_DWORD)v7 && v6 >= v7 )
    v6 = dword_140081328[a4];
  *((_QWORD *)this + 11) = v6;
  *((_QWORD *)this + 10) = v6;
  if ( (*(_DWORD *)a5 & 0x10000) == 0 )
  {
    v8 = 0x10000000LL;
    if ( v6 < 0x10000000 )
      v8 = v6;
    *((_QWORD *)this + 10) = v8;
  }
  *((_DWORD *)this + 104) = (*(_DWORD *)a5 & 0x800) != 0 ? 0x10000 : 4096;
  if ( (*(_DWORD *)a5 & 0x80000) != 0 )
  {
    *((_DWORD *)this + 129) = 0;
  }
  else if ( (*(_DWORD *)a5 & 0x100000) != 0 )
  {
    *((_DWORD *)this + 129) = 1;
  }
  v9 = (*((_DWORD *)this + 26) & 0x2000) == 0;
  *((_QWORD *)this + 7) = *((_QWORD *)a5 + 5);
  if ( !v9 )
    *((_DWORD *)this + 16) = *((_DWORD *)a5 + 12);
  *((_DWORD *)this + 36) = -1;
  result = this;
  *((_DWORD *)this + 37) = -1;
  return result;
}
