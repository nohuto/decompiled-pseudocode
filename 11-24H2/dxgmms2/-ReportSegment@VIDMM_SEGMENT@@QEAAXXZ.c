/*
 * XREFs of ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400BFF94
 * Callers:
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x14009D9B0 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400C0F10 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010AA20 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     McTemplateK0qpxxxqqxpu_EtwWriteTransfer @ 0x140049B90 (McTemplateK0qpxxxqqxpu_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegment(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  int v3; // [rsp+40h] [rbp-38h]

  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0qpxxxqqxpu_EtwWriteTransfer(
      (__int64)this,
      *((_QWORD *)this + 3),
      a3,
      (unsigned __int16)(*((_WORD *)this + 20) + 1),
      *(_QWORD *)(*((_QWORD *)this + 3) + 24LL),
      *((_QWORD *)this + 6),
      *((_QWORD *)this + 7),
      *((_QWORD *)this + 9),
      v3,
      *((_DWORD *)this + 26),
      *((_QWORD *)this + 31),
      *((_QWORD *)this + 23),
      *((_BYTE *)this + 516));
}
